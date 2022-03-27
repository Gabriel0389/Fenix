*
* Terro Class
*
* Macrosoft SCI Class Terro
*       (c) 1991-2021 Macrosoft Informatica Ltda
* Copyright 1991-2021 Vilmar Catafesta <vcatafesta@gmail.com>
*
* ░░░▒▒▓▓▓███
*
#include <fenix.ch>

CLASS TErro
	protected:
		DATA cMessage 		INIT "Escolha uma opcao abaixo."
		DATA aOptions 		INIT {"Encerrar"}
		DATA esSeverity   INIT {"WHOCARES","WARNING","ERROR","CATASTROPHIC"}
		DATA cDbf 			INIT ""
		DATA aAcao 			INIT {=>}
		DATA aBase	 		INIT {=>}
		DATA nsubcode     INIT 0
		DATA cSystem      INIT ""
		DATA cdescription INIT ""
		DATA cexplanacao  INIT ""
		DATA cacao 	   	INIT ""
		DATA cacao1	   	INIT ""
		DATA FileLog    	INIT ms_swap_extensao("fenix", ".err")
		DATA nCarga       INIT 0

	exported:
		DATA Enabled 		INIT true
		DATA Name    		INIT "TErro1"
		DATA Tag     		INIT 0
	
	protected:
		METHOD AddActionBase(e)
		METHOD DbfRecover(e)
		METHOD ShowErro(e)
		METHOD PrintErro(e)
		
	exported:
		METHOD new CONSTRUCTOR
		DESTRUCTOR Destroy()
		METHOD Create(e)
		METHOD MacroErro(e)
		METHOD Log(e)
		METHOD Carga(e)
ENDCLASS

*------------------------------------------------------------------------------	

METHOD TErro:New(e)
	::cDbf 	  := e:FileName
	::nsubcode := e:subcode()
	::csystem  := e:subsystem()
	::AddActionBase(e)
	::Carga(e)
	return ::MacroErro(e)

*------------------------------------------------------------------------------	

METHOD TErro:Create(e)
	return ::New(e)
	
*------------------------------------------------------------------------------	

METHOD TErro:Destroy()
   self := nil
   return self

*------------------------------------------------------------------------------	

METHOD TErro:AddActionBase(e)
	LOCAL hsBase   := THashNew()
	LOCAL hsAction := THashNew()

	hsBase:SetValue("BASE",   "BASE")
	hsBase:SetValue("DBFNTX", "DBF")
	hsBase:SetValue("DBFCDX", "DBF")
	hsBase:SetValue("DBFNSX", "DBF")
	hsBase:SetValue("SIXNSX", "DBF")
	hsBase:SetValue("SIXCDX", "DBF")
	hsBase:SetValue("TERM",   "TERM")
	::aBase := hsBase
	
	hsAction:SetValue("BASE1002",{1002,"ALIAS NAO EXISTE.",;
							"O ALIAS ESPECIFICADO NAO ASSOCIADO COM A AREA DE TRABALHO ATUAL.",;
							"ENTRE EM CONTATO COM O SUPORTE TECNICO.",;
							""})
	hsAction:SetValue("BASE1003",{1003,"VARIAVEL NAO EXISTE.",;
							"A VARIAVEL ESPECIFICADA NAO EXISTE OU NAO E VISIVEL.",;
							"ENTRE EM CONTATO COM O SUPORTE TECNICO.",;
							""})
	hsAction:SetValue("BASE1004",{1004,"VARIAVEL NAO EXISTE.",;
							"A VARIAVEL ESPECIFICADA NAO EXISTE OU NAO E VISIVEL.",;
							"ENTRE EM CONTATO COM O SUPORTE TECNICO.",;
							""})
	hsAction:SetValue("BASE2006",{2006,"ERRO DE GRAVACAO/CRIACAO DE ARQUIVO.",;
							"O ARQUIVO ESPECIFICADO NAO PODE SER GRAVADO/CRIADO.",;
							"VERIFIQUE SEUS DIREITOS EM AMBIENTE DE REDE, ESPACO",;
							"EM DISCO, OU SE O ARQUIVO ESTA ATRIBUIDO PARA SOMENTE LEITURA."})
	hsAction:SetValue("BASE5300",{5300,"MEMORIA BAIXA.",;
							"MEMORIA DISPONIVEL INSUFICIENTE PARA RODAR O APLICATIVO.",;
							"LIBERE MAIS MEMORIA CONVENCIONAL VERIFICANDO OS ARQUIVOS",;
							"CONFIG.SYS E AUTOEXEC.BAT EM AMBIENTE DOS."})
	hsAction:SetValue("DBF1001",{1001,"ERRO DE ABERTURA DO ARQUIVO ESPECIFICADO.",;
							"O ARQUIVO ESPECIFICADO NAO PODE SER ABERTO.",;
							"VERIFIQUE SEUS DIREITOS EM AMBIENTE DE REDE. ESPACO",;
							"EM DISCO, OU SE O ARQUIVO ESTA ATRIBUIDO PARA SOMENTE LEITURA."})
	hsAction:SetValue("DBF1002",{1002,"VARIAVEL NAO EXISTE.",;
							"A VARIAVEL ESPECIFICADA NAO EXISTE OU NAO E VISIVEL.",;
							"ENTRE EM CONTATO COM O SUPORTE TECNICO.",;
							""})
	hsAction:SetValue("DBF1003",{1003,"ERRO DE ABERTURA DO ARQUIVO ESPECIFICADO.",;
							"O ARQUIVO ESPECIFICADO NAO PODE SER ABERTO.",;
							"VERIFIQUE SEUS DIREITOS EM AMBIENTE DE REDE. ESPACO",;
							"EM DISCO, OU SE O ARQUIVO ESTA ATRIBUIDO PARA SOMENTE LEITURA."})
	hsAction:SetValue("DBF1004",{1004,"ERRO DE CRIACAO DE ARQUIVO.",;
							"O ARQUIVO ESPECIFICADO NAO PODE SER CRIADO.",;
							"VERIFIQUE SEUS DIREITOS EM AMBIENTE DE REDE. ESPACO",;
							"EM DISCO, OU SE O ARQUIVO ESTA ATRIBUIDO PARA SOMENTE LEITURA."})
	hsAction:SetValue("DBF1006",{1006,"ERRO DE CRIACAO DE ARQUIVO.",;
							"O ARQUIVO ESPECIFICADO NAO PODE SER CRIADO.",;
							"VERIFIQUE SEUS DIREITOS EM AMBIENTE DE REDE. ESPACO",;
							"EM DISCO, OU SE O ARQUIVO ESTA ATRIBUIDO PARA SOMENTE LEITURA."})
	hsAction:SetValue("DBF1010",{1010,"ERRO DE LEITURA DE ARQUIVO.",;
							"UM ERRO DE LEITURA OCORREU NO ARQUIVO ESPECIFICADO.",;
							"VERIFIQUE SEUS DIREITOS EM AMBIENTE DE REDE, OU SE",;
							"O ARQUIVO NAO ESTA TRUNCADO."})
	hsAction:SetValue("DBF1011",{1011,"ERRO DE GRAVACAO DE ARQUIVO.",;
							"UM ERRO DE LEITURA OCORREU NO ARQUIVO ESPECIFICADO.",;
							"VERIFIQUE SEUS DIREITOS EM AMBIENTE DE REDE. ESPACO",;
							"EM DISCO, OU SE O ARQUIVO ESTA ATRIBUIDO PARA SOMENTE LEITURA."})
	hsAction:SetValue("DBF1012",{1012,"CORRUPCAO DE ARQUIVOS DETECTADA.",;
							"OS ARQUIVOS DE DADOS .DBF E/OU INDICES ESTAO CORROMPIDOS.",;
							"APAGUE OS ARQUIVOS DE INDICES E TENTE NOVAMENTE.",;
							""})
	hsAction:SetValue("DBF1020",{1020,"ERRO DE TIPO DE DADO.",;
							"OS TIPOS DE DADOS SAO IMCOMPATIVEIS.",;
							"ENTRE EM CONTATO COM O SUPORTE TECNICO.",;
							""})
	hsAction:SetValue("DBF1021",{1021,"ERRO DE TAMANHO DE DADO.",;
							"TAMANHO DO DADO MAIOR QUE O CAMPO.",;
							"VERIFIQUE DATAS DE VCTO, EMISSAO E OU CALCULOS MUITO GRANDES",;
							"ENTRE EM CONTATO COM O SUPORTE TECNICO."})
	hsAction:SetValue("DBF1022",{1022,"TRAVAMENTO DE ARQUIVO REQUERIDO.",;
							"TENTATIVA DE ALTERAR UM REGISTRO SEM PRIMEIRO OBTER TRAVAMENTO.",;
							"ENTRE EM CONTATO COM O SUPORTE TECNICO.",;
							""})
	hsAction:SetValue("DBF1023",{1023,"O ARQUIVO REQUER ABERTURA EXCLUSIVA",;
							"O INICIO DA OPERACAO REQUER ABERTURA DE ARQUIVO EXCLUSIVA.",;
							"ENTRE EM CONTATO COM O SUPORTE TECNICO.",;
							""})
	hsAction:SetValue("DBF1027",{1027,"LIMITE EXCEDIDO.",;
							"MUITOS ARQUIVOS DE INDICES ESTAO ABERTOS NA AREA CORRENTE.",;
							"ENTRE EM CONTATO COM O SUPORTE TECNICO.",;
							""})
	::aAcao := hsAction
	return self

*------------------------------------------------------------------------------	
METHOD TErro:DbfRecover(e)	
	LOCAL cTemp
	
	if !Empty(::cDbf)
		ErrorBeep()
		if Conf("O arquivo " + AllTrim(::cDbf) + " corrompeu. Criar um novo ?")
			cTemp := StrTran( ::cDbf, ".dbf") + ".old"            
			Ferase( cTemp )
			if msrename(::cDbf, cTemp) == 0            						
				if CriaArquivo(ms_remove_path(::cDbf))
					Ferase(ms_remove_path(::cDbf) + CEXT)
					Cls
					ErrorBeep()
					Mensagem("Informa: Arquivo " + ::cDbf + " criado com sucesso.;-; Encerrando... Execute novamente o Sistema.")
					FChDir( oAmbiente:xRoot )
               SetColor("")
               SetPos(maxrow(),0)
               ? "Macrosoft for Linux terminate!"
					Break( e )
					Quit
				endif
			else
				AlertaPy("Erro: Impossivel consertar o arquivo.; Erro# " + StrTrim(Ferror()))
			endif
		else
         FChDir( oAmbiente:xRoot )				
         Encerra()
      endif
	endif
	return self

*------------------------------------------------------------------------------	

METHOD TErro:Carga(e)
	LOCAL i := 3
	
	::nCarga := 0	
	while (!Empty(ProcName(i)))
		i++
		::nCarga++
	enddo
	return ::nCarga

*------------------------------------------------------------------------------	

METHOD TErro:Log(e)
	LOCAL i 			 := 5
	LOCAL nPos      := 0
	LOCAL nCol      := 0
	LOCAL nRow      := 0
	LOCAL cOldDir   := FCurDir()
	LOCAL nHandle
	
	FChDir( oAmbiente:xRoot )
	Set Date British
	Set Console Off
   if !HB_FileExists(::FileLog)
		nHandle := Fcreate(::FileLog, FC_NORMAL)
		FClose(nHandle)
	endif
	nHandle := FOpen(::FileLog, FO_READWRITE + FO_SHARED)
	IF ( Ferror() != 0 )
		FClose( nHandle )
		SetColor("")
		Cls
		Alert("Erro #3: Erro de Abertura " + ::FileLog + ". Erro DOS " + hb_ntos(Ferror()))
		Break(e)
		Quit
	EndIF
	FBot( nHandle )
	FWriteLine( nHandle, Replicate("=", 80))
	FWriteLine( nHandle, "Usuario     : " + oAmbiente:xUsuario )
	FWriteLine( nHandle, "Data        : " + DToC(Date()))
	FWriteLine( nHandle, "Horas       : " + Time())
	FWriteLine( nHandle, "e:SubSystem : " + e:subsystem())
	FWriteLine( nHandle, "e:SubCode   : " + hb_ntos(e:subCode()))
	FWriteLine( nHandle, "e:OsCode    : " + hb_ntos(e:osCode()))
	FWriteLine( nHandle, "e:GenCode   : " + hb_ntos(e:genCode()))
	FWriteLine( nHandle, "e:Severity  : " + hb_ntos(e:Severity()) + ' (' + ::esSeverity[e:Severity()] + ')')
	FWriteLine( nHandle, "e:Tries     : " + hb_ntos(e:Tries()))
	FWriteLine( nHandle, "Variável    : " + e:operation() )
	FWriteLine( nHandle, "Arquivo     : " + e:filename() )
	FWriteLine( nHandle, "Area        : " + e:cargo[1])
	FWriteLine( nHandle, "Indice      : " + e:cargo[2])
	FWriteLine( nHandle, "Descricao   : " + ::cdescription )
	FWriteLine( nHandle, "Explanacao  : " + ::cexplanacao )
	FWriteLine( nHandle, "Acao        : " + ::cAcao )
	FWriteLine( nHandle, "Acao        : " + ::cAcao1 )
	FWriteLine( nHandle, Replicate("-", 80))
	FWriteLine( nHandle, "PILHA DE CARGA" )
	nCol   := 0
	i	    := 5
	nX     := 0
	
	while (!Empty(ProcName(i)))
		nCol++
		nX++
		FWriteLine( nHandle, Space(16) + 'Carga : (' + Strzero(--::nCarga,5) + ") Linha : " + strzero(procline(i), 6) + "    Proc : " + ProcName(i))
		i++
	enddo
	FWriteLine( nHandle, Replicate("=", 80))
	Fclose( nHandle )
	Set Console On
	FChDir(cOldDir)
	return self

*------------------------------------------------------------------------------

METHOD TErro:PrintErro(e)
	LOCAL nCol 	:= 0
	LOCAL nX   	:= 0
	LOCAL i		:= 0
	
	if (instru80() .and. lptok())
		PrintOn()
		SetPrc(0, 0)
		Qout(Replicate("=", 80))
		@	02,  01 Say "SubSystem : " + e:SubSystem()
		@	03,  01 Say "SubCode   : " + hb_ntos(e:subcode)
		@	04,  01 Say "Variavel  : " + e:operation()
		@	05,  01 Say "Arquivo   : " + e:filename()
		@	06,  01 Say "Area      : " + Alias()
		@	07,  01 Say "Descricao : " + ::cdescription
		@	08,  01 Say "Explanacao: " + ::cexplanacao
		@	09,  01 Say "Acao      : " + ::cacao
		@	10,  13 Say                  ::cacao1
		Qout( Replicate("-", 80))
		nCol := 12
		@ nCol,	6 Say "[Pilha de Carga]"
		i	:= 2
		nX	:= 0
		while (!Empty(ProcName(i)))
			nCol++
			nX++
			@ nCol, 01 Say StrZero(nX, 2) + ")Proc:"
			@ nCol, 09 Say ProcName(i)
			@ nCol, 20 Say "Linha:"
			@ nCol, 26 Say StrZero(ProcLine(i), 6)
			i++
		EndDo
		Qout(Replicate("=", 80))
		Eject
		PrintOff()
	endif
	return self

METHOD TErro:ShowErro(e)
	LOCAL nCol      := 0
	LOCAL i 			 := 5
	LOCAL nRow      := 0
	LOCAL nX        := 0

	//oMenu:Limpa()
   SetColor('')
   Cls
	MaBox(00, 00, 09, MaxCol(), "ERRO", nil, nil, nil, hsPos:Center)
	Print(     01, 01, "e:subSystem : ") ; printf(::cSystem, AscanCor(clBrightRed))
	Print(Row(),   35, "e:subCode   : ") ; printf(hb_ntos(::nSubCode), AscanCor(clBrightRed))
	Print(Row(),   70, "e:osCode    : ") ; printf(hb_ntos(e:oscode), AscanCor(clBrightRed))
	Print(Row()+1, 01, "e:genCode   : ") ; printf(hb_ntos(e:gencode), AscanCor(clBrightRed))
	Print(Row(),   35, "e:Severity  : ") ; printf(hb_ntos(e:severity) + ' (' + ::esSeverity[e:severity+1] + ')', AscanCor(clBrightRed))
	Print(Row(),   70, "e:Tries     : ") ; printf(hb_ntos(e:tries), AscanCor(clBrightRed))
	Print(Row()+1, 01, "Arquivo     : ") ; printf(e:Filename, AscanCor(clBrightRed))
	Print(Row(),   35, "Area        : ") ; printf(e:cargo[1], AscanCor(clBrightRed))
	Print(Row(),   70, "Indice      : ") ; printf(e:cargo[2], AscanCor(clBrightRed))
	Print(Row()+1, 01, "Variavel    : ") ; printf(e:operation, AscanCor(clBrightYellow))
	Print(Row()+1, 01, "Descricao   : ") ; printf(::cdescription, AscanCor(clBrightGreen))
	Print(Row()+1, 01, "Explanacao  : ") ; printf(::cexplanacao, AscanCor(clBrightCyan))
	Print(Row()+1, 01, "Acao        : ") ; printf(::cAcao, AscanCor(clBrightGreen))
	Print(Row()+1, 01, "              ") ; printf(::cAcao1, AscanCor(clBrightGreen))

	ncol 	 := 16
	i 		 := 5
	while (!Empty( ProcName(i)))
		i++
	enddo
	i := if(i >= MaxRow(), MaxRow(), i)
	MaBox(nCol, 00, nCol + i-4, MaxCol(), "[CARGA]:[LINHA ]:PROCEDIMENTO - PILHA DE CARGA", nil, nil, nil, hsPos:Left)
	
	nRow	:= 0
   l     := 0
	nCol++
   for nX := i-1 to 5 step -1
      l++
      cLine := "[" + StrZero(l,5) + "]:[" + strzero(procline(nX), 6) + ']:' + ProcName(nX) + '(' + strzero(procline(nX),6) + ')'
      if l > i-6
         print( ncol, nRow+01, cLine, AscanCor(clBrightRed))
      else
         print( ncol, nRow+01, cLine)
      endif
		//i++
		nCol++
		if nCol >= MaxCol()-1
			nCol := 17
			nRow += 50
		endif
	next
	return self

METHOD TErro:MacroErro(e)
	LOCAL cScreen	 := SaveScreen()
	LOCAL cPrograma := ms_swap_extensao("fenix", ".err")
	LOCAL nOldColor := oAmbiente:CorMenu
	LOCAL nchoice	 := 0
	LOCAL i 			 := 5
	LOCAL nPos      := 0
	LOCAL nCol      := 0
	LOCAL nRow      := 0
	LOCAL cKeyBase
	LOCAL cBase
	LOCAL Key
	LOCAL aHash
 
	SWITCH e:gencode()
	CASE 5
		return 0
	CASE 21
	CASE 32
	CASE 40
		if e:candefault()
			neterr( true )
			return false
		endif
		exit		
	ENDSWITCH

	if (::csystem = "TERM")
		if e:oscode() != 3	
			if LptOk()
				return( true )
			endif
			PrintOff()
			::Log()
			Break
		endif			
	endif

	cKeyBase := ::cSystem
	if !(::aBase:Exist(cKeyBase))
		cKeyBase := e:subsystem()		
	endif

	if (e:oscode() = 4)
		::cdescription	:= "IMPOSSIVEL ABRIR MAIS ARQUIVOS."
		::cExplanacao	:= "O LIMITE DE ABERTURA DE ARQUIVOS FOI EXCEDIDO."
		::cAcao 		  	:= "INCREMENTE FILES NO CONFIG.SYS OU FILE HANDLES"
		::cAcao1		  	:= "NO ARQUIVO SHELL.CFG SE EM AMBIENTE DE REDE."
	else
		cBase := ::aBase:GetValue(cKeyBase)
		Key   := cBase + hb_ntos(::nsubcode)

		if ::aAcao:Exist(Key)
			aHash          := ::aAcao:GetValue(Key)
			::cdescription := aHash[2]
			::cExplanacao  := aHash[3]
			::cAcao 		   := aHash[4]
			::cAcao1		   := aHash[5]
		else
			::cdescription := e:description
			::cExplanacao 	:= "ERRO NAO DOCUMENTADO."
			::cAcao 	   	:= "IMPRIMA ESTA TELA. E ENTRE EM CONTATO COM O"
			::cAcao1	   	:= "SUPORTE TECNICO ATRAVES DO TEL (69)3451.3085 ou SUPORTE@MACROSOFT.COM.BR"
		endif
	endif
	
	if empty(e:cargo)
		e:cargo := {Upper(Alias()), Upper(IndexKey(IndexOrd()))}
	endif

	::Log(e)
	if ::nSubCode = 1012
		::DbfRecover(e)
	endif

	::ShowErro(e)
	if(e:canretry(),   AAdd(::aOptions, "Tentar"), nil)
	if(e:candefault(), AAdd(::aOptions, "Default"), nil)
	
	nchoice := 0
	while (nchoice == 0)
		nchoice := alert(self:cMessage, self:aOptions)
		if (!Empty(nchoice))
			if (::aOptions[nchoice] == "Encerrar")
				nopcao := alert("Pergunta: Imprimir resultado para ?", {"Nenhum", "Impressora"})
				if (nopcao == 2) 
					::PrintErro(e)
				endif
				FChDir( oAmbiente:xRoot )
				Break(e)
				// SetColor("")
				// Cls
				// Qout(oAmbiente:StatusSup + ' terminou com erro!')
				// Qout("Consulte " + oAmbiente:xRoot + DEF_SEP + ::FileLog + " para mais detalhes.")
				// Quit
			elseif (::aOptions[nchoice] == "Tentar")
				restela( cScreen )
				oAmbiente:CorMenu := nOldColor
				return true
			elseif (::aOptions[nchoice] == "Default")
				restela( cScreen )
				oAmbiente:CorMenu := nOldColor
				return false
			endif
		endif
	enddo
	PrintOff()
	Break
	return true

*------------------------------------------------------------------------------	
function TErroNew(e)
	return( TErro():New(e))
