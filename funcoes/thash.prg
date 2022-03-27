*
* Thash Class
*
* Macrosoft SCI Class Thash
*       (c) 1991-2021 Macrosoft Informatica Ltda
* Copyright 1991-2021 Vilmar Catafesta <vcatafesta@gmail.com>
*
* ░░░▒▒▓▓▓███
*
#include <fenix.ch>

/*
aHash := hb_hash( [ Key1, Value1 ], ..., [ KeyN, ValueN ] ) Create, initialize the hash array
lExists := hb_hHaskey( aHash, Key ) Returns a Boolean value, indicates whether there is a pair with the key Key in the array aHash
xValue := hb_hGet( aHash, Key )  Returns the value of the pair with the key Key in the array aHash - the same as xValue := aHash[Key]
xValue := hb_hGetDef( aHash, Key, DefaultVal )  Returns the value of the pair with the key Key in the array aHash or DefaultValif the key is not found
hb_hSet( aHash, Key, xValue ) Sets the value of the pair with the key Key in the array aHash - the same as aHash[Key] := xValue
hb_hDel( aHash, Key )   Destroys a couple of key Key from the array aHash
nPosition := hb_hPos( aHash, Key )  Returns the index of the pair with the key Key in the array aHash
Key := hb_hKeyAt( aHash, nPosition )   Returns the key pair in the array aHash with the index nPosition
xValue := hb_hValueAt( aHash, nPosition, [NewValue] ) Returns the value of a pair of the array aHash with the index nPosition and establishes a new NewValue, if it is set
array := hb_hPairAt( aHash, nPosition )   Returns a two-dimensional array of key/value of the pairs in the array aHash with the index nPosition
hb_hDelAt( aHash, nPosition ) Destroys a couple of from the array aHash with the index nPosition
aKeys := hb_hKeys( aHash ) Returns an array of all the keys array aHash
aValues := hb_hValues( aHash )   Returns an array of all values array aHash
hb_hFill( aHash, xValue )  Fills the array aHash values xValue
aHash2 := hb_hClone( aHash )  Returns a copy of array aHash
aHash2 := hb_hCopy( aHash2, aHash, [nStart], [nCount] )  Copies pairs from the array aHash in aHash2. You can specify the nStart - starting position from which to copy and nCount - how many pairs to copy
aHash2 := hb_hMerge( aHash2, aHash, bBlock | nPosition ) adds pairs from the array aHash in aHash2. bBlock - codeblock, the executable for each pair of source, it is given key, value and index. If bBlock returns the truth, the pair is copied. nPosition - the index of the pair, which will be added to the aHash.
aHash := hb_hEval( aHash, bBlock, [nStart], [nCount] )   Performs codeblock for each pair of array aHash, codeblock gets the key, value and index.
nPosition := hb_hScan( aHash, xValue, [nStart], [nCount], [lExact] ) Looks for value xValue in the array aHash
aHash2 := hb_hSort( aHash )   Sorts an array aHash
lPrevFlag := hb_hCaseMatch( aHash, [lFlag] ) Sets a flag "match case" for an array of aHash and returns the previous value.
aHash := hb_hSetCaseMatch( aHash, [lFlag] )  Sets a flag "match case" for an array of aHash
lPrevFlag := hb_hBinary( aHash, [lFlag] ) Sets a flag "binary" for an array of aHash and returns the previous value.
aHash := hb_hSetBinary( aHash, [lFlag] )  Sets a flag "binary" for an array of aHash
nPrevFlag := hb_hAutoAdd( aHash, [lFlag] )   Sets a flag "auto add" to the array aHash and returns the previous value.
aHash := hb_hSetAutoAdd( aHash, [lFlag] ) Sets a flag "auto add" to the array aHash
nPrevFlag := hb_hKeepOrder( aHash, [lFlag] ) Sets a flag "keep order" for an array of aHash and returns the previous value.
aHash := hb_hSetOrder( aHash, [lFlag] )   Sets a flag "keep order" for an array of aHash
hb_hAllocate( aHash, nItems ) Reserves space for an array of aHash in the number of nItems pairs.
xPrevDef := hb_hDefault( aHash, DefaultValue )  Sets the value of the default for the array aHash and returns the previous one.
*/

*------------------------------------------------------------------------------

CLASS TEnum FROM THash

ENDCLASS

*------------------------------------------------------------------------------
CLASS THash
	protected:
		DATA xNil      INIT nil
		DATA aHash     INIT {=>} HIDDEN
      
	exported:
      PROPERTY lRegistered AS LOGICAL
      PROPERTY Count INIT 0 AS INTEGER

	exported:
		METHOD new(hsTable) CONSTRUCTOR
		DESTRUCTOR Destroy()
		METHOD Create(hsTable)
		METHOD Hash()
		METHOD HS()
      METHOD Value(Key, xValue) SETGET
      METHOD Execute(xValue, nRow, nCol)
      METHOD GetPos(Key)
      METHOD Position(nPosition)
		METHOD ChangeValue(Key, NewValue, nPosition)
	   METHOD Len
      METHOD hKeys                                         //Returns an array of all the keys array aHash
      METHOD hValues                                       //Returns an array of all values array aHash
      METHOD RemoveItem(nPosition)                         //Destroys a couple of from the array aHash with the index nPosition
		METHOD Exist(Key)												  //Returns a Boolean value, indicates whether there is a pair with the key Key in the array aHash 
      MESSAGE delItem  method RemoveItem                   //Returns an array of all the keys array aHash
      MESSAGE keys     method hKeys                        //Returns an array of all the keys array aHash
      MESSAGE getArray method hKeys                        //Returns an array of all the keys array aHash
      MESSAGE change   method ChangeValue
      MESSAGE setValue method Value
      MESSAGE assign   method Value
      MESSAGE getValue method Value
      MESSAGE get 	  method Value
      MESSAGE add      method Value
      MESSAGE put      method Value
      MESSAGE reset    method New
		ERROR HANDLER 	  OnError( xParam )
ENDCLASS

*------------------------------------------------------------------------------

METHOD New(hsTable)
   ::lRegistered := true
   ::Count       ++
	::aHash       := ::Create(hsTable)
	return self

*------------------------------------------------------------------------------	

METHOD Create(hsTable)
	hb_default(@hsTable, {=>})
	hb_HAutoAdd( hsTable, .T. )
	HSetAutoAdd( hsTable, .T.)
	HSetCaseMatch( hsTable, .F. )                 // desabilita o case-sensitive
	return hsTable

*------------------------------------------------------------------------------

METHOD GetPos(Key)
   return (nPosition := hb_hPos(::aHash, Key))
   
*------------------------------------------------------------------------------   

METHOD OnError(xParam)
	LOCAL cMsg := __GetMessage()
	LOCAL cFieldName
	LOCAL nPos
	LOCAL xValue

   if Left( cMsg, 1 ) == '_'
      cFieldName := Substr( cMsg, 2 )
   else
      cFieldName := cMsg
   endif
	xValue := ::getValue(cFieldName)
   if xValue == nil .and. xParam != nil // new key?
      xValue := ::setValue(cFieldName, xParam)
   elseif xValue != nil .and. xParam != nil // new value on key?
      xValue := ::setValue(cFieldName, xParam)
   endif
   
	// if (xValue := ::getvalue(cFieldName)) == nil
		// oErr 					 := ErrorNew()
 	   // oErr:Args          := { Self, xValue }
		// oErr:CanDefault    := .T.
	   // oErr:CanRetry      := .T.
	   // oErr:CanSubstitute := .T.
	   // oErr:Description   := "Bound Hash error"
	   // oErr:GenCode       := EG_BOUND
	   // oErr:Operation     := 'Hash Array Access in GetValue'
	   // oErr:Severity      := ES_ERROR
	   // oErr:SubCode       := 1132
	   // oErr:SubSystem     := "BASE"
		// Throw( oErr )
	// endif	
	return xValue

*------------------------------------------------------------------------------	

METHOD Hash()
	return ::aHash
   
*------------------------------------------------------------------------------	

METHOD HS()
	return ::aHash   

*------------------------------------------------------------------------------	

METHOD Destroy()
   ::lRegistered := true
   self := nil
   return self

*------------------------------------------------------------------------------

METHOD Value(Key, xValue)
	if pcount() >= 2
      ::aHash[Key] := xValue
   endif
	if ::Exist(Key)
		return ::aHash[Key]
	endif
	return nil

*------------------------------------------------------------------------------

METHOD Len()
   return len(::aHash)

*------------------------------------------------------------------------------

METHOD hValues()
   return hb_hValues( ::aHash )

*------------------------------------------------------------------------------

METHOD hKeys()
   return hb_hKeys( ::aHash )

*------------------------------------------------------------------------------

METHOD Exist(Key)
   return hb_hHaskey( ::aHash, Key )

*------------------------------------------------------------------------------

METHOD Execute(xValue, nRow, nCol)
   LOCAL bBlock := ::aHash[xValue]
   if pcount() == 1
      if HB_ISBLOCK( bBlock )
         eval( bBlock)
         return self
      endif
   endif
   if pCount() = 2
      hb_default(@nRow, 2)
      if HB_ISBLOCK( bBlock[nRow])
         eval( bBlock[nRow])
         return self
      endif
   endif
   if pCount() > 2
      hb_default(@nRow, 2)
      hb_default(@nCol, 1)
      if HB_ISBLOCK( bBlock[nRow, nCol])
         eval( bBlock[nRow, nCol])
         return self
      endif
   endif
   return self

*------------------------------------------------------------------------------

METHOD RemoveItem(nPosition)
   hb_default(@nPosition, 1)
   hb_hDelAt( ::aHash, nPosition ) 
   return self

*------------------------------------------------------------------------------

METHOD Position(nPosition, nPos)
   if pcount() == 1
      return hb_hPairAt( ::aHash, nPosition )
   endif
   hb_default(@nPos, 1)
   return hb_hPairAt(::aHash, nPosition)[nPos]

*------------------------------------------------------------------------------

METHOD ChangeValue(Key, NewValue, nPosition)
	LOCAL nIndex := hb_hPos( ::aHash, Key )
	LOCAL aPair  := hb_hPairAt(::aHash, nIndex )
	LOCAL aNew   := {}
	LOCAL a
	LOCAL b

	hb_default(@nPosition, 0)

	if nPosition == 0
		::setvalue(Key, NewValue)
		return self
	endif
	
	for EACH a IN aPair
		if valtype(a) == "A"
			for EACH b IN a
				if nPosition == b:__ENumIndex
					Aadd( aNew, NewValue)
				else
					Aadd( aNew, b)
				endif
			NEXT
		endif
	next
	::removeitem(nIndex)
	::setvalue(Key, aNew)
	return self
	
*------------------------------------------------------------------------------

function THashNew(hsTable)
	return( THash():New(hsTable))
endef

*------------------------------------------------------------------------------

def Enum(hsTable)
	return( TEnum():New(hsTable))
endef

*------------------------------------------------------------------------------

def TEnumNew(hsTable)
	return( TEnum():New(hsTable))
endef

*------------------------------------------------------------------------------

static function funcao4()
   hCores := { 'Cores' => {0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 }}	
	hDays  := { 'Days'  => {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat" }}
	hCor   := { 'cor'   => ;
					{"corborda" => {"value" => 0},;
			  		 "cormenu"  => {"value" => 1},;
		  			 "corcabec" => {"value" => 2},;
					 "corfundo" => {"value" => 3},;
					 "corbarra" => {"value" => 4},;
					 "cor1"     => {"value" => 5}}}
   myHash := Hash()
   myHash[ "cor" ] := Hash()
   HSetCaseMatch( myHash, .F. )
   myHash[ "cor" ][ "corborda" ] := Hash()
	myHash[ "cor" ][ "corborda" ]["value"] := 0
   myHash[ "cor" ][ "cormenu"  ] := Hash()
	myHash[ "cor" ][ "cormenu"  ]["value"] := 1
   myHash[ "cor" ][ "corcabec" ] := Hash()
	myHash[ "cor" ][ "corcabec" ]["value"] := 2
   myHash[ "cor" ][ "corfundo" ] := Hash()
	myHash[ "cor" ][ "corfundo" ]["value"] := 3
   myHash[ "cor" ][ "corbarra" ] := Hash()
	myHash[ "cor" ][ "corbarra" ]["value"] := 4
	myHash[ "cor" ][ "cor1"     ] := Hash()
	myHash[ "cor" ][ "cor1"     ]["value"] := 5
   ? HHasKey( myHash[ "cor" ] , "corborda" )
   ? HHasKey( myHash[ "cor" ] , "cormenu" )		
	? myHash[ "COR"]["cormenu"]["value"]
	HSetCaseMatch( hCor,   .F. ) // desabilita o case-sensitive									
	HSetCaseMatch( hCores, .F. ) // desabilita o case-sensitive									
	HSetCaseMatch( hDays,  .F. ) // desabilita o case-sensitive				   
   return nil
   
*------------------------------------------------------------------------------   

static function MemVarBlock( cMemvar )
   return {| x | ;
      iif( PCount() == 0, ;
         __mvGet( cMemvar ), ;
         __mvPut( cMemvar, x ) ) }
         
*------------------------------------------------------------------------------         

static function funcao2()
   eval({|a,b| qout( 'result', a * b)},10,2)
   return nil

*------------------------------------------------------------------------------

static function funcao3()
   eval({|a,b| qout( 'result', a * b)},10,2)
   return nil

*------------------------------------------------------------------------------
function main(...)
	// LOCAL EnumPos  := Enum({"left" => 1, "center" => 2, "right" => 3})
   // LOCAL oh 		:= THashNEw()
   // LOCAL item
   setcolor("w+/b")
	cls
   // oh:setvalue("COM1", {||Funcao2()})
   // oh:execute('COM1')
   // oh:setvalue("COM2", 2)
   // ? oh:getvalue('COM2')
   // oh:add("COM3", 3)
   // ? oh:getvalue('COM3')
   // oh:setvalue("COM4", {{||Funcao2()}, 1.01})
   // oh:execute('COM4',1)
   // ? oh:getvalue('COM4')[2]
   // oh:SetValue(6.01, {"Layout Janela",        {||Funcao3() }})
   // ? menu := oh:position(5)[1]
   // ? oh:execute(6.01, 2)
   // ? oh:Len()
	// aArray := oh:GetArray()
   // for i := 1 to oH:Len()
      // Qout(aArray[i])
   // next
   // cfmt := "%s%t%s%t%s%t%s%t%s"
   // ntab := 4
   // ? hb_strFormat(cfmt, "item", ntab,"item:__enumindex", ntab,"item:__enumbase", ntab,"item:__enumvalue", ntab,"item:__enumkey")
   // for each item in aArray
   	// qout(hb_strFormat(cfmt, item, ntab, item:__enumindex, ntab, item:__enumbase, ntab, item:__enumvalue, ntab, item:__enumkey))
   // next
   // ? oh:Exist('COM1')
	// //   oh:RemoveItem(2) // COM2  
   // ? oh:Exist('COM2')
   // ? oh:Exist('COM3')
   // ? oh:Exist('COM4')
   // ? oh:Exist(6.01)
   // ? oh:Exist('MULTI')
   // ? oh:SetValue("00001", {"VILMAR", 54, date()})
   //	? oh:GetValue("00001")[1], valtype(oh:GetValue("00001")[1])
   //	? oh:GetValue("00001")[2], valtype(oh:GetValue("00001")[2])
   //	? oh:GetValue("00001")[3], valtype(oh:GetValue("00001")[3])
   //	? oh:ChangeValue("00001", "X", 1)
   //	? oh:ChangeValue("00001", "Y", 2)
   //	? oh:ChangeValue("00001", {"EVILI FRANCIELE DA SILVA SOARES", 2021-1984}, 3)
   //	? oh:GetValue("00001")[1], 	valtype(oh:GetValue("00001")[1])
   //	? oh:GetValue("00001")[2], 	valtype(oh:GetValue("00001")[2])
   //	? oh:GetValue("00001")[3], 	valtype(oh:GetValue("00001")[3])
   //	? oh:GetValue("00001")[3][1],	valtype(oh:GetValue("00001")[3][1])
   //	? oh:GetValue("00001")[3][2],	valtype(oh:GetValue("00001")[3][2])
   //	? oh:GetValue("00001")[3,1], 	valtype(oh:GetValue("00001")[3,1])
   //	? oh:GetValue("00001")[3,2], 	valtype(oh:GetValue("00001")[3,2])
   //	? oh:ChangeValue("COM1", "ITEM")
   //	? oh:GetValue("COM1")
   //	? oh:Len()
   // ? valtype(valtype(oh:Hash()))
   // browsearray(oh:Hash())  

   // atemp := hb_Hash( "six", 6, "eight", 8, "eleven", 11 )

   // for each item in oH:Hash()
      // qout(item:__enumkey, item:__enumvalue)
   // next


   // oh:New()
   // oh:SetValue("00001", {"00001", "EVILI FRANCIELE DA SILVA SOARES", 2021-1984, Date(), 10.00})
   // oh:SetValue(Date(), {"00002", Date(), "VILMAR", 2021-1966, Date(), 10.00})
   // browsearray(oh:Hash())

   // ? ValType( MemVarBlock( "myvar" ) )
   // ? EnumPos:Left
   //? EnumPos:Vilmar

   // oCor := THashNEw()
   // oCor:hash["teste"] := 10
   // oCor:hs["vilmar"] := "CATAFESTA"
   // ? oCor:Hash["teste"]
   // ? oCor:hs["vilmar"]
   // ? oCor:Vilmar
   // browsearray(oCor:Hash())
   // inkey(0)
   
   // oh := THashNEw()
   // oh:SetValue("00001", {"00001", "EVILI FRANCIELE DA SILVA SOARES", 2021-1984, Date(), 10.00})
   // oh:SetValue("00002", {"00002", "VILMAR CATAFESTA", 2021-1966, Date(), 10.00})
   // oh:SetValue("ZERAR", .t.)
   // oh:hs["vilmar"] := "catafesta"
   
   // hDays := THashNew()
   // hDays:SetValue('Days', {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat" })
   
   // hCor := THashNew()
   // hCor:SetValue('cor', {"corborda", "corcabec", "cormenu" })
   
   // myHash := Hash()
   // myHash["cor"] := Hash()
   // myHash["cor"]["corborda"] := Hash()
	// myHash["cor"]["corborda"]["value"] := 31
   
   // browsearray(oH:hash())
   // browsearray(hDays:hash)
   // browsearray(hCor:hs)
   // ? oh:Len()   
   // ? hDays:len()   
   // ? oh:Count
   // ? oh:lRegistered
   // ? myHash["cor"]["corborda"]["value"]

*************************************************************
   
   // hRecControl := THashNEw()
   // hRecControl:SetValue('ZERAR', .F.)
   // hRecControl:hs['TESTE'] := "TESTE"
   // hRecControl:TESTE  := "novo"
   // hRecControl:GALEGO := "galego"
   // hRecControl:galegO := "vilmar"
   
   // WITH OBJECT hRecControl
      // :DELL  := "DELL ONE"   
      // browsearray(hRecControl:hs)
      // ? hRecControl:ZERAR 
      // ? hRecControl:TESTE
      // ? hRecControl:GALEGO
      // ? hRecControl:Dell
   // ENDWITH
	// inkey(0)

*************************************************************
/*
   hDados   := THashNew()
   hControl := THashNew()

   IF hControl:Exist(1)
      hControl:RemoveItem(hControl:GetPos(1))
   ELSE
      hControl:SetValue(1, "A")
      hControl:SetValue(2, "b")
      hControl:SetValue(3, "c")
    ENDIF

   hControl:Data := {"A", "B", "C"}
   hDados:Data   := {"A", "B", "C"}

   browsearray(hControl:hs)
   browsearray(hDados:hs)

   hControl:Data[1] := "VILMAR"

   browsearray(hControl:hs)
   browsearray(hDados:hs)


   hControl:RemoveItem(hControl:GetPos(2))
   browsearray(hControl:hs)

   ? hControl:Exist(1)
   ? hControl:Exist(2)
   ? hControl:Exist(3)
   ? hControl:Exist(4)
	inkey(0)
*/
*************************************************************
   r := THashNEw()

   r:aReg := {}
   aadd(r:aReg, 25)
   aadd(r:aReg, 30)
   adel(r:aReg, 1)
   asize(r:aReg, len(r:areg)-1)
   ? len(r:aReg)
   ? r:aReg[1]
   browsearray(r:aReg)
   browsearray(r:hs())

