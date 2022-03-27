#include "fenix.ch"

*--------------------------------------------------------------------------*

def UfInclusao()
*****************
	LOCAL GetList   := {}
	LOCAL Arq_Ant   := Alias()
	LOCAL Ind_Ant   := IndexOrd()
   LOCAL cScreen   := SaveScreen()
   LOCAL cEsta
   LOCAL cNome
   LOCAL nIcms

   oMenu:Limpa()
   Area("uf")
   while true
	   cEsta       := space(2)
      cNome       := space(40)
      nIcms       := 0

		MaBox(10, 10, 16, LastCol()-1, "CADASTRO DE UF")
		@ 12, 11 say 'Uf............:' get cEsta Pict "@!" Valid UfCerto( cEsta )
		@ 13, 11 say 'Estado........:' get cNome pict "@!" Valid IF( Empty( cNome ), ( ErrorBeep(), Alerta("Erro: Entrada Invalida"), FALSO ), OK )
		@ 14, 11 say 'Icms..........:' get nIcms pict "99.99"
		read
		if lastKey() = ESC
			errorbeep()
			if conf("Pergunta: Deseja retornar?")
			   AreaAnt( Arq_Ant, Ind_Ant )
		      restela(cScreen)
				return nil
			endif
			loop
		endif
		ErrorBeep()
		if conf("Pergunta: Deseja gravar?")
			if ufCerto(cEsta)
				if Uf->(Incluiu())
					Uf->Uf   := cEsta
					Uf->Nome := cNome
					Uf->Icms := nIcms
				endif
				Uf->(Libera())
			endif
		endif
	enddo
endef

*--------------------------------------------------------------------------*

def UfCerto( cUf )
******************
	LOCAL Arq_Ant := Alias()
	LOCAL Ind_Ant := IndexOrd()

	if LastKey() = UP
		return( true )
	endif

	if Empty( cUf )
		ErrorBeep()
		Alerta( "Erro: Entrada invalida!")
		return( false )
	endif

	Area("uf")
	Uf->(Order( UF_UF ))
	if Uf->(DbSeek( cUf ))
		ErrorBeep()
		Alerta("ERRO: Ja registrado ou,; incluido por outra estacao...")
		AreaAnt( Arq_Ant, Ind_Ant )
		return( false )
	endif
	AreaAnt( Arq_Ant, Ind_Ant )
	return( true )
endef

*--------------------------------------------------------------------------*

def ufErrado( cEsta, cNome, nRow, nCol)
***************************************
	LOCAL aRotina			  := {{|| UfInclusao()}}
	LOCAL aRotinaAlteracao := {{|| UfDbedit( OK )}}
	LOCAL Ind_Ant			  := IndexOrd()
	LOCAL Arq_Ant			  := Alias()

	Area("uf")
	uf->(Order( UF_UF ))
	if (Lastrec() = 0 )
		ErrorBeep()
		if Conf(" INFO: Nenhuma UF Disponivel. Registrar ?")
			UfInclusao()
		endif
		AreaAnt( Arq_Ant, Ind_Ant )
		Return( FALSO )
	endif
	if Uf->(!DbSeek( cEsta ))
		Uf->(Order( UF_NOME ))
		Uf->(Escolhe( 03, 01, 22, "uf + chr(186) + Nome  ", "UF ESTADO", aRotina,, aRotinaAlteracao ))
	endif
	cEsta := Uf->Uf
	cNome := Uf->Nome
	if nRow != nil
		write( nRow, nCol, strtrim(cNome))
	endif
	AreaAnt( Arq_Ant, Ind_Ant )
	Return( OK )
endef

*--------------------------------------------------------------------------*

def RepresentanteErrado( cRepre, cNome, nRow, nCol)
********************************************************
	LOCAL aRotina			  := {{|| RepresentanteInclusao()}}
	LOCAL aRotinaAlteracao := {{|| RepresentanteInclusao(true)}}
	LOCAL Ind_Ant			  := IndexOrd()
	LOCAL Arq_Ant			  := Alias()

	Area("represen")
	Represen->(Order( REPRESEN_CODI ))
	if (Lastrec() = 0 )
		ErrorBeep()
		if Conf(" Pergunta: Nenhum REPRESENTANTE disponivel. Registrar ?")
			RepresentanteInclusao()
		endif
		AreaAnt( Arq_Ant, Ind_Ant )
		Return( FALSO )
	endif
	if Represen->(!DbSeek( cRepre ))
		Represen->(Order( REPRESEN_NOME ))
		Represen->(Escolhe( 03, 01, 22, "codr + chr(186) + nrep + chr(186) + Completo", "CODI REPRESENTANTE   NOME COMPLETO", aRotina,, aRotinaAlteracao ))
	endif
	cRepre := Represen->Codr
	cNome  := Represen->nRep
	if !isnil(nRow)
		write( nRow, nCol, cNome)
	endif
	AreaAnt( Arq_Ant, Ind_Ant )
	Return( OK )
endef

*--------------------------------------------------------------------------*

def caduser()
*************
	LOCAL GetList   := {}
	LOCAL Arq_Ant   := Alias()
	LOCAL Ind_Ant   := IndexOrd()
   LOCAL cScreen   := SaveScreen()
   LOCAL cCep
   LOCAL cLogin
   LOCAL cPassword
   LOCAL BLQ
	LOCAL cNome
	LOCAL cEnde
	LOCAL cBair
	LOCAL cCida
	LOCAL cEsta
	LOCAL cBloqueado

   oMenu:Limpa()
   Area("cadfun")
   Area("usuario")
   while true
	   cLogin      := space(15)
      cPassword   := space(6)
      cCep        := Space(9)
		cNome		   := Cadfun->(Space(FieldLen(FieldPos("nfunc"))))
		cEnde		   := Cadfun->(Space(FieldLen(FieldPos("endrco"))))
		cBair		   := Cadfun->(Space(FieldLen(FieldPos("bairro"))))
		cCida		   := Cadfun->(Space(FieldLen(FieldPos("cdde"))))
		cEsta		   := Cadfun->(Space(FieldLen(FieldPos("uf"))))
		cBloqueado  := "B"

		MaBox(11, 10, 18, LastCol()-1, "CADASTRO DE USUARIO")
		@ 12, 11 say 'Usuario...........:' get cLogin    Pict "@!" 			valid VerificarUsuario(cLogin) .AND. !Empty(cLogin)
		@ 13, 11 say 'Senha.............:' get cPassword pict "@S"
		@ 14, 11 say 'Nome Completo.....:' get cNome     pict "@!"
		@ 15, 11 say 'CEP...............:' get cCep      pict "99999-999" valid CepErrado( @cCep, @cCida, @cEsta, @cBair )
		@ 15, 41 say 'Cidade.:'            get cCida     pict "@!"
		@ 15, 76 say 'UF.:'                get cEsta     pict "@!"  		valid UfErrado(@cEsta)
		@ 16, 11 say 'Endereco..........:' get cEnde     pict "@!"
		@ 17, 11 say 'Bairro............:' get cBair     pict "@!"
		read
		if lastKey() = ESC
			errorbeep()
			if conf("Pergunta: Deseja retornar?")
			   AreaAnt( Arq_Ant, Ind_Ant )
		      restela(cScreen)
				return nil
			endif
			loop
		endif
		ErrorBeep()
		if conf("Pergunta: Deseja gravar?")
		if VerificarUsuario(cLogin)
			if CadFun->(Incluiu())
			   if Usuario->(Incluiu())
				   cCodi 				:= StrZero(Usuario->Id, 4)
					Usuario->CodUsu   := cCodi
					Usuario->Fantazia := cLogin
					Usuario->Senha  	:= MSEncrypt(cPassword)
					Usuario->DtCad  	:= Date()

					CadFun->CodUsu 	:= cCodi
					CadFun->CodFun 	:= cCodi
					CadFun->Dtaadm 	:= Date()
					CadFun->Dtadm  	:= Date()
					CadFun->Dtanac 	:= Date()
					CadFun->Endrco 	:= cEnde
					CadFun->Bairro 	:= cBair
					CadFun->Cdde   	:= cCida
					CadFun->Uf     	:= cEsta
					Cadfun->cadastro 	:= cBloqueado 
               Cadfun->venda 		:= cBloqueado 
               Cadfun->regv 		:= cBloqueado 
               Cadfun->bxv 		:= cBloqueado 
               Cadfun->edtv 		:= cBloqueado 
               Cadfun->estqv 		:= cBloqueado
					Cadfun->lstv 		:= cBloqueado 
               Cadfun->psqv 		:= cBloqueado 
               Cadfun->nfv 		:= cBloqueado 
               Cadfun->compra 	:= cBloqueado
					Cadfun->regc 		:= cBloqueado 
               Cadfun->bxc 		:= cBloqueado 
               Cadfun->edtc 		:= cBloqueado 
               Cadfun->lstc 		:= cBloqueado
					Cadfun->estqc 		:= cBloqueado 
               Cadfun->psqc 		:= cBloqueado 
               Cadfun->nfc 		:= cBloqueado 
               Cadfun->etqc 		:= cBloqueado
					Cadfun->estoque 	:= cBloqueado 
               Cadfun->plne 		:= cBloqueado 
               Cadfun->cnce 		:= cBloqueado 
               Cadfun->edte 		:= cBloqueado
               Cadfun->pere 		:= cBloqueado
					Cadfun->rgpe 		:= cBloqueado 
               Cadfun->cheq 		:= cBloqueado 
               Cadfun->dpe 		:= cBloqueado 
               Cadfun->lja 		:= cBloqueado
               Cadfun->fna 		:= cBloqueado
					Cadfun->etqed 		:= cBloqueado
               Cadfun->ftv 		:= cBloqueado
               Cadfun->nfe 		:= cBloqueado 
               Cadfun->nfsa		:= cBloqueado
               Cadfun->nfen 		:= cBloqueado 
               Cadfun->dvv 	   := cBloqueado
					Cadfun->clicad    := cBloqueado
               Cadfun->forcad    := cBloqueado 
               Cadfun->mercad    := cBloqueado 
               Cadfun->procad    := cBloqueado 
               Cadfun->cfocad    := cBloqueado
					Cadfun->cdbcad    := cBloqueado 
               Cadfun->estcad    := cBloqueado 
               Cadfun->clacad    := cBloqueado 
               Cadfun->muncad    := cBloqueado 
               Cadfun->repcad    := cBloqueado
					Cadfun->tracad    := cBloqueado
               Cadfun->cescad    := cBloqueado
               Cadfun->embcad    := cBloqueado					
				endif
				CadFun->(Libera())
				Usuario->(Libera())
			endif
      endif
      endif
	enddo
endef

*--------------------------------------------------------------------------*

def VerificarUsuario( cNome )
	LOCAL Arq_Ant := Alias()
	LOCAL Ind_Ant := IndexOrd()

	Area("Usuario")
	Usuario->(Order( USUARIO_NOME ))
	IF Usuario->(DbSeek( cNome ))
		ErrorBeep()
		Alerta("Erro: Usuario Ja Registrado.")
		Return( FALSO )
	EndIF
	Return( OK )
endef

*--------------------------------------------------------------------------*

def CepInclusao( lAlteracao )
*****************************
	LOCAL GetList		:= {}
	LOCAL cScreen		:= SaveScreen()
	LOCAL lModificar	:= FALSO
	LOCAL nOpcao		:= 0
	LOCAL cCep
	LOCAL cCida
	LOCAL cBair
	LOCAL cEsta
	LOCAL cString
	LOCAL cSwap
	LOCAL lSair

	if lAlteracao != NIL .AND. lAlteracao
		lModificar := OK
	endif

	if !lModificar
		if !PodeIncluir()
			ResTela( cSCreen )
			Return
		endif
	endif

	Area("Cep")
	Cep->(Order( CEP_CEP ))
	WHILE OK
		oMenu:Limpa()
		if lModificar
			cCep		 := Cep->Cep
			cCida 	 := Cep->Cida
			cBair 	 := Cep->Bair
			cEsta 	 := Cep->Esta
			cString	 := "ALTERACAO DE CEP"
		Else
			cCep		 := Space(09)
			cCida 	 := Space(25)
			cBair 	 := Space(25 )
			cEsta 	 := Space(02)
			cString := "INCLUSAO DE NOVO CEP"
		endif
		cSwap := cCep
		lSair := FALSO
		WHILE OK
			MaBox( 06, 02, 13, 78, cString )
			@ 08		 , 03 Say  "Novo Cep....:" Get cCep      Pict "99999-999" valid CepCerto( @cCep, lModificar, cSwap )
			@ Row()+1 , 03 Say  "Cidade......:" Get cCida     Pict "@!"
			@ Row()+1 , 03 Say  "Bairro......:" Get cBair     Pict "@!"
			@ Row()+1 , 03 Say  "Estado......:" Get cEsta     Pict "@!"        valid UfErrado(@cEsta, nil, Row(), Col()+1)
			Read
			if LastKey() = ESC
				lSair := OK
				Exit
			endif
			if lModificar
				nOpcao := Alerta("Pergunta: Voce Deseja ? ", {" Alterar", " Cancelar ", "Sair "})
			Else
				nOpcao := Alerta("Pergunta: Voce Deseja ? ", {" Incluir", " Alterar ", "Sair "})
			endif
			if nOpcao = 1
				if lModificar
					if Cep->(TravaReg())
						Cep->Cep 	  := cCep
						Cep->Cida	  := cCida
						Cep->Bair	  := cBair
						Cep->Esta	  := cEsta
						Cep->(Libera())
						lSair := OK
						Exit
					endif
				Else
					if Cep->(Incluiu())
						Cep->Cep 	  := cCep
						Cep->Cida	  := cCida
						Cep->Bair	  := cBair
						Cep->Esta	  := cEsta
						Cep->(Libera())
						Exit
					endif
				endif

			Elseif nOpcao = 2 // Alterar
				Loop

			Elseif nOpcao = 3 // Sair
				lSair := OK
				Exit

			endif
		EndDo
		if lSair
			ResTela( cScreen )
			Exit

		endif
	enddo
endef

*--------------------------------------------------------------------------*

def RepresentanteInclusao( lAlteracao )
****************************************
	LOCAL GetList		:= {}
	LOCAL cScreen		:= SaveScreen()
	LOCAL lModificar	:= FALSO
	LOCAL nOpcao		:= 0
	LOCAL dData
	LOCAL cCodi
	LOCAL cRepre
	LOCAL cCompleto
	LOCAL cString
	LOCAL cSwap
	LOCAL lSair

	if lAlteracao != NIL .AND. lAlteracao
		lModificar := OK
	endif

	if !lModificar
		if !PodeIncluir()
			ResTela( cSCreen )
			Return
		endif
	endif

	Area("represen")
	Represen->(Order( REPRESEN_CODI ))
	WHILE OK
		oMenu:Limpa()
		if lModificar
			cCodi	 		:= Represen->Codr
			cRepre		:= Represen->nRep
			cCompleto 	:= Represen->Completo
			cString	 	:= "ALTERACAO DE REPRESENTANTE"
		Else
			Represen->(DbGoBottom())
			cCodi 		:= Strzero(Represen->Id + 1, 4)
			cRepre		:= Represen->(Space(FieldLen(FieldPos("nrep"))))
			cCompleto 	:= Represen->(Space(FieldLen(FieldPos("completo"))))
			cString 		:= "INCLUSAO DE NOVO REPRESENTANTE"
		endif
		cSwap := cCodi
		lSair := FALSO
		WHILE OK
			MaBox( 06, 02, 12, 78, cString )
			@ 08		 , 03 Say  "Novo Codi...,,:" Get cCodi     Pict "9999" valid RepresentanteCerto( @cCodi, lModificar, cSwap )
			@ Row()+1 , 03 Say  "Representante.:" Get cRepre    Pict "@!"
			@ Row()+1 , 03 Say  "Nome Completo.:" Get cCompleto Pict "@!"
			Read
			if LastKey() = ESC
				lSair := OK
				Exit
			endif
			if lModificar
				nOpcao := Alerta("Pergunta: Voce Deseja ? ", {" Alterar", " Cancelar ", "Sair "})
			Else
				nOpcao := Alerta("Pergunta: Voce Deseja ? ", {" Incluir", " Alterar ", "Sair "})
			endif
			if nOpcao = 1
				if lModificar
					if Represen->(TravaReg())
						Represen->Codr	  		:= cCodi
						Represen->nrep	  		:= cRepre
						Represen->Completo	:= cCompleto
						Represen->(Libera())
						lSair := OK
						Exit
					endif
				Else
					if Represen->(Incluiu())
						Represen->Codr	  		:= cCodi
						Represen->nrep	  		:= cRepre
						Represen->Completo	:= cCompleto				
						Represen->(Libera())
						Exit
					endif
				endif

			Elseif nOpcao = 2 // Alterar
				Loop

			Elseif nOpcao = 3 // Sair
				lSair := OK
				Exit

			endif
		EndDo
		if lSair
			ResTela( cScreen )
			Exit

		endif
	EndDo
endef

*--------------------------------------------------------------------------*

def CepCerto( cCep, lModificar, cSwap )
***************************************
	FIELD Cep, Cida, Bair

	if LastKey() = UP
		Return( OK )
	endif

	if lModificar != NIL .AND. lModificar
		if cCep == cSwap
			Return( OK )
		endif
	endif

	if Empty( cCep )
		ErrorBeep()
		Alerta("Erro: Entrada de Cep Invalido.")
		Return( FALSO )
	endif
	Cep->(Order( CEP_CEP ))
	if Cep->(DbSeek( cCep ))
		ErrorBeep()
		Alerta("Erro: Cep Ja Registrado. " + Cep->( AllTrim( Cida)))
		Return( FALSO )
	endif
	Return( OK )
endef

*--------------------------------------------------------------------------*

def RepresentanteCerto( cCodi, lModificar, cSwap )
**************************************************
	FIELD Codr, nRep, Completo

	if LastKey() = UP
		Return( OK )
	endif

	if lModificar != NIL .AND. lModificar
		if cCodi == cSwap
			Return( OK )
		endif
	endif

	if Empty( cCodi )
		ErrorBeep()
		Alerta("Erro: Entrada invalida.")
		Return( FALSO )
	endif
	Represen->(Order( REPRESEN_CODI ))
	if Represen->(DbSeek( cCodi ))
		ErrorBeep()
		Alerta("Erro: Representante ja Registrado. " + Represen->( AllTrim( nRep)))
		Return( FALSO )
	endif
	Return( OK )
endef

*--------------------------------------------------------------------------*

def CepErrado( cCep, cCida, cEsta, cBair )
******************************************
	LOCAL aRotina			  := {{|| CepInclusao()}}
	LOCAL aRotinaAlteracao := {{|| CepInclusao( OK )}}
	LOCAL Ind_Ant			  := IndexOrd()
	LOCAL Arq_Ant			  := Alias()

	Area("Cep")
	Cep->(Order( CEP_CEP ))
	if (Lastrec() = 0 )
		ErrorBeep()
		if Conf(" Pergunta: Nenhum Cep Disponivel. Registrar ?")
			CepInclusao()
		endif
		AreaAnt( Arq_Ant, Ind_Ant )
		Return( FALSO )
	endif
	if Cep->(!DbSeek( cCep ))
		Cep->(Order( CEP_CIDA ))
		Cep->(Escolhe( 03, 01, 22, "Cep + chr(186) + Cida + chr(186) + Esta + chr(186) + Bair ", "CEP        CIDADE                      UF BAIRRO", aRotina,, aRotinaAlteracao ))
	endif
	cCep	:= Cep->Cep
	cCida := Cep->Cida
	cEsta := Cep->Esta
	cBair := Cep->Bair
	AreaAnt( Arq_Ant, Ind_Ant )
	return true
endef

*--------------------------------------------------------------------------*

def CepPrint()
**************
	LOCAL cScreen	  := SaveScreen()
	LOCAL aMenuArray := { " Video ", " Impressora " }
	LOCAL nChoice := 0

	while true
		oMenu:Limpa()
		M_Title("CONSULTA/IMPRESSAO DE CEP")
		nChoice := FazMenu( 10,10, aMenuArray, Cor())
		Do Case
			Case nChoice = 0
				return(ResTela( cScreen ))

			Case nChoice = 1
				CepVideo()

			Case nChoice = 2
				CepImpressora()

		EndCase
	enddo
endef

*--------------------------------------------------------------------------*

def CepVideo()
**************
   LOCAL cScreen := SaveScreen()
   LOCAL aCep	  := {}
   LOCAL cTela

   Area("Cep")
   Cep->(Order( CEP_CEP ))
   Cep->(DbGoTop())
   cTela := Mensagem("Aguarde ... ", Cor())

   WHILE !Eof() .AND. Rep_Ok()
       Aadd( aCep,  Cep->Cep + " " + Cep->Cida + " " + Cep->Esta + " " + Cep->Bair )
       Cep->(DbSkip(1))
   EndDo

   if Len( aCep ) != ZERO
      ResTela( cTela )
      cString := " CEP       CIDADE                    UF BAIRRO"
      Print( 00, 00, cString + Space( 80 - Len(  cString )), Roloc(Cor()))
      M_Title( "ESC Retorna ")
      FazMenu( 01, 00, aCep, Cor())
   endif
   return(ResTela( cScreen ))
endef

*--------------------------------------------------------------------------*

def CepImpressora()
*******************
	LOCAL cScreen := SaveScreen()
	LOCAL Tam	  := 80
	LOCAL Col	  := 58
	LOCAL Pagina  := 0
	LOCAL lSair   := FALSO

	if !InsTru80() .OR. !LptOk()
		return(ResTela( cScreen ))
	endif

	Area("Cep")
	Cep->(Order( CEP_CEP ))
	Cep->(DbGoTop())
	Mensagem("Aguarde. Imprimindo.", Cor())
	PrintOn()
	SetPrc( 0, 0 )
	WHILE Cep->(!Eof()) .AND. Rel_Ok()
	  if Col >= 58
		  Write( 00, 00, Linha1( Tam, @Pagina))
		  Write( 01, 00, Linha2())
		  Write( 02, 00, Linha3(Tam))
		  Write( 03, 00, Linha4(Tam, SISTEM_NA2 ))
		  Write( 04, 00, Padc( "LISTAGEM DE CEPS",Tam ) )
		  Write( 05, 00, Linha5(Tam))
		  Write( 06, 00, "CEP       CIDADE                    UF BAIRRO")
		  Write( 07, 00, Linha5(Tam))
		  Col := 8
	  endif

	  Qout( Cep, Cida, Esta, Bair )
	  Col := Col + 1

	  if Col >= 58
		  Write( Col, 0,	Repl( SEP, Tam ))
		  __Eject()
	  endif

	  Cep->(DbSkip(1))
	EndDo
	__Eject()
	PrintOff()
	return(ResTela( cScreen ))
endef

*--------------------------------------------------------------------------*

def PickTipoRegime( cPick, cList, nRow, nCol )
	LOCAL aList 	 := { "SIMPLES NACIONAL", "OUTROS REGIMES", "ISENTO"}
	LOCAL aSituacao := { 1, 2, 3 }
	LOCAL cScreen	 := SaveScreen()
	LOCAL nChoice

	if (nchoice := Ascan( aSituacao, cPick )) == 0
		MaBox( 11, 01, 14, 44, NIL, NIL, Roloc( Cor()) )
		if (nChoice := AChoice( 12, 02, 13, 43, aList )) != 0
			cPick := aSituacao[ nChoice ]
		else
			return false
		endif
	endif		
	cPick := aSituacao[ nChoice ]
	cList := aList[ nChoice ]
	resTela( cScreen )
	if !isnil(nRow) .and. !isnil(nCol)
		write( nRow, nCol, cList)
	endif	
	return true
endef

*--------------------------------------------------------------------------*

def PickTipoCobranca( cPick, cList, nRow, nCol )
	LOCAL aList 	 := { "COMUM", "ESPECIAL"}
	LOCAL aSituacao := { 1, 2 }
	LOCAL cScreen	 := SaveScreen()
	LOCAL nChoice

	if (nChoice := Ascan( aSituacao, cPick )) == 0
		MaBox( 11, 01, 14, 44, NIL, NIL, Roloc( Cor()) )
		if (nChoice := AChoice( 12, 02, 13, 43, aList )) != 0
			cPick := aSituacao[ nChoice ]
		else
			return false
		endif
	endif
	cPick := aSituacao[ nChoice ]
	cList := aList[ nChoice ]
	resTela( cScreen )
	if !isnil(nRow) .and. !isnil(nCol)
		write( nRow, nCol, cList)
	endif	
	return true
endef

*--------------------------------------------------------------------------*

def PickTipoContribuinte( cPick, cList, nRow, nCol )
	LOCAL aList 	 := { "CONTRIBUINTE ICMS", "CONTRIBUENTE ISENTO","NAO CONTRIBUINTE"}
	LOCAL aSituacao := { 1, 2, 9 }
	LOCAL cScreen	 := SaveScreen()
	LOCAL nChoice

	if (nChoice := Ascan( aSituacao, cPick )) == 0
		MaBox( 11, 01, 15, 44, NIL, NIL, Roloc( Cor()) )
		if (nChoice := AChoice( 12, 02, 14, 43, aList )) != 0
			cPick := aSituacao[ nChoice ]
		else
			return false
		endif
	endif
	cPick := aSituacao[ nChoice ]
	cList := aList[ nChoice ]
	resTela( cScreen )
	if !isnil(nRow) .and. !isnil(nCol)
		write( nRow, nCol, cList)
	endif	
	return true
endef

*--------------------------------------------------------------------------*

def PickTipoPagamento( cPick, cList, nRow, nCol )
	LOCAL aList 	 := { "BOLETO","DINHEIRO","CHEQUE","DEPOSITO","NENHUM"}
	LOCAL aSituacao := { 1, 2, 3 , 4, 5 }
	LOCAL cScreen	 := SaveScreen()
	LOCAL nChoice

	if (nChoice := Ascan( aSituacao, cPick )) == 0
		MaBox( 11, 01, 17, 44, NIL, NIL, Roloc( Cor()) )
		if (nChoice := AChoice( 12, 02, 16, 43, aList )) != 0
			cPick := aSituacao[ nChoice ]
		else
			return false
		endif
	endif
	cPick := aSituacao[ nChoice ]
	cList := aList[ nChoice ]
	resTela( cScreen )
	if !isnil(nRow) .and. !isnil(nCol)
		write( nRow, nCol, cList)
	endif	
	return true
endef

*--------------------------------------------------------------------------*

def PickTipoCliente( cPick, cList, nRow, nCol )
	LOCAL aList 	 := { "PESSOA FISICA","EMPRESA"}
	LOCAL aSituacao := { "P", "E" }
	LOCAL cScreen	 := SaveScreen()
	LOCAL nChoice

	if (nChoice := Ascan( aSituacao, cPick )) == 0
		MaBox( 11, 01, 14, 44, NIL, NIL, Roloc( Cor()) )
		if (nChoice := AChoice( 12, 02, 13, 43, aList )) != 0
			cPick := aSituacao[ nChoice ]
		else
			return false
		endif
	endif
	cPick := aSituacao[ nChoice ]
	cList := aList[ nChoice ]
	resTela( cScreen )
	if !isnil(nRow) .and. !isnil(nCol)
		write( nRow, nCol, space(13))
		write( nRow, nCol, cList)
	endif	
	return true
endef

*--------------------------------------------------------------------------*

def ClientesInclusao()
***************************
	LOCAL GetList := {}
	LOCAL cScreen := SaveScreen()

	while true
		oMenu:Limpa()
		Area("cadcli")
		Cadcli->(DbGoBottom())
		cCodi 		:= Strzero(Cadcli->Id + 1, 4)
		fj 			:= "E"
		DT				:=	date()
		rdata			:=	hSys:Date
		rativo		:=	spac(1)
		cSit			:=	spac(13)
		rcliente		:=	spac(22)
		Rrazao		:=	spac(40)
		cEnde			:=	spac(40)
		cLogra		:=	spac(40)
		Rnroend		:=	spac(6)
		Rcompl		:=	spac(20)
		cCida			:=	spac(30)
		cEsta			:=	spac(2)
		Rcnpj			:=	spac(18)
		Rinscr		:=	spac(15)
		Rcpf			:=	spac(14)
		Rinscrp		:=	spac(16)
		Rfone1		:=	spac(14)
		Rfone2		:=	spac(14)
		Rprazo		:=	0
		Rprazo2		:=	0
		Robs			:=	spac(45)
		CCEP			:=	spac(10)
		Rcontato		:=	spac(20)
		Rvmin 		:=	0
		Rcnae			:=	spac(9)
		Rmail			:=	spac(60)
		Rexml			:=	spac(43)
		Rtpdesc		:=	spac(1)
		Rdesc			:=	0
		Rtpag			:=	0
		Rlinha		:=	spac(2)
		Rhrrec		:=	spac(62)
		Rnf 			:=	'S'
		Rprnf 		:=	'S'
		Rreg_apur	:=	spac(1)
		cPais 		:=	"BRASIL"
		Rdespacho 	:=	spac(40)
		Robssep		:=	spac(62)
		dsc         := 0
		op_regap    := 0
		desc_rega   :=	Space(0)
		op_ctb      := 0
		cRepre      := space(4)
		cNomeRepre  := Space(0)
		cBair 		:= space(16)

		Mabox(02, 01, 30, maxcol(), "INCLUSAO DE CLIENTES")
		@ Row()+1,02 say "<P>Fisica <E>mpresa.:"  get fj    		pict "!" valid PickTipoCliente(@fj, @cSit, Row(), Col()+1)
		@ Row()+1,02 say "Codigo do Cliente...:" 	get cCodi		pict "9999"
		@ Row()+1,02 say "Data Cadastro:......." 	get hSys:date  pict "##/##/##"
 		@ Row()+1,02 say "Fantasia............:" 	get Rcliente 	pict '@!' valid lastkey() = UP .or. eval({|p1|
			if empty(p1)
				errorbeep()
				Alerta("ERRO: Nome fantasia invalido")
				return false
			endif
			return true
			}, rCliente)
		@ Row()+1,02 say "Razao Social........:" 	get Rrazao   pict '@!' valid lastkey() = UP .or. eval({|p1|
		if empty(p1)
			errorbeep()
			Alerta("ERRO: Razao social invalida")
			return false
		endif
		return true
		}, rRazao)

		@ Row()+1,02 say "C.N.P.J.............:" 	get Rcnpj   pict "99.999.999/9999-99" When fj == "E" valid TestaCgc( rCnpj) .or. lastkey() = UP .and. eval({|p1|
			Cadcli->(Order(CADCLI_CNPJ))
			if CadCli->(DbSeek(p1))
				errorbeep()
				Alerta("INFO: Cliente ja registrado")
				return false
			endif
			return true
			}, Rcnpj) 			
		@ Row(),  50 say "Inscr.Est :" 				get Rinscr  pict '9999999999999999'	When fj == "E"	
		@ Row()+1,02 say "CPF.................:" 	get RCPF    pict "999.999.999-99"   When fj == "P" valid TestaCpf(rCpf) .or. lastKey() = UP .and. eval({|p1|
			Cadcli->(Order(CADCLI_CPF))
			if CadCli->(DbSeek(p1))
				errorbeep()
				Alerta("INFO: Cliente ja registrado")
				return false
			endif
			return true
			}, Rcpf) 			
		@ Row(),  50 say "RG........:" 				get Rinscrp  pict '9999999999999999' When fj == "P"
		@ Row()+1,02 say "Cep.................:"  get cCep 	 pict '99999-999' valid CepErrado( @cCep, @cCida, @cEsta, @cBair )
		@ Row(),  50 say "Cidade:"		            get cCida    pict "@!"  
		@ Row(),  90 say "Estado:"                get cEsta    pict "@" valid UfErrado(@cEsta, nil, Row(), Col()+1)
		@ Row()+1,02 say "Pais................:"  get cPais    pict "@!"	
		@ Row()+1,02 say "Endereco............:" 	get cEnde 	 pict "@!"
		@ Row()+1,02 say "Logradouro..........:" 	get cLogra 	 pict '@!'
		@ Row(),  72 say "Numero:" 					get Rnroend  pict '@!'
		@ Row()+1,02 say "Complemento.........:" 	get Rcompl 	 pict '@!'
		@ Row(),  50 say "Bairro:" 					get cBair	 pict '@!'
		@ Row()+1,02 say "Contato.............:"	get Rcontato pict '@!'
		@ Row(),  50 say "Fone :"  					get Rfone1   pict '(99)9999-99999'
		@ Row(),  72 say "Fone1:"   					get Rfone2   pict '(99)9999-99999'
		@ Row()+1,02 say "E-mail..............:"  get Rmail
		@ Row()+1,02 say "Prazo...............:"  get Rprazo   pict '999'
		@ Row(),  27 say "/"
		@ Row(),  32 say "Dias."
		@ Row(),  28                					get Rprazo2  pict '999' valid lastkey() = UP .or. eval({|p1, p2|
		if p1 <> 0 
			if p1 > p2
				return true
			else
				errorbeep()
				Alerta("ERRO: Prazo invalido")
				return false
			endif
		endif
		return true
		}, rPrazo2, rPrazo)
		@ Row(),  50 say "Cnae :" 					  get Rcnae 	pict "9999-9/99"
		@ Row()+1,02 say "Pedido Minimo.......:" get Rvmin 	pict "9,999.99"
		@ Row()+1,02 say "Obs.................:" get Robs 		pict "@!"
		@ Row()+1,02 say "Tipo de Cobranca....:" get dsc   	pict "9"    		valid PickTipoCobranca(@dsc, nil, Row(), Col()+1)
		@ Row()+1,02 say "Regime de Apuracaoo.:" get op_regap pict "9" 			valid PickTipoRegime(@op_regap, nil, Row(), Col()+1)
		@ Row(),  50 say "Tipo Pagamento......:" get rtpag    pict "9" 			valid PickTipoPagamento(@rtpag, nil, Row(), Col()+1)
		@ Row()+1,02 say "Percentagem Desconto:" get Rdesc 	pict '999.9999'	valid lastkey() = UP .or. eval({|p1, p2, p3|
		if p1 = 1
			if p2 > p3
				errorbeep()
				Alerta("ERRO: Percentual excede limite!")
				return false
			endif
		endif
		return true
		}, dsc, rDesc, desc->desc)
		@ Row(), 33 say "%"
		@ Row()+1,02 say "Tipo Contribuinte...:" get op_ctb pict "9"    valid PickTipoContribuinte(@op_ctb, @desc_rega, Row(), Col()+1)
		@ Row()+1,02 say "Representante.......:" get cRepre pict "9999" valid RepresentanteErrado(@cRepre, @cNomeRepre, Row(), Col()+1)
		@ Row()+1,02 say "XML.................:" get Rexml
		@ Row()+1,02 say "NF..................:" get RNF
		@ Row(),	 50 say "PRNF....:"   	   	  get Rprnf
		@ Row()+1,02 say "Linha...............:" get Rlinha
		@ Row(),  50 say "Despacho:" 			 	  get Rdespacho pict '@!'
		@ Row()+1,02 say "Recebimento.........:" get Rhrrec
		@ Row()+1,02 say "Observacao do Pedido:" get Robssep
		read
		if lastkey() = ESC
			errorbeep()
			if conf("INFO: Deseja encerrar cadastro?")
				return(restela(cScreen))
			endif
			loop
		endif

		rTpdesc   := iif(dsc == 1, "C", "E")
		if conf("INFO: Deseja Registrar o Cadastro?")
			Area("cadcli")
			if cadcli->(incluiu())
				Cadcli->cliente	:= rcliente
				Cadcli->razao 		:= Rrazao
				Cadcli->ender 		:= cEnde
				Cadcli->ender2 	:= cLogra
				Cadcli->bairro 	:= cBair
				Cadcli->cida 		:= cCida
				Cadcli->est 		:= cEsta
				Cadcli->cnpj 		:= Rcnpj
				Cadcli->cpf 		:= Rcpf
				Cadcli->inscr 		:= Rinscr
				Cadcli->inscrp 	:= Rinscrp
				Cadcli->fone1 		:= Rfone1
				Cadcli->fone2 		:= Rfone2
				Cadcli->prazo 		:= Rprazo
				Cadcli->CEP 		:= CCEP
				Cadcli->email 		:= Rmail
				Cadcli->obs 		:= Robs
				Cadcli->dscnto 	:= Rdesc
				Cadcli->tpdesc 	:= Rtpdesc
				Cadcli->contato 	:= Rcontato
				Cadcli->cliente 	:= Rcliente
				Cadcli->prazo2 	:= Rprazo2
				Cadcli->Ativo 		:= "A"
				Cadcli->nroend 	:= Rnroend
				Cadcli->compl 		:= Rcompl
				Cadcli->paiis 		:= cPais
				Cadcli->linha 		:= Rlinha
				Cadcli->exml 		:= Rexml
				Cadcli->usuario 	:= hSys:logfan
				Cadcli->nf 			:= Rnf
				Cadcli->prnf 		:= Rprnf
				Cadcli->hrrec 		:= Rhrrec
				Cadcli->data 		:= DT
				Cadcli->sit 		:= cSit
				Cadcli->codc 		:= cCodi
				Cadcli->tpag 		:= Rtpag
				Cadcli->Vmin 		:= Rvmin
				Cadcli->despacho 	:= Rdespacho
				Cadcli->reg_apur 	:= strzero(op_regap,1)
				Cadcli->indie 		:= strzero(op_ctb,1)
				Cadcli->cnae 		:= Rcnae
				Cadcli->codrp 		:= cRepre
				Cadcli->nrepre 	:= cNomeRepre
				Cadcli->obssep 	:= Robssep			
			endif
			Cadcli->(Libera())
		endif
		loop
	enddo
endef

*--------------------------------------------------------------------------*
	
def achaEsta(cEsta)
************************
   CadCli->(Order( CADCLI_ESTA ))
   if Cadcli->(!DbSeek( cEsta ))
      Nada()
      return false
   endif
   return true
endef

*--------------------------------------------------------------------------*

def lstcli()
*****************
   LOCAL GetList        := {}
   LOCAL cScreen        := SaveScreen()
   LOCAL cEsta          := Space(2)
	LOCAL Arq_Ant        := Alias()
	LOCAL Ind_Ant        := IndexOrd()
   LOCAL nRow           := 0 
   LOCAL nDesconto      := 0
   LOCAL nQtDocumento   := 0
   LOCAL oRelato
   LOCAL cTela

   Area("cadcli")
   CadCli->(Order( CADCLI_ESTA ))
   
   while true
      oMenu:Limpa()
      Mabox(10, 10, 15, 70, "LISTAGEM DE CLIENTES")
      @ 12, 11 say 'Estado....:' get cEsta     pict "@!" valid UfErrado(@cEsta, nil, Row(), Col()+1)
      @ 13, 11 say 'Desconto..:' get nDesconto pict "9999.99"
      read
      if LastKey() = ESC
         if conf("Pergunta: Deseja cancelar?")
            return(Restela( cScreen ))
         endif
      endif

		if Cadcli->(!DbSeek( cEsta ))
			ErrorBeep()
		   if !conf("INFO: Nada consta nos parametros informados. Deseja imprimir assim mesmo?")
				loop
			endif
		endif

		oMenu:Limpa()
      oRelato				:= TRelatoNew()
      oRelato:Tamanho	:= 132
      oRelato:Coluna	   := 66
      oRelato:NomeFirma := AllTrim(oAmbiente:NomeFirma)
      oRelato:Sistema	:= oMenu:StatusSup
      oRelato:Titulo 	:= 'LISTAGEM DE CLIENTES DA UF : ' + cEsta
      oRelato:Cabecalho := "CODI CLIENTE                FONE1          CONTATO              DSCNTO EMAIL"

      if !Instru80()
         AreaAnt( Arq_Ant, Ind_Ant )
         return(ResTela( cScreen ))
      endif
      cTela := Mensagem("Aguarde, Imprimindo Relatorio.")
      oRelato:PrintOn(Chr(ESC) + "C" + Chr(66) + PQ )
      oRelato:Inicio()

      oBloco := {|| Cadcli->Est == cEsta }     
      while Eval( oBloco ) .AND. !Eof()              
         if CadCli->ativo != "A" .OR. CadCli->dscnto != nDesconto
            CadCli->(DbSkip(1))
            loop
         endif
         IF oRelato:RowPrn = 0		   
            oRelato:Cabec()         
         endif	
         
         nQtDocumento++
         CadCli->( Qout( Codc, Cliente, Fone1, Contato, dscnto, email))
         CadCli->(DbSkip(1))
         IF ++oRelato:RowPrn >= oRelato:Coluna
            oRelato:Eject()
         endif	
      enddo   
      Qout()
      Qout(Repl("-", oRelato:Tamanho))
      oRelato:Eject()
      ORelato:PrintOff(Chr(ESC) + "C" + Chr(66))
      ResTela( cTela )
   enddo

*--------------------------------------------------------------------------*

def UfImpressao()
*****************
   LOCAL GetList        := {}
   LOCAL cScreen        := SaveScreen()
	LOCAL Arq_Ant        := Alias()
	LOCAL Ind_Ant        := IndexOrd()
   LOCAL nRow           := 0 
   LOCAL nDesconto      := 0
   LOCAL nQtDocumento   := 0
   LOCAL oRelato
   LOCAL cTela
	LOCAL oUf            := TDbf():Open("uf")
	
   oMenu:Limpa() 
   oUf:Order( UF_NOME )
	oUf:DbGoTop()
	if oUf:Eof()
		ErrorBeep()
	   if !conf("INFO: Nada consta nos parametros informados. Deseja imprimir assim mesmo?")			
			return(restela(cSCreen))
		endif	
	endif	

	oMenu:Limpa()	
   oRelato				:= TRelatoNew()	
   oRelato:Tamanho	:= 80
   oRelato:Coluna	   := 66
   oRelato:NomeFirma := AllTrim(oAmbiente:NomeFirma)
   oRelato:Sistema	:= oMenu:StatusSup
   oRelato:Titulo 	:= 'LISTAGEM DE UF'
   oRelato:Cabecalho := "UF NOME ESTADO                               ICMS"
   
   if !Instru80()
      AreaAnt( Arq_Ant, Ind_Ant )
      return(ResTela( cScreen ))
   endif
   cTela := Mensagem("Aguarde, Imprimindo Relatorio.")
   oRelato:PrintOn(Chr(ESC) + "C" + Chr(66))
   oRelato:Inicio()       

	oBloco := {|| !oUf:Eof() }     
   while Eval( oBloco ) .AND. Rel_Ok()
      IF oRelato:RowPrn = 0		   
         oRelato:Cabec()         
      endif	
      
      nQtDocumento++
		Qout(oUf:Uf, oUf:Nome, oUf:Icms)
		oUf:DbSkip(1)
      IF ++oRelato:RowPrn >= oRelato:Coluna
         oRelato:Eject()
      endif	
   enddo   
   Qout(Repl("-",oRelato:Tamanho))
   oRelato:Eject()
   ORelato:PrintOff(Chr(ESC) + "C" + Chr(66))
	AreaAnt( Arq_Ant, Ind_Ant )
	return(ResTela( cScreen ))

*--------------------------------------------------------------------------*

def ClientesDbedit()
********************
   LOCAL Arq_Ant	:= Alias()
   LOCAL Ind_Ant	:= IndexOrd()
   LOCAL cScreen	:= SaveScreen()
   LOCAL oBrowse	:= MsBrowse():New()
   LOCAL nField
   Set Key -8 To

   if !UsaArquivo("cadcli")
      return( nil )
   endif

   oMenu:Limpa()
   Area("cadcli")
   Cadcli->(Order( CADCLI_FANTA ))
   Cadcli->(DbGoBottom())

   /*
   for nField := 1 To Cadcli->(FCount())
      cName := Cadcli->(FieldName( nField ))
      oBrowse:Add( cName, cName, NIL, "CADCLI")
   next
   */
   
   oBrowse:Add( "ID",         "id")
   oBrowse:Add( "FANTASIA",   "cliente", "@!")
   oBrowse:Add( "RAZAO",      "razao",   "@!")
   oBrowse:Add( "CNPJ",       "cnpj",   '99.999.999/9999-99')
   oBrowse:Add( "CPF",        "cpf",    '999.999.999-99')
   oBrowse:Add( "CIDADE",     "cida",   '@!')
   oBrowse:Add( "ENDERECO",   "ender",  '@!')
   oBrowse:Add( "UF",         "est",    '@!')
   oBrowse:Titulo   := "CONSULTA/ALTERACAO DE CLIENTES"
   oBrowse:PreDoGet := {|| PodeAlterar() }
   oBrowse:PreDoDel := {|| PodeExcluir() }
   oBrowse:Show()
   oBrowse:Processa()
   ResTela( cScreen )
   return( nil )
endef

*==================================================================================================*

def UfDbedit()
********************
   LOCAL Arq_Ant	:= Alias()
   LOCAL Ind_Ant	:= IndexOrd()
   LOCAL cScreen	:= SaveScreen()
   LOCAL oBrowse	:= MsBrowse():New()
   LOCAL nField
   Set Key -8 To

   if !UsaArquivo("uf")
      return( nil )
   endif

   oMenu:Limpa()
   Area("uf")
   uf->(Order( UF_UF ))
   uF->(DbGoBottom())

   /*
   for nField := 1 To Cadcli->(FCount())
      cName := Cadcli->(FieldName( nField ))
      oBrowse:Add( cName, cName, NIL, "CADCLI")
   next
   */
   
   oBrowse:Add( "ID",         "id")
   oBrowse:Add( "UF",         "uf",   '@!')
   oBrowse:Add( "NOME",       "nome", '@!')
   oBrowse:Add( "ICMS",       "icms", '99.99')
   oBrowse:Titulo   := "CONSULTA/ALTERACAO DE UF"
   oBrowse:PreDoGet := {|| PodeAlterar() }
   oBrowse:PreDoDel := {|| PodeExcluir() }
   oBrowse:Show()
   oBrowse:Processa()
   ResTela( cScreen )
   return( nil )
endef

#include "fenix.ch"

function cadasfor()
*******************
   LOCAL GetList := {}
   LOCAL cScreen := SaveScreen()
   LOCAL Opsel   := 0	
   LOCAL aMenu   := {" Pesquisar ", " Cadastrar "}

   while true
		oMenu:Limpa()
   	Opsel := FazMenu( 10, 10, aMenu, "CADASTRO DE FORNECEDORES" )
		Do Case
		Case Opsel = 0
   		return(Restela(cScreen))
		Case Opsel = 1
      	    FornecedorInclusao()
		Case Opsel = 2
 			FornecedorPesquisa()
		Endcase
	enddo


function FornecedorInclusao()
***************************
   LOCAL GetList := {}
   LOCAL cScreen := SaveScreen()

   oMenu:Limpa()
   Area(hSys:aDbfs[4])
   go bott
   cdf := CODf
   Do case
      case val(cdf)+1 < 10
            stor '000'+subs(str(val(cdf)+1),10,1) to cod
      case val(cdf)+1 >9 .and. val(cdf) < 100
            stor '00'+subs(str(val(cdf)+1),9,2) to cod
      case val(cdf)+1 > 99 .and. val(cdf) < 1000
            stor '0'+subs(str(val(cdf)+1),8,3) to cod
      case val(cdf)+1 > 999
            stor subs(str(val(cdf)+1),7,4) to cod
    Endcase
    Tdoc := 0
    FJ := ' '
    while FJ = ' '
       @ 10,04 say '* <P>rodutor ou <E>mpresa:' get FJ pict '!' valid (FJ $ 'PE')
       read
       if FJ = ' '
          return .f.
       endif
       if FJ = "P"
          stor 'PRODUTOR' to FJ
       else
          stor 'EMPRESA' to FJ
       endif
       @ 04,32 get FJ
       clea gets
    Enddo
    if FJ = 'P'
       tdoc := 2
       @ 12,03 to 16,35
       @ 12,04 say 'Cadastro com:'
       @ 14,04 prompt 'CNPJ'
       @ 15,04 prompt 'CPF'
       menu to Tdoc
       if Tdoc = 0
          mdcanc()
          return .f.
       else
          tdoc := 1
       endif 
	endif
    DT := date()
    @ 05,00 clea to 23,79
    Area("cadfor")
    if Cadfor->(Incluiu())
       Cadfor->data := DT
	   Cadfor->codf := COD
	   Cadfor->sit := FJ
    	   *appe blan
            *repl data with DT,codf with COD,sit with FJ
       store recno() to regcad
       store data to rdata
       store sit to Csit
       store nfor to Rnfor
       store razao to Rrazao
       store ender to Render
       store nroend to Rnroend
       store compl to Rcompl
       store bairro to Rbairro
       store cida to Rcida
       store est to Rest
       store paiis to Rpais
       store cnpj to Rcnpj
       store inscr to Rinscr
       store cpf to Rcpf
       store inscrp to Rinscrp
       store fone1 to Rfone1
       store fone2 to Rfone2
       store prz to Rprz
       store obser to Robser
       store CEP to CCEP
       store contato to Rcontato
       store mail to Rmail
       store linha to Rlinha
       store reg_apur to Rreg_apur
       store ctrol to Rctrol
       Rpais = 'BRASIL'
       store recno() to regprim
       Cadfor->(Libera()) 
    endif
		 *unlock
         *use
    @ 00,00 clea to 23,79
    @ 00,00 to 23,79 doub
    @ 01,26 say '* CADASTRO DE FORNECEDORES *'
    @ 02,01 to 14,78    
    @ 02,02 say 'Fornecedor'
    @ 04,02 say 'C¢digo do Fornecedor:' get cod
    @ 04,30 get FJ
    @ 05,02 say 'Data Cadastro:' get hSys:date
    clea gets
    @ 04,42 say 'Fantasia:' get Rnfor pict '@!'
    read
    @ 06,02 say 'Razao Social:' get Rrazao pict '@!'
    if Tdoc = 1
       @ 07,02 say 'C.N.P.J.:' get Rcnpj pict '99.999.999/9999-99'
       @ 07,42 say 'Inscr.Est.:' get Rinscr pict '9999999999999999'
    else
       @ 07,02 say 'CPF:' get Rcpf pict '999.999.999-99'
       @ 07,42 say 'RG:' get Rinscrp pict '9999999999999999'
    endif
    @ 08,02 say 'Contato:' get Rcontato pict '@!'
    @ 08,35 say 'Fone:' get Rfone1 pict '(99)9999-99999'
    @ 08,56 say 'ou:' get Rfone2 pict '(99)9999-99999'
    @ 09,02 say 'E-mail:' get Rmail
    @ 10,02 say 'Prazo:' get Rprz pict '999'
    @ 10,13 say 'Dias.'
    @ 11,02 say 'Observacoes:' get Robser pict '@!'
    read
    @ 15,01 to 22,78
    @ 15,02 say 'Endere‡o'
    @ 17,02 say 'Lagradouro:' get Render pict '@!'
    @ 17,55 say 'N£mero:' get Rnroend pict '!!!!!!'
    @ 18,02 say 'Complemento:' get Rcompl pict '@!'
    @ 18,37 say 'Bairro:' get Rbairro pict '!!!!!!!!!!!!!!!!!'
    @ 20,62 say 'CEP:' get CCEP pict '99.999-999'
    @ 19,02 say 'Pa¡s:' 
    @ 19,18 say 'Estado:'
    @ 19,39 say 'Cidade:' 
    read
    @ 19,08 get Rpais pict '@!'
    clea gets
    RE := '  '
    do whil RE = '  '
       ET := '1'
       @ 19,26 get RE pict '!!'
       read
       if RE = '  '
          area(cadfor)
	      go regcad
	      if Cadfor->(travareg())
             Dele
             pack
             Cadfor->(Libera())   
		  endif
			   *unlock
               *use
          mdanul()
          retu
       endif
       Area(Cdade)
       loca for estd = RE
       if eof()   
               *Unlock
               *Use
          Mdest()
          RE := '  '
          loop
       endif
       stor estd to Rest
            *Unlock
            *Use
       @ 19,47 get Rcida pict '@!'
       read
       ET := '2'
       Area("cadfor")
       loca for cidade = Rcida .and. estd = RE
       if eof()
          mdest()
          Rcida := spac(30)
          @ 19,47 clea to 19,77
          RE := '  '
          loop
       endif
       exit
    endd
    cdl := '  '
    do whil cdl = '  '
       @ 20,02 say 'RegiÆo:' get cdl pict '!9'
       @ 21,02 say '<*>'
       read
       if cdl = '  '
          @ 20,02 say 'Digite Algo...' get z
          read
          @ 20,02 say '              '
          cdl := '  '
          loop
       endif
       if cdl = '* '
          psq_lin()
          cdl := '  '
          Area("Regiao")
          loca for codr = cdl
          if eof()
             mddad()
             cdl := '  '
             loop
          endi
          @ 20,02 clea to 21,20
          @ 20,02 say 'RegiÆo:' get cdl
          @ 20,12 say '-'
          @ 20,13 get Regiao
          clea gets
        endif
        SN := ' '
        @ 22,15 say '* Deseja registrar o Cadastro? <S/N>' get SN pict '!' valid (SN $ 'SN')
        read
        if SN # 'S'
           Area("Cadfor")
   	       go regprim
		   if Cadfor->(travareg())
              Dele
              pack
              Cadfor->(Libera())   
           endif
           Area("Cadfor")
           go regcad
           if Cadfor->(travareg())
              Dele
              pack
              Cadfor->(Libera())   
           endif
           mdanul()
           retu
        endif
        Area("Cadfor")
        go regcad
        if Cadfor->(Incluiu())
           Cadfor->nfor := rnfor
		   Cadfor->razao := Rrazao
		   Cadfor->ender := Render
           Cadfor->bairro := Rbairro
		   Cadfor->cida := Rcida
		   Cadfor->est := Rest
           Cadfor->fone1 := Rfone1
		   Cadfor->fone2 := Rfone2
		   Cadfor->prz := Rprz
		   Cadfor->cep := Ccep
		   Cadfor->mail := Rmail
		   Cadfor->obser := Robser
		   Cadfor->contato := Rcontato
		   Cadfor->usuario := logfan
		   Cadfor->nroend := Rnroend
		   Cadfor->compl := Rcompl
		   Cadfor->paiis := Rpais
		   Cadfor->linha := cdl
		   if tdoc = 2
		      Cadfor->sit := "PESSOA FISICA"
		      Cadfor->cpf := Rcpf
		      Cadfor->inscrp := Rinscrp
		   else
		      Cadfor->cnpj := Rcnpj
			  Cadfor->inscr := Rinscr
		   Endif
		 
		 *repl Nfor with rnfor,razao with Rrazao,ender with Render,bairro with Rbairro,cida with Rcida,est with Rest,fone1 with Rfone1,fone2 with Rfone2,prz with Rprz
         *repl CEP with CCEP,mail with Rmail,obser with Robser, contato with Rcontato, usuario with logfan
         *repl nroend with Rnroend, compl with Rcompl, paiis with Rpais, linha with cdl
         *if tdoc = 2
         *   repl SIT with 'PESSOA FISICA',cpf with Rcpf,inscrp with Rinscrp
         *else
         *   repl cnpj with Rcnpj, inscr with Rinscr
         *endi
           Cadfor->(Libera())
		   mdsuces()
           exit
        endif
    enddo
    if CN = 'C'
       retu
    endif
  
function fornecedorpesquisa()
***************************
   TT := 0
   cdtr := 'X'
   psqfor()
   PEC := '    '
   Do whil PEC = '    '
      @ 08,03 clea to 22,49   
      digt := '4'
      @ 08,04 say '* Para Editar Cadastro Digite o CODIGO:' get PEC
      @ 09,04 say '  <ENTER> para Sair'
      read
      if PEC = '    '
         retu
      endif
      Z1 := ' '
      reg := val(pec)
      nrpd()
      pec := codnum
      @ 08,45 get PEC
      clea gets
      Area("cadfor")
      stor SIT to SLT  
      loca for codf = PEC
      if eof()
         mdfor()
         Z1 := 'N'
         PEC := '    '
         loop
      endif
      store recno() to regcad
      store data to cdata
      store sit to Csit
      store codf to Ccodf
      store nfor to Cnfor
      store razao to Crazao
      store ender to Cender
      store nroend to Cnroend
      store compl to Ccompl
      store bairro to Cbairro
      store cida to Ccida
      store paiis to Cpais
      store est to Cest
      store cnpj to Ccnpj
      store inscr to Cinscr
      store cpf to Ccpf
      store inscrp to Cinscrp
      store fone1 to Cfone1
      store fone2 to Cfone2
      store prz to Cprz
      store obser to Cobser
      store mail to Cmail
      store cep to Ccep
      store contato to Ccontato
      store linha to Clinha
      store reg_apur to Creg_apur
      store ctrol to Cctrol
      Rpais = 'BRASIL'
      stor indie to Cindie
      store recno() to reg4
      if Ccpf = ' '
         if Csit # 'PESSOA FISICA'
            Tdoc := 1
         else
            Tdoc := 2
         endif
      else
         Tdoc := 2
      endif
      if Z1 = 'N'
         loop
      endif
   enddo
   @ 00,00 clea to 23,79
   @ 00,00 to 23,79 doub
   @ 01,26 say "* CADASTRO DE FORNECEDOR *"
   @ 02,01 to 14,78
   @ 04,02 say 'C¢digo Fornecedor:'
   @ 05,02 say 'Data Cadastro:' 
   @ 04,42 say 'Fantasia:'
   @ 06,02 say 'Razao Social:'
   if Tdoc = 1
      @ 07,02 say 'C.N.P.J.:'
      @ 07,42 say 'Inscr.Est.:'
   else
      @ 07,02 say 'CPF:' 
      @ 07,42 say 'RG:' 
   endif
   @ 08,02 say 'Contato:'
   @ 08,35 say 'Fone:'
   @ 08,56 say 'ou:'
   @ 09,02 say 'E-mail:'
   @ 10,02 say 'Prazo:'
   @ 10,13 say 'Dias.'
   @ 11,02 say 'Observacoes:'
   @ 13,02 say 'Regime de Apura‡Æo:'
   @ 14,02 say 'Tipo Contrbte:'      
   bcor()
   @ 04,21 say Ccodf
   @ 04,28 say Csit
   @ 05,17 say Cdata
   @ 04,52 say cnfor
   @ 06,16 say crazao 
   if Tdoc = 1
      @ 07,12 say ccnpj 
      @ 07,54 say cinscr 
   else
      @ 07,07 say Ccpf
      @ 07,47 say Cinscrp
   endif
   @ 08,11 say Ccontato
   @ 08,41 say Cfone1 
   @ 08,60 say Cfone2
   @ 09,10 say Cmail
   @ 10,09 say Cprz 
   @ 11,15 say Cobser
   if Creg_apur = ' '
      @ 13,22 say 'NENHUM'
   elseif Creg_apur = '1'
      @ 13,22 say '1-SIMPLES NACIONAL'
   elseif Creg_apur = '2'
      @ 13,22 say '2-LUCRO PRESUMIDO'
   elseif Creg_apur = '3'
      @ 13,22 say '3-LUCRO REAL'
   endif

   if Cindie = '1'
      @ 14,17 say '1-Contribuinte ICMS'
   elseif Cindie = '2'
      @ 14,17 say '2-Contribuinte ISENTO'
   elseif Cindie = '9'
      @ 14,17 say '9-NÇO Contribuinte'
   endif

   @ 15,01 to 22,78
   @ 17,02 say 'Lagradouro:'
   @ 17,55 say 'N£mero:'
   @ 18,02 say 'Complemento:'
   @ 18,37 say 'Bairro:'
   @ 20,62 say 'CEP:'
   @ 19,02 say 'Pa¡s:' 
   @ 19,18 say 'Estado:'
   @ 19,39 say 'Cidade:'
   @ 20,02 say 'RegiÆo:'
         
   @ 17,14 say Cender
   @ 17,63 say Cnroend
   @ 18,15 say Ccompl
   @ 18,45 say Cbairro
   @ 20,67 say CCEP
   @ 19,08 say Cpais
   @ 19,26 say Cest
   @ 19,47 say Ccida 
   Area("Regiao")
   loca for codr = clinha
   rgao := regiao
   @ 20,10 say Clinha+'-'+rgao
   MN := 0
   Do Whil MN = 0
      @ 02,02 prompt 'Fornecedor'
      @ 15,02 prompt 'Endere‡o'
      menu to MN
      if MN = 0
         retu
      elseif MN = 1
         MN_cl := 0
         do whil MN_cl = 0
            @ 04,02 say 'C¢digo Fornecedor:'
            @ 05,02 say 'Data Cadastro:' 
            @ 04,42 prompt 'Fantasia:'
            @ 06,02 prompt 'Razao Social:'
            if Tdoc = 1
               @ 07,02 prompt 'C.N.P.J.:'
               @ 07,42 prompt 'Inscr.Est.:'
            else
               @ 07,02 prompt 'CPF:'
               @ 07,42 prompt 'RG:' 
            endif
            @ 08,02 prompt 'Contato:'
            @ 08,35 prompt 'Fone:'
            @ 08,56 prompt 'ou:'
            @ 09,02 prompt 'E-mail:'
            @ 10,02 prompt 'Prazo:'
            @ 10,13 say 'Dias.'
            @ 11,02 prompt 'Observacoes:'
            @ 13,02 prompt 'Regime de Apura‡Æo:'
            @ 14,02 prompt 'Tipo Contrbte:'      
            @ 13,60 prompt 'VOLTAR'
            menu to mn_cl
            if MN_CL = 1
               @ 04,52 get cnfor pict '@!'
               read
               Area("cadfor")
               go reg4
			   repl nfor with Cnfor
               @ 04,52 say cnfor
               MN_cl := 0
               loop
            endif
            if MN_CL = 2
               @ 06,16 get Crazao pict '@!'
               read
               Area("cadfor")
               go reg4
               repl razao with Crazao
               @ 06,16 say Crazao
               MN_CL := 0
               loop
            endif
            if MN_CL = 3
                  if Tdoc = 1
                     @ 07,12 get ccnpj pict '99.999.999/9999-99'
                     read
                     Area("cadfor")
                     go reg4
                     repl cnpj with Ccnpj
                     set color to b+/w
                     @ 07,12 say Ccnpj
                     tcor()
                  else
                     @ 07,07 get Ccpf pict '999.999.999-99'
                     read
                     Area("cadfor")
                     go reg4
                     repl cpf with Ccpf
                     set color to b+/w
                     @ 07,07 say Ccpf
                     tcor()
                  endif
               MN_CL := 0
               loop
            endif
            if MN_CL = 4
                  if Tdoc = 1
                     @ 07,54 get cinscr pict '9999999999999999'
                     read
                     Area("cadfor")
                     go reg4
                     repl inscr with Cinscr
                     set color to b+/w
                     @ 07,54 say Cinscr
                     tcor()
                  else
                     @ 07,46 get Cinscrp pict '9999999999999999'
                     read
                     Area("cadfor")
                     go reg4
                     repl inscrp with Cinscrp
                     set color to b+/w
                     @ 07,46 say Cinscrp
                     tcor()
                  endif
               MN_CL := 0
               loop
            Endif
            if MN_CL = 5
               @ 08,11 get Ccontato pict '@!'
               read
               Area("cadfor")
               go reg4
               repl contato with Ccontato
               set color to b+/w
               @ 08,11 say Ccontato
               tcor()
               MN_CL := 0
               loop
            Endif
            if MN_CL = 6
               @ 08,41 get Cfone1 pict '(99)9999-99999'
               read
               Area("cadfor")
               go reg4
               repl fone1 with Cfone1
               set color to b+/w
               @ 08,41 say Cfone1
               tcor()
               MN_CL := 0
               loop
            Endif
            if MN_CL = 7
               @ 08,60 get Cfone2 pict '(99)9999-99999'
               read
               Area("cadfor")
               go reg4
               repl fone2 with Cfone2
               set color to b+/w
               @ 08,60 say Cfone2
               tcor()
               MN_CL := 0
               loop
            Endif
            if MN_CL = 8
               @ 09,10 get Cmail
               read
               Area("cadfor")
               go reg4
               repl mail with Cmail
               set color to b+/w
               @ 09,10 say Cmail
               tcor()
               MN_CL := 0
               loop
            Endif
            if MN_CL = 9
               @ 10,09 get Cprz pict '999'
               read
               Area("cadfor")
               go reg4
               repl prz with Cprz
               set color to b+/w
               @ 10,09 say Cprz
               tcor()
               MN_CL := 0
               loop
            Endif
            if MN_CL = 10
               @ 11,15 get Cobser pict '@!'
               read
               Area("cadfor")
               go reg4
               repl obser with Cobser
               set color to b+/w
               @ 11,15 say Cobser
               tcor()
               MN_CL := 0
               loop
            Endif
            if MN_CL = 11
               OP_REGAP = 0
               Tela11 := SaveScreen()
               set color to w/b+
               @ 13,02 clea to 16,22
               @ 13,02 prompt '1-SIMPLES NACIONAL'
               @ 14,02 prompt '2-LUCRO PRESUMIDO'
               @ 15,02 prompt '3-LUCRO REAL'
               @ 16,02 prompt 'NENHUM'
               menu to op_regap
               if OP_regap = 1
                  Creg_apur := '1'
                  desc_REGA := 'SIMPLES NACIONAL'
               elseif OP_regap = 2
                  Creg_apur := '2'
                  desc_REGA := 'LUCRO PRESUMIDO'
               elseif OP_regap = 3
                  Creg_apur := '3'
                  desc_REGA := 'LUCRO REAL'
               elseif OP_regap = 4
                  Creg_apur := ' '
                  desc_rega := 'NENHUM'
               endif
               Area("cadfor")
               go reg4
               repl reg_apur with Creg_apur
               rest screen from tela11
               set color to b+/w
               @ 13,22 CLEA TO 13,55
               @ 13,22 say Creg_apur
               @ 13,23 say '-'
               @ 13,24 say desc_rega
               tcor()
               MN_CL := 0
               loop
            endif
            if MN_CL = 12
               OP_ctb := 0
               Tela12 := SaveScreen()
               set color to w/b+
               @ 14,17 clea to 17,37
               @ 14,17 prompt '1-Contribuinte ICMS'
               @ 15,17 prompt '2-Contribuinte ISENTO'
               @ 16,17 prompt '9-NÇO Contribuinte'
               menu to op_ctb
               if OP_ctb = 0
                  rest screen from tela12
                  tcor()
                  MN_CL := 0
                  loop
               endif
               If OP_ctb = 1
                  desc_ctb := '1-Contribuinte ICMS'
                  elseif OP_ctb = 2
                  desc_ctb := '2-Contribuinte ISENTO'
                  elseif OP_ctb = 3
                  desc_ctb := '9-NÇO Contribuinte'
               Endif
               op_ctb := ltrim(str(op_ctb))
               Area("Cadfor")
               go reg4
               repl indie with subs(desc_ctb,1,1)
               rest screen from tela12
               bcor()
               @ 14,17 clea to 14,37
               @ 14,17 say desc_ctb
               tcor()
               MN_CL := 0
               loop
            endif
            if MN_CL = 13 .or. mn_cl = 0
               @ 13,60 clea to 13,77
               MN := 0
               exit
            endif
         Enddo
      elseif MN = 2
         MN_Ed := 0
         Do whil MN_Ed = 0
            @ 17,02 prompt 'Lagradouro:'
            @ 17,55 prompt 'N£mero:'
            @ 18,02 prompt 'Complemento:'
            @ 18,37 prompt 'Bairro:'
            @ 19,02 prompt 'Pa¡s:' 
            @ 19,18 prompt 'Estado:'
            @ 19,39 prompt 'Cidade:'
            @ 20,02 prompt 'RegiÆo:'
            @ 20,62 prompt 'CEP:'
            @ 21,02 prompt 'VOLTAR                                          '
            menu to MN_ED
            if MN_Ed = 1
               @ 17,14 get Cender pict '@!'
               read
               Area("Cadfor")
               go reg4
               repl ender with Cender
               set color to b+/w
               @ 17,14 say Cender
               tcor()
               MN_Ed := 0
               loop
            endif
            if MN_Ed = 2
               @ 17,63 get Cnroend pict '!!!!!!'
               read
               Area("Cadfor")
               go reg4
               repl nroend with Cnroend
               set color to b+/w
               @ 17,63 say Cnroend
               tcor()
               MN_Ed := 0
               loop
            endif
            if MN_Ed = 3
               @ 18,15 get Ccompl pict '@!'
               read
               Area("Cadfor")
               go reg4
               repl compl with Ccompl
               set color to b+/w
               @ 18,15 say Ccompl
               tcor()
               MN_Ed := 0
               loop
            endif
            if MN_Ed = 4
               @ 18,45 get Cbairro pict '@!'
               read
               Area(Cadfor)
               go reg4
               repl bairro with Cbairro
               set color to b+/w
               @ 18,45 say Cbairro
               tcor()
               MN_Ed := 0
               loop
            endif
            if MN_Ed = 5
               @ 19,08 say Cpais
               read
               Area("Cadfor")
               go reg4
               repl paiis with Cpais
               set color to b+/w
               @ 19,08 say Cpais
               tcor()
               MN_Ed := 0
               loop
            endif
            if MN_Ed = 6
               ET := '1'
               RE := ' '
               do whil RE = ' '
                  @ 19,26 get Cest pict '!!'
                  read
                  if Cest = '  '
                     mdest()
                     RE := ' '
                     loop
                  endif
                  Area(hSys:aDbfs[40])
                  loca for estd = Cest
                  if eof()   
                     mdest()
                     Area(hSys:aDbfs[4])
                     go reg4
                     stor est to Cest
                     RE := ' '
                     loop
                  endif
                  Area(hSys:aDbfs[4])
                  go reg4
                  repl est with Cest
                  bcor()
                  @ 19,26 say Cest
                  tcor()
                  exit
               enddo
               MN_Ed := 0
               loop
            endif
            if MN_Ed = 7
               ET := '2'
               RC := ' '
               do whil RC = ' '
                  @ 19,47 get Ccida pict '@!'
                  read
                  if Ccida = '    '
                     mdest()
                     RC := ' '
                     loop
                  endif
                  Area(hSys:aDbfs[40])
                  loca for cidade = Ccida .and. estd = Cest
                  if eof()
                     mdest()
                     Area(hSys:aDbfs[4])
                     go reg4
                     stor cida to Ccida
                     RC := ' '
                     loop
                  endif
                  Area(hSys:aDbfs[4])
                  go reg4
                  repl cida with Ccida
                  set color to b+/w
                  @ 19,47 say Ccida
                  tcor()
                  exit
               enddo
               MN_Ed := 0
               loop
            endif
            if MN_Ed = 8
               do whil .t.
                  @ 20,09 clea to 20,20
                  @ 20,09 get Clinha pict '!9'
                  @ 21,12 say '<*>Pesquisa'
                  read
                  @ 21,12 clea to 21,30
                  if clinha = '  '
                     retu
                  endif
                  if clinha = '* '
                     psq_lin()
                     clinha := '  '
                  endif
                  Area(hSys:aDbfs[62])
                  loca for codr = clinha
                  if eof()
                     mddad()
                     cdl := '  '
                     loop
                  endif
                  @ 20,02 clea to 21,20
                  @ 20,02 say 'RegiÆo:' get clinha
                  @ 20,11 say '-'
                  rgao := regiao
                  @ 20,12 get Rgao
                  clea gets
                  exit
               enddo
               Area(hSys:aDbfs[4])
               go reg4
               repl linha with Clinha
               set color to b+/w
               @ 20,09 say Clinha+'-'+Rgao
               tcor()
               MN_Ed := 0
               loop
            endif
            if MN_Ed = 9
               @ 20,67 get Ccep pict '99.999-999'
               read
               Area(hSys:aDbfs[4])
               go reg4
               repl cep with Ccep
               bcor()
               @ 20,67 say Ccep
               tcor()
               MN_Ed := 0
               loop
            endif
            if MN_Ed = 10
               @ 21,02 clea to 21,77
               MN := 0
               exit
            endif
         Enddo
      Endif
    Enddo
