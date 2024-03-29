#ifndef _DEFINE_CH_
#define _DEFINE_CH_
/***************************************************************************************************/
#define _SLASH_   hb_ps()
/***************************************************************************************************/
#define CUPS_MENU    1
#define CUPS_MODELO  2
#define CUPS_ACTION  3
#define CUPS_STATUS  4
#define CUPS_PRINTER 5
/***************************************************************************************************/
#define FINALLY					endsequence
#Define fi							endif
#define def							function
#define fn							function
#define sub							function
#Define fed
#define endef
#define enddef
#define endfn
#define endsub
#define endmethod
#define endmethod
/***************************************************************************************************/
#ifdef __PLATFORM__WINDOWS
	#define DEF_SEP "\"
#else
	#define DEF_SEP "/"
#endif
/***************************************************************************************************/
#define EVALBLOCO( list, bBloco )       		( eval(bBloco, list))
#define INRANGE( xLo, xVal, xHi )  				( xVal >= xLo .AND. xVal <= xHi )
#define BETWEEN( xLo, xVal, xHi )  				Min( Max( xLo, xVal ), xHi )
#define LD_TYP_IBM9             1   // type definition for IBM Graphic printer with 9 pins
#define LD_TYP_IBM24 			  5	// type definition for IBM Graphic printer with 24 pins
#define LD_TYP_EPSON9			 11	// type definition for EPSON printer with 9 pins
#define LD_TYP_EPSON24			 15   // type definition for EPSON printer with 24 pins
#define LD_TYP_PCL3				 33	// type definition for PCL3 printer pre(HP Deskjet)
#define LD_TYP_PCL3ENH			 34   // type definition for enhanced PCL3 printer(HP DeskjPlus)
#define LD_TYP_PCL4				 35	// type definition for PCL4 printer (HP Laserjet II)
#define LD_TYP_PCL5				 36	// type definition for PCL5 printer (HP Laserjet III)
#define CONTAS_A_RECEBER    3
#define  S_TOP              0
#define	S_BOTTOM 			 1
#Define	_CODIGO				 12
#Define	SUB					 9
#Define	MIL					 1000
#Define	TAXAMACRO_1 		 1.05415  	// Taxa para 30 dias
#Define	TAXAMACRO_5 		 0.23616  	// Taxa para 5 pgtos
#Define	TAXAMACRO_10		 0.13558  	// Taxa para 5 pgtos
#Define	TAXAMACRO_VENDEDOR 1.1		 	// Taxa para Vendedor
#Define	CTRL_END_SPECIAL	 .T.
#Define	SWAP					 .T.
#Define	MULTI 				 .T. 			// multiusuario
#Define	CODEBAR				 .F.
#Define	FANTACODEBAR		 ""
#Define	LIG					 .T.
#Define	DES					 .F.
#Define  TRUE               .T.
#Define  True               .T.
#Define  true               .T.
#Define  FALSE              .F.
#Define  False              .F.
#Define  false              .F.
#define SETA_CIMA 			  5
#define SETA_BAIXO			  24
#define SETA_ESQUERDA		  19
#define SETA_DIREITA 		  4
#define TECLA_SPACO			  32
#define TECLA_ALT_F4 		  -33
#define ENABLE 				  .T.
#define DISABLE				  .F.
#define CTRL_PGDN					30   
/******************************************************************************************************/
#define MAXLINELENGTH 		2048
#define EOL 					HB_OSNEWLINE()		
#define _CRLF    				CHR(13) + CHR(10)
#define CRLF    				CHR(13) + CHR(10)
#define FALSO     			.F.
#define OK       			   .T.
#define LIG                .T.
#define DES                .F.
#define ENABLE    	  	 	.T.
#define DISABLE    			.F.
#define SETA_CIMA          5
#define SETA_BAIXO         24
#define SETA_ESQUERDA      19
#define SETA_DIREITA       4
#define TECLA_SPACO        32
#define TECLA_ALT_F4       -33
#define ESC                27
#define ENTER              13
#define ESC    				27
#define ENTER              13
/******************************************************************************************************/
#DEFINE NCHOICE_CODI    1
#DEFINE NCHOICE_REGIAO  2
#DEFINE NCHOICE_PERIODO 3
#DEFINE NCHOICE_TIPO    4
#DEFINE NCHOICE_FATURA  5
#DEFINE NCHOICE_GERAL   6
#DEFINE NCHOICE_DOCNR_PARCIAL 7
#DEFINE NCHOICE_DATAPAG       8
/******************************************************************************************************/
#Define POS_OBS 				  11
#define SETA_CIMA 			  5
#define SETA_BAIXO			  24
#define SETA_ESQUERDA		  19
#define SETA_DIREITA 		  4
/******************************************************************************************************/
#Define VAR_AGUDO   											39								 // Indicador de agudo
#Define VAR_CIRCUN                              	94								 // Indicador de circunflexo
#Define VAR_TREMA                               	34								 // Indicador de trema
#Define VAR_CEDMIN                              	91								 // Cedilha min�sculo opcional [
#Define VAR_CEDMAI                          	    	123 							 // Cedilha mai�sculo opcional {
#Define VAR_GRAVE                           	    	96								 // Indicador de grave
#Define VAR_TIL	                          	    	126 							 // Indicador de til
#Define VAR_HifEN                           	    	95								 // Indicador de � � sublinhado+a/o
/******************************************************************************************************/
#Define S_TOP		                          	   	0
#Define S_BOTTOM	  											1
/******************************************************************************************************/
#Define NULL													NIL
#Define null													NIL
/******************************************************************************************************/
#define RECCAR 1
#define RECBCO 2
#define RECOUT 3
#define RECGER 4
#define PAGDIA 5
#define PAGDIV 6
/******************************************************************************************************/
#Define TURN_ON_APPEND_MODE(b)		(b:cargo := .T.)
#Define TURN_OFF_APPEND_MODE(b)		(b:cargo := .F.)
#Define IS_APPEND_MODE(b)				(b:cargo)
#Define MY_HEADSEP						"---"
#Define MY_COLSEP 						" � "
#Define XMESES                      2
#Define XCREDITO                    1
#Define XDEBITO                     3
#define APP_MODE_ON( b )				( b:cargo := OK	)
#define APP_MODE_OFF( b )				( b:cargo := FALSO )
#define APP_MODE_ACTIVE( b )			( b:cargo )
/******************************************************************************************************/
#define aOk                         {" Ok "}    
#define aYes                        {" Sim "}    
#define aYesNo                      {" Sim ", " Nao "}    
#define aIncAltCan                  {" Incluir ", " Alterar ", " Cancelar "}    
#define aIncAltSai                  {" Incluir ", " Alterar ", " Sair "}    
#define aAltCanSai                  {" Alterar ", " Cancelar ", " Sair "}    
/******************************************************************************************************/
#define AC_CURELEMENTO  				10
/******************************************************************************************************/ 
#Define	XCABEC_FAT1 		 			"RELATORIO DE EVENTOS DE FATURAMENTO"
#Define	XCABEC_FAT2 		 			"TIP DATA     HORA     USER  CAIX VENDED FATURA"
#Define	XCABEC_PRN1 		 			"RELATORIO DE EVENTOS DE IMPRESSAO DE DOCUMENTOS DIVERSOS"
#Define	XCABEC_PRN2 		 			"TIP DATA     HORA     USER  CAIX VENDED FATURA"
/**********************************************************/
#define SCI_MAXROW		MaxRow()
#define SCI_MAXCOL 		MaxCol()
/**********************************************************/
#Define XJURODIA        (1/30) // 1mes/30dias=1dia
#Define XJURODIARIO     (1/30) // 1mes/30dias=1dia
#Define XJUROSEMANAL    (1/4)  // 01meses/4semanas=1semana
#Define XJUROQUINZENAL  (1/2)  // 01meses/2semanas=1quinzena
#Define XJUROMENSAL     (1)    // 1mes
#Define XJUROBIMESTRAL  (2/1)  // 02meses/1mes=1bimestre
#Define XJUROTRIMESTRAL (3/1)  // 03meses/1mes=1trimestre
#Define XJUROSEMESTRAL  (6/1)  // 06meses/1mes=1semestre
#Define XJUROANUAL      (12/1) // 12meses/1mes=1ano
/**********************************************************/
#Define SCI_JUROMES          1
#Define SCI_JUROMESSIMPLES   1
#Define SCI_DIASAPOS         2
#Define SCI_DESCAPOS         3
#Define SCI_MULTA            4
#Define SCI_DIAMULTA         5
#Define SCI_CARENCIA         6
#Define SCI_DESCONTO         7
#Define SCI_JUROCOMPOSTO     8
#Define SCI_JUROMESCOMPOSTO  8
/**********************************************************/
#define XTODOS_DOCNR    						      1
#define XTODOS_EMIS     						      2
#define XTODOS_VCTO     						      3
#define XTODOS_ATRASO   						      4
#define XTODOS_VLR      						      5
#define XTODOS_DESCONTO 						      6
#define XTODOS_MULTA    						      7
#define XTODOS_JUROS    						      8
#define XTODOS_SOMA     						      9
#define XTODOS_CODI     						      10
#define XTODOS_OBS      						      11
#define XTODOS_DATAPAG_VCTO_DOCNR 			      12
#define XTODOS_VCTO_DOCNR         			      13
#define XTODOS_DATAPAG_VCTO       			      14
#define XTODOS_FATURA             			      15
#define XTODOS_DATAPAG            			      16
#define XTODOS_ATIVO              			      17
#define XTODOS_RECNO              			      18
#define XTODOS_DATAPAG_DOCNR_VCTO 			      19
#define XTODOS_DATAPAG_FATURA_DOCNR_VCTO 	      20
#define XTODOS_DATAPAG_RIGHT_DOCNR_8_VCTO       21
#define XTODOS_DATAPAG_CODI_RIGHT_DOCNR_8_VCTO  22
#define XTODOS_ID                               23
#define XTODOS_VLRORIGINA                       24
/********* MaBox() ***************************************/
#define poLeft             1
#define poCenter           2
#define poRight            3
#define poTop              4
#define poBottom           5
/*********************************************************/
#define clBlack             0
#define clBlue              1
#define clGreen             2
#define clCyan              3
#define clRed               4
#define clMagenta           5
#define clBrown             6
#define clWhite             8
#define clGray              9
#define clBrightBlue        10
#define clBrightGreen       11
#define clBrightCyan        12
#define clBrightRed         13
#define clBrightMagenta     14
#define clYellow            15
#define clBrightYellow      15
#define clBrightWhite       16
/**********************************************************/
#Define	_LIN_MSG 		18
#Define	P_DEF(Par, Def)	 Par := if( Par = Nil, Def, Par )
#Define	PA 				24
#Define	PB 				25
#Define	PC 				26
#Define	PD 				27
#Define	VOID				NIL
#Define	ZERO				0
#Define	UM 				1
#Define	DOIS				2
#Define	TRES				3
#Define	QUATRO			4
#Define	CINCO 			5
#Define	SEIS				6
#Define	SETE				7
#Define	OITO				8
#Define	NOVE				9
#Define	DEZ				10
#Define	ONZE				11
#Define	DOZE				12
#Define	TREZE 			13
#Define	SIM				UM
#Define	NAO				DOIS
#Define	ESC				27
#Define	ENTER 			13
#Define	MAXIMO			1000
#Define	OK 				.T.
#Define	FALSO 			.F.
#Define	MENU_LINHA		UM
#Define	CPI10132 		132
#Define	CPI12132 		151
#Define	CPI1080			80
#Define	CPI1280			93
#Define	SEP				"-"
/******************************************************************************************************/
#Define S_TOP               	0
#Define S_BOTTOM            	1
#Define FALSO               	.F.
#Define OK                  	.T.
#Define ESC                  	27
#define SETA_CIMA 			  	5
#define SETA_BAIXO			  	24
#define SETA_ESQUERDA		  	19
#define SETA_DIREITA 		  	4
#define TECLA_SPACO			  	32
#define TECLA_ALT_F4 		  	-33
#define ENABLE 				  	.T.
#define DISABLE				  	.F.
#DEFINE CURSOR 				  	{ || Setcursor(Iif( Readinsert(!Readinsert()), 1, 2 )) }
#DEFINE ALTERACAO_PERMITIDA  	.T.
#DEFINE ALTERACAO_NEGADA	  	.F.
/******************************************************************************************************/
#Define	TECLA_DELETE	7
#Define	TECLA_ENTER 	13
#Define	TECLA_INSERT	22
#Define	TECLA_ALTC		302
#Define	TECLA_MAIS		43
#Define	TECLA_MENOS		45
#Define	CTRL_ENTER		10
#Define	CTRL_F1			-20
#Define	CTRL_F2			-21
#Define	CTRL_F3			-22
#Define	CTRL_F4			-23
#Define	CTRL_F5			-24
#Define	CTRL_Q			17
#Define	CTRL_D			 4
#Define	CTRL_P			16
#Define	ASTERISTICO 	42
#Define	K_RETURN 		13
#Define	F1 				28
#Define	F2 				-1
#Define	F3 				-2
#Define	F4 				-3
#Define	F5 				-4
#Define	F6 				-5
#Define	F7 				-6
#Define	F8 				-7
#Define	F9 				-8
#Define	F10				-9
#Define	F11				-40
#Define	F12				-41
#Define	TELA				22
#Define	NORMAL			0
#Define	AUTO				1
#Define	COR				if( FMono(), 7, 31 )
#Define	UP 				5
#Define	DOWN				24
#Define	PGUP				18
#Define	MONO				FALSO
#Define	WARNING			47
//#Define  BEGIN 			while( true )
#Define  BEGOUT         ENDDO
#endif _DEFINE_CH_

//#require "hbwin"
#define FORM_A4 9
#define RGB( nR,nG,nB ) ( nR + ( nG * 256 ) + ( nB * 256 * 256 ) ) 
#define PS_SOLID   	0
#define BLACK           RGB( 0x0 ,0x0 ,0x0 ) 
#define BLUE            RGB( 0x0 ,0x0 ,0x85 ) 
#define GREEN           RGB( 0x0 ,0x85,0x0 ) 
#define CYAN            RGB( 0x0 ,0x85,0x85 ) 
#define RED             RGB( 0x85,0x0 ,0x0 ) 
#define MAGENTA         RGB( 0x85,0x0 ,0x85 ) 
#define BROWN           RGB( 0x85,0x85,0x0 ) 
#define WHITE           RGB( 0xC6,0xC6,0xC6 ) 
#define TRUE 		.t.
#define true 		.t.
#define OK   		.t.
#define FALSE		.f.
#define FALSO		.f.
#define NOK   		.f.
#define FORM_A4 	9
#define ESC			27

#XCOMMAND DEFAULT <v1> TO <x1> [, <vn> TO <xn> ]								;
			 =>																				;
			 IF <v1> == NIL ; <v1> := <x1> ; END									;
			 [; IF <vn> == NIL ; <vn> := <xn> ; END ]
#XCOMMAND DEFAU <v1> TO <x1> [, <vn> TO <xn> ]								;
			 =>																				;
			 IF <v1> == NIL ; <v1> := <x1> ; END									;
			 [; IF <vn> == NIL ; <vn> := <xn> ; END ]
#xcommand WA_USE( <alias> )      					=> USE <alias> SHARED NEW ;;
																	HB_DBDETACH( <(alias)> )
#xcommand WA_LOCK( <alias> )     					=> HB_DBREQUEST( <(alias)> )
#xcommand WA_UNLOCK( <alias> )   					=> HB_DBDETACH( <(alias)> )			
#translate P_Def( <var>, <val> ) 					=> IF( <var> = NIL, <var> := <val>, <var> )
#translate IfNil( <var>, <val> ) 					=> IF( <var> = NIL, <var> := <val>, <var> )
#Translate MkDir  	 	 	 							=> FT_MkDir
#Translate FChDir  	 	 	 							=> FT_ChDir	
#translate isarray			 							=> hb_isarray
#translate ischar			 								=> hb_ischar
#translate isdate			 								=> hb_isdate
#translate lastrow			 							=> maxrow
#translate lastcol			 							=> maxcol
#translate toUtf8                               => hb_UTF8ToStrBox

#xtranslate alltrim(<xValue>)  						=> ltrim(rtrim(<xValue>))
#translate ifNIL( <var>, <val> )        			=> if( <var> = NIL, <var> := <val>, <var> )
#translate MS_DEFAULT( <var>, <val> )    			=> if( <var> = NIL, <var> := <val>, <var> )
#translate MS_NIL( <var>, <val> )    				=> if( <var> = NIL, <var> := <val>, <var> )

#translate TrimStr(<xValue>)      					=> alltrim(<xValue>)
#translate StrTrim(<xValue>)      					=> alltrim(<xValue>)
#translate xAllTrim(<xValue>)      					=> alltrim(<xValue>)
#translate TrimStrZero(<xValue>, <nzeros>)   	=> alltrim(strzero(<xValue>, <nzeros>))
#translate AllTrimStrZero(<xValue>, <nzeros>)   => alltrim(strzero(<xValue>, <nzeros>))
#Translate Beep				 => Tone
#Translate CapFirst			 => TokenUpper
#Translate MsRename			 => FRename
#Translate IsFile			    => File
#Translate Feof			    => HB_Feof
//#Translate MsAdvance		    => FAdvance
#Translate MsWriteLine	    => FWriteLine
#Translate MsReadLine	    => FReadLine
#Translate StrCount	    	 => GT_StrCount
#Translate ChrCount	    	 => GT_StrCount
#Translate PutKey	  	 	 	 => HB_KeyPut
//#Translate SaveVideo	  	  	 => SaveScreen

//#Translate MkDir		  	  	 => FT_MkDir
#Translate Atotal		  	  	 => FT_Asum
#Translate FIsPrinter  	  	 => FT_IsPrint  // Ft_Isprint("lpt1")
#Translate IsPrinter  	  	 => PrintReady  // Printready(1)
#Translate PrnStatus  	  	 => PrintStat
#Translate MkDir  	 	 	 => FT_MkDir
#Translate FChDir  	 	 	 => FT_ChDir
#Translate Argc 	 	 	 	 => HB_Argc
#Translate Argv 	 	 	 	 => HB_Argv
#Translate Program 	 	 	 => HB_ProgName
#Translate Encrypt 	 	 	 => HB_Crypt
#Translate Decrypt			 => HB_Decrypt
#Translate Box(				 => MS_Box(
	
//Versao 3.2/3.4
//#Translate WaitKey			 => HB_Inkey
//#Translate Inkey				 => HB_Inkey
	
//Versao 3.0
#Translate WaitKey			 => Inkey
		
//#Translate Roloc			    => FT_InvClr
#Translate Standard			 => ColorStandard
#Translate Enhanced			 => ColorEnhanced	
#Translate Unselected   	 => ColorUnselected

#xtranslate Single( <t>, <l>, <b>, <r> )               => hb_DispBox( <t>, <l>, <b>, <r>, B_SINGLE )
#xtranslate Double( <t>, <l>, <b>, <r> )               => hb_DispBox( <t>, <l>, <b>, <r>, B_DOUBLE )
#xtranslate SingleDouble( <t>, <l>, <b>, <r> )         => hb_DispBox( <t>, <l>, <b>, <r>, B_SINGLE_DOUBLE )
#xtranslate DoubleSingle( <t>, <l>, <b>, <r> )         => hb_DispBox( <t>, <l>, <b>, <r>, B_DOUBLE_SINGLE )
#xtranslate SingleUni( <t>, <l>, <b>, <r> )            => hb_DispBox( <t>, <l>, <b>, <r>, HB_B_SINGLE_UNI )
#xtranslate DoubleUni( <t>, <l>, <b>, <r> )            => hb_DispBox( <t>, <l>, <b>, <r>, HB_B_DOUBLE_UNI )
#xtranslate SingleDoubleUni( <t>, <l>, <b>, <r> )      => hb_DispBox( <t>, <l>, <b>, <r>, HB_B_SINGLE_DOUBLE_UNI )
#xtranslate DoubleSingleUni( <t>, <l>, <b>, <r> )      => hb_DispBox( <t>, <l>, <b>, <r>, HB_B_DOUBLE_SINGLE_UNI )
#xtranslate BkGrnd( <t>, <l>, <b>, <r>, <c> )          => hb_DispBox( <t>, <l>, <b>, <r>, Replicate( <c>, 9 ))
	
#Translate DiskSize   	 => FT_DskSize
//#Translate DiskFree   	 => FT_DskFree

#Translate Sx_SetScope   	 => OrdScope
#Translate Sx_ClrScope   	 => OrdScope
