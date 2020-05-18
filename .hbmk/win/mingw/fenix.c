/*
 * Harbour 3.4.0dev (096e85514a) (2019-07-15 13:50)
 * MinGW GNU C 9.2 (32-bit)
 * PCode version: 0.3
 * Generated C source from "fenix.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"

HB_FUNC( MAIN );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC_EXTERN( TMENUNEW );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC( SETAAMBIENTE );
HB_FUNC_EXTERN( VERARQUIVO );
HB_FUNC_EXTERN( ARQ1 );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( LOGIN );
HB_FUNC_EXTERN( CTR_USER );
HB_FUNC_EXTERN( AREA );
HB_FUNC_EXTERN( __DBLOCATE );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC_EXTERN( TRAVAREG );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( LIBERA );
HB_FUNC_EXTERN( TONE );
HB_FUNC_EXTERN( ALERT );
HB_FUNC_EXTERN( __QUIT );
HB_FUNC_EXTERN( SETKEY );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( SETBLINK );
HB_FUNC_EXTERN( MSETCURSOR );
HB_FUNC_EXTERN( SETMODE );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC( MONTA_MENU );
HB_FUNC_EXTERN( MENUMODAL );
HB_FUNC_EXTERN( TOPBAR );
HB_FUNC_EXTERN( POPUP );
HB_FUNC_EXTERN( MENUITEM );
HB_FUNC_EXTERN( CADASTRO );
HB_FUNC_EXTERN( TRIM );
HB_FUNC_EXTERN( SHOWTIME );
HB_FUNC_EXTERN( SIXCDX );
HB_FUNC_EXTERN( __DBGENTRY );
HB_FUNC_INITLINES();

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FENIX )
{ "MAIN", { HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL }, { HB_FUNCNAME( MAIN ) }, NULL },
{ "LOGFAN", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "SPACE", { HB_FS_PUBLIC }, { HB_FUNCNAME( SPACE ) }, NULL },
{ "__MVPUBLIC", { HB_FS_PUBLIC }, { HB_FUNCNAME( __MVPUBLIC ) }, NULL },
{ "NMUSER", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "CT_CLI", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "CDTR", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "RCB_V", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "PSB", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "L9", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "RT", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "SAIBX", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "CBC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "GERBOL", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "Z", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "FAT", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OMENU", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "TMENUNEW", { HB_FS_PUBLIC }, { HB_FUNCNAME( TMENUNEW ) }, NULL },
{ "_ADBFS", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "SCROLL", { HB_FS_PUBLIC }, { HB_FUNCNAME( SCROLL ) }, NULL },
{ "SETPOS", { HB_FS_PUBLIC }, { HB_FUNCNAME( SETPOS ) }, NULL },
{ "SETAAMBIENTE", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( SETAAMBIENTE ) }, NULL },
{ "VERARQUIVO", { HB_FS_PUBLIC }, { HB_FUNCNAME( VERARQUIVO ) }, NULL },
{ "ARQ1", { HB_FS_PUBLIC }, { HB_FUNCNAME( ARQ1 ) }, NULL },
{ "UNIDADE", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "DRT", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "TERMINAL", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "CODTER", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "COMP", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "NCOMP", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "DBCLOSEALL", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBCLOSEALL ) }, NULL },
{ "LOGIN", { HB_FS_PUBLIC }, { HB_FUNCNAME( LOGIN ) }, NULL },
{ "CTR_USER", { HB_FS_PUBLIC }, { HB_FUNCNAME( CTR_USER ) }, NULL },
{ "AREA", { HB_FS_PUBLIC }, { HB_FUNCNAME( AREA ) }, NULL },
{ "ADBFS", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "__DBLOCATE", { HB_FS_PUBLIC }, { HB_FUNCNAME( __DBLOCATE ) }, NULL },
{ "X", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "EOF", { HB_FS_PUBLIC }, { HB_FUNCNAME( EOF ) }, NULL },
{ "DEVPOS", { HB_FS_PUBLIC }, { HB_FUNCNAME( DEVPOS ) }, NULL },
{ "DEVOUT", { HB_FS_PUBLIC }, { HB_FUNCNAME( DEVOUT ) }, NULL },
{ "DBUNLOCK", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBUNLOCK ) }, NULL },
{ "DBCLOSEAREA", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBCLOSEAREA ) }, NULL },
{ "CADADM", { HB_FS_PUBLIC }, { NULL }, NULL },
{ "TRAVAREG", { HB_FS_PUBLIC }, { HB_FUNCNAME( TRAVAREG ) }, NULL },
{ "DATE", { HB_FS_PUBLIC }, { HB_FUNCNAME( DATE ) }, NULL },
{ "DATASIS", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "LIBERA", { HB_FS_PUBLIC }, { HB_FUNCNAME( LIBERA ) }, NULL },
{ "TONE", { HB_FS_PUBLIC }, { HB_FUNCNAME( TONE ) }, NULL },
{ "ALERT", { HB_FS_PUBLIC }, { HB_FUNCNAME( ALERT ) }, NULL },
{ "__QUIT", { HB_FS_PUBLIC }, { HB_FUNCNAME( __QUIT ) }, NULL },
{ "SETKEY", { HB_FS_PUBLIC }, { HB_FUNCNAME( SETKEY ) }, NULL },
{ "SET", { HB_FS_PUBLIC }, { HB_FUNCNAME( SET ) }, NULL },
{ "__SETCENTURY", { HB_FS_PUBLIC }, { HB_FUNCNAME( __SETCENTURY ) }, NULL },
{ "DATE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "DIF", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "SETBLINK", { HB_FS_PUBLIC }, { HB_FUNCNAME( SETBLINK ) }, NULL },
{ "MSETCURSOR", { HB_FS_PUBLIC }, { HB_FUNCNAME( MSETCURSOR ) }, NULL },
{ "SETMODE", { HB_FS_PUBLIC }, { HB_FUNCNAME( SETMODE ) }, NULL },
{ "SETCOLOR", { HB_FS_PUBLIC }, { HB_FUNCNAME( SETCOLOR ) }, NULL },
{ "MONTA_MENU", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( MONTA_MENU ) }, NULL },
{ "MENUMODAL", { HB_FS_PUBLIC }, { HB_FUNCNAME( MENUMODAL ) }, NULL },
{ "TOPBAR", { HB_FS_PUBLIC }, { HB_FUNCNAME( TOPBAR ) }, NULL },
{ "_COLORSPEC", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "POPUP", { HB_FS_PUBLIC }, { HB_FUNCNAME( POPUP ) }, NULL },
{ "ADDITEM", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "MENUITEM", { HB_FS_PUBLIC }, { HB_FUNCNAME( MENUITEM ) }, NULL },
{ "CADASTRO", { HB_FS_PUBLIC }, { HB_FUNCNAME( CADASTRO ) }, NULL },
{ "YCLICAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "_ENABLED", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "YFORCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YMERCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YPROCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YREPCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YTRACAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YMUNCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YCFOCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YESTCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YCESCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YCDBCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YCLACAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YEMBCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YVENDA", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OPOPUP_E", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_E1", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_E2", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_E3", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OPOPUP_M", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_E4", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_M1", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_M2", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_M3", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_M4", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OPOPUP_L", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_L1", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_L2", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_L3", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_L4", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_L5", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YCOMPRA", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OPOPUP_LC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_LC1", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "OITEM_LC2", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "DTF", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "TRIM", { HB_FS_PUBLIC }, { HB_FUNCNAME( TRIM ) }, NULL },
{ "SHOWTIME", { HB_FS_PUBLIC }, { HB_FUNCNAME( SHOWTIME ) }, NULL },
{ "SIXCDX", { HB_FS_PUBLIC }, { HB_FUNCNAME( SIXCDX ) }, NULL },
{ "__DBGENTRY", { HB_FS_PUBLIC }, { HB_FUNCNAME( __DBGENTRY ) }, NULL },
{ "(_INITLINES)", { HB_FS_INITEXIT | HB_FS_LOCAL }, { hb_INITLINES }, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_FENIX, "fenix.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_FENIX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_FENIX )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,51,102,101,110,105,120,46,112,114,103,58,77,65,73,78,0,
		36,6,0,37,1,0,79,80,85,76,76,0,36,8,0,176,2,0,92,
		4,12,1,176,3,0,108,1,20,1,81,1,0,36,9,0,176,3,0,
		108,4,20,1,36,10,0,106,2,32,0,176,3,0,108,5,20,1,81,
		5,0,36,11,0,106,2,32,0,176,3,0,108,6,20,1,81,6,0,
		36,12,0,106,2,32,0,176,3,0,108,7,20,1,81,7,0,36,13,
		0,106,2,32,0,176,3,0,108,8,20,1,81,8,0,36,14,0,106,
		2,32,0,176,3,0,108,9,20,1,81,9,0,36,15,0,106,2,32,
		0,176,3,0,108,10,20,1,81,10,0,36,16,0,106,2,32,0,176,
		3,0,108,11,20,1,81,11,0,36,17,0,106,2,32,0,176,3,0,
		108,12,20,1,81,12,0,36,18,0,106,2,32,0,176,3,0,108,13,
		20,1,81,13,0,36,19,0,106,2,32,0,176,3,0,108,14,20,1,
		81,14,0,36,20,0,106,2,32,0,176,3,0,108,15,20,1,81,15,
		0,36,21,0,176,17,0,12,0,176,3,0,108,16,20,1,81,16,0,
		36,115,0,48,18,0,109,16,0,106,5,99,111,109,112,0,106,8,99,
		97,100,109,101,114,99,0,106,7,99,97,100,97,100,109,0,106,7,99,
		97,100,102,111,114,0,106,7,99,97,100,99,108,105,0,106,8,99,111,
		109,112,114,97,115,0,106,9,98,97,105,120,97,99,111,109,0,106,7,
		103,97,115,116,111,115,0,106,5,100,101,115,99,0,106,8,97,114,113,
		95,101,109,98,0,106,8,99,97,100,112,114,111,100,0,106,7,101,109,
		98,97,108,115,0,106,8,101,110,116,114,97,100,97,0,106,8,101,115,
		116,111,113,117,101,0,106,7,118,101,110,100,97,115,0,106,9,98,97,
		105,120,97,118,101,110,0,106,9,100,97,100,95,110,102,101,110,0,106,
		9,99,108,109,110,116,100,101,116,0,106,8,105,109,112,111,115,116,111,
		0,106,7,98,99,100,101,115,99,0,106,8,99,108,97,102,105,115,99,
		0,106,5,99,104,101,99,0,106,8,117,115,117,97,114,105,111,0,106,
		6,102,114,101,116,101,0,106,6,102,116,109,116,111,0,106,9,98,99,
		110,116,97,99,111,109,0,106,8,99,97,100,105,99,109,115,0,106,5,
		99,102,111,112,0,106,9,98,97,110,99,110,111,116,97,0,106,8,99,
		97,100,99,108,97,115,0,106,7,99,97,100,102,117,110,0,106,5,99,
		104,101,113,0,106,8,112,101,114,99,109,101,114,0,106,6,112,103,102,
		117,110,0,106,5,104,111,114,97,0,106,7,100,101,109,111,118,105,0,
		106,7,100,112,99,97,114,103,0,106,7,99,97,100,108,105,110,0,106,
		8,99,114,101,97,108,105,110,0,106,6,99,100,97,100,101,0,106,9,
		115,105,116,95,116,114,105,98,0,106,8,99,97,100,99,111,110,115,0,
		106,9,100,97,116,97,95,115,101,109,0,106,7,100,105,97,108,101,116,
		0,106,9,106,117,115,116,105,102,105,99,0,106,9,99,111,110,116,114,
		111,108,100,0,106,6,111,112,102,108,104,0,106,8,100,101,115,112,101,
		115,97,0,106,9,114,101,112,114,101,115,101,110,0,106,9,118,101,110,
		114,101,112,114,101,0,106,7,99,97,100,101,115,112,0,106,7,99,97,
		100,104,105,115,0,106,7,108,101,109,98,114,101,0,106,7,111,114,99,
		109,116,111,0,106,8,99,116,114,95,101,110,116,0,106,5,110,102,97,
		116,0,106,6,118,97,122,105,108,0,106,7,115,108,100,118,97,122,0,
		106,7,99,116,114,118,97,122,0,106,6,99,111,109,99,120,0,106,6,
		99,111,109,118,122,0,106,7,114,101,103,105,97,111,0,106,5,99,109,
		100,97,0,106,7,101,115,116,113,95,99,0,106,6,112,103,102,97,116,
		0,106,4,98,99,111,0,106,8,97,98,99,112,114,111,100,0,106,5,
		111,99,111,114,0,106,6,114,103,118,97,122,0,106,6,118,101,110,95,
		109,0,106,8,97,98,99,95,99,108,105,0,106,7,114,101,108,99,111,
		109,0,106,8,100,101,118,111,108,117,99,0,106,7,101,116,113,95,100,
		118,0,106,8,101,115,116,111,114,110,111,0,106,6,102,114,111,116,97,
		0,106,4,105,118,116,0,106,7,110,102,99,111,109,112,0,106,5,99,
		112,111,109,0,106,5,116,98,108,112,0,106,9,99,97,100,102,114,101,
		116,101,0,106,7,115,116,97,116,117,115,0,106,1,0,106,1,0,106,
		1,0,106,4,99,98,111,0,106,5,99,101,115,116,0,106,4,108,111,
		103,0,106,9,114,101,97,106,117,115,116,101,0,106,8,97,103,112,108,
		111,116,101,0,106,8,105,109,112,114,112,101,100,0,106,9,101,116,105,
		113,117,101,116,97,0,106,7,101,116,113,101,110,118,0,106,7,101,116,
		113,112,114,101,0,4,94,0,112,1,73,36,119,0,176,19,0,20,0,
		176,20,0,121,121,20,2,36,120,0,176,21,0,20,0,36,121,0,176,
		22,0,20,0,36,123,0,176,23,0,20,0,36,124,0,48,24,0,109,
		16,0,112,0,83,25,0,36,125,0,48,26,0,109,16,0,112,0,83,
		27,0,36,126,0,48,28,0,109,16,0,112,0,83,29,0,36,127,0,
		176,30,0,20,0,36,129,0,109,1,0,176,2,0,92,4,12,1,5,
		28,10,36,130,0,176,31,0,20,0,36,135,0,176,32,0,20,0,36,
		137,0,176,33,0,48,34,0,109,16,0,112,0,92,17,1,20,1,36,
		138,0,176,35,0,90,27,51,102,101,110,105,120,46,112,114,103,58,77,
		65,73,78,0,109,36,0,106,2,32,0,5,6,100,100,100,9,20,5,
		36,139,0,176,37,0,12,0,28,74,36,140,0,176,38,0,92,40,122,
		20,2,176,39,0,106,52,32,32,32,32,32,32,32,32,32,32,32,32,
		32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
		32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
		32,0,20,1,25,72,36,142,0,176,38,0,92,40,122,20,2,176,39,
		0,106,52,69,120,105,115,116,101,32,99,111,110,116,114,97,45,110,111,
		116,97,32,112,101,110,100,101,110,116,101,32,112,97,114,97,32,115,101,
		114,101,109,32,101,109,105,116,105,100,97,115,32,33,33,33,0,20,1,
		36,144,0,176,40,0,20,0,36,145,0,176,41,0,20,0,36,147,0,
		176,33,0,106,7,99,97,100,97,100,109,0,20,1,36,148,0,48,28,
		0,109,16,0,112,0,106,9,83,69,82,86,73,68,79,82,0,5,28,
		49,36,149,0,85,108,42,74,176,43,0,12,0,119,29,220,0,36,150,
		0,176,44,0,12,0,108,42,76,45,36,151,0,85,108,42,74,176,46,
		0,20,0,74,36,152,0,26,189,0,36,154,0,176,35,0,90,28,51,
		102,101,110,105,120,46,112,114,103,58,77,65,73,78,0,176,44,0,12,
		0,109,45,0,5,6,100,100,100,9,20,5,36,155,0,176,37,0,12,
		0,28,122,36,156,0,176,40,0,20,0,36,157,0,176,41,0,20,0,
		36,158,0,176,47,0,93,200,0,92,5,20,2,36,159,0,176,48,0,
		106,63,65,84,69,78,67,65,79,32,33,33,33,59,68,97,116,97,32,
		100,111,32,83,105,115,116,101,109,97,32,73,110,99,111,114,114,101,116,
		97,32,33,59,86,111,99,101,32,110,97,111,32,112,111,100,101,32,97,
		99,101,115,115,97,114,46,0,100,106,5,87,43,47,66,0,20,3,36,
		160,0,176,49,0,20,0,25,18,36,162,0,176,40,0,20,0,36,163,
		0,176,41,0,20,0,36,166,0,176,50,0,92,215,100,20,2,36,167,
		0,176,3,0,108,25,20,1,36,168,0,176,51,0,92,26,106,4,79,
		70,70,0,20,2,36,170,0,176,51,0,92,4,176,52,0,12,0,28,
		17,106,11,100,100,47,109,109,47,121,121,121,121,0,25,13,106,9,100,
		100,47,109,109,47,121,121,0,20,2,36,172,0,176,52,0,106,3,79,
		78,0,20,1,36,173,0,176,51,0,92,8,106,3,79,78,0,20,2,
		36,174,0,176,51,0,92,11,106,3,79,78,0,20,2,36,175,0,176,
		44,0,12,0,83,53,0,36,176,0,176,44,0,12,0,83,54,0,36,
		177,0,176,51,0,92,39,93,255,0,20,2,36,178,0,176,55,0,9,
		20,1,36,179,0,176,56,0,120,20,1,36,180,0,176,57,0,92,25,
		92,80,20,2,36,181,0,176,58,0,106,5,119,43,47,98,0,20,1,
		36,182,0,176,19,0,20,0,36,183,0,176,59,0,12,0,80,1,36,
		185,0,176,60,0,95,1,121,121,92,79,92,79,106,5,119,43,47,98,
		0,12,6,93,231,3,69,31,229,36,186,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( MONTA_MENU )
{
	static const HB_BYTE pcode[] =
	{
		13,10,0,51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,
		95,77,69,78,85,0,36,189,0,37,1,0,79,84,79,80,66,65,82,
		0,37,2,0,79,80,79,80,85,80,0,37,3,0,79,80,79,80,85,
		80,49,0,37,4,0,79,80,79,80,85,80,50,0,37,5,0,79,80,
		79,80,85,80,51,0,37,6,0,79,73,84,69,77,0,37,7,0,79,
		73,84,69,77,49,0,37,8,0,79,73,84,69,77,50,0,36,191,0,
		37,9,0,67,67,79,82,66,65,82,0,106,32,98,42,47,119,44,119,
		43,47,98,103,44,98,42,47,119,44,119,43,47,98,103,44,98,42,47,
		119,44,98,42,47,119,0,80,9,36,192,0,37,10,0,67,67,79,82,
		73,84,69,77,0,106,33,119,43,47,98,103,44,98,42,47,119,44,119,
		43,47,98,103,44,98,42,47,119,44,119,47,98,103,44,119,43,47,98,
		103,0,80,10,36,195,0,176,61,0,121,121,93,131,0,12,3,80,1,
		36,196,0,48,62,0,95,1,95,9,112,1,73,36,198,0,176,63,0,
		12,0,80,2,36,199,0,48,62,0,95,2,95,10,112,1,73,36,200,
		0,48,64,0,95,1,176,65,0,106,11,38,67,97,100,97,115,116,114,
		111,115,0,47,95,2,100,100,12,4,112,1,73,36,203,0,176,65,0,
		106,22,67,97,100,97,115,116,114,111,32,100,101,32,38,67,108,105,101,
		110,116,101,115,0,47,90,30,51,102,101,110,105,120,46,112,114,103,58,
		77,79,78,84,65,95,77,69,78,85,0,176,66,0,12,0,6,92,101,
		12,3,80,6,36,204,0,48,64,0,95,2,95,6,112,1,73,36,205,
		0,109,67,0,106,2,66,0,5,28,16,36,206,0,48,68,0,95,6,
		9,112,1,73,25,14,36,208,0,48,68,0,95,6,120,112,1,73,36,
		211,0,176,65,0,106,26,67,97,100,97,115,116,114,111,32,100,101,32,
		38,70,111,114,110,101,99,101,100,111,114,101,115,0,47,90,30,51,102,
		101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,77,69,78,85,
		0,176,66,0,12,0,6,12,2,80,6,36,212,0,48,64,0,95,2,
		95,6,112,1,73,36,213,0,109,69,0,106,2,66,0,5,28,16,36,
		214,0,48,68,0,95,6,9,112,1,73,25,14,36,216,0,48,68,0,
		95,6,120,112,1,73,36,219,0,176,65,0,106,30,67,97,100,97,115,
		116,114,111,32,100,101,32,38,77,101,114,99,46,47,83,117,112,114,105,
		109,101,110,116,111,0,47,90,49,51,102,101,110,105,120,46,112,114,103,
		58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,17,109,101,
		114,99,46,115,117,112,114,105,109,46,46,46,40,41,0,12,1,6,12,
		2,80,6,36,220,0,48,64,0,95,2,95,6,112,1,73,36,221,0,
		109,70,0,106,2,66,0,5,28,16,36,222,0,48,68,0,95,6,9,
		112,1,73,25,14,36,224,0,48,68,0,95,6,120,112,1,73,36,227,
		0,176,65,0,106,22,67,97,100,97,115,116,114,111,32,100,101,32,38,
		80,114,111,100,117,116,111,115,0,47,90,43,51,102,101,110,105,120,46,
		112,114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,
		11,80,114,111,100,117,116,111,115,40,41,0,12,1,6,12,2,80,6,
		36,228,0,48,64,0,95,2,95,6,112,1,73,36,229,0,109,71,0,
		106,2,66,0,5,28,16,36,230,0,48,68,0,95,6,9,112,1,73,
		25,14,36,232,0,48,68,0,95,6,120,112,1,73,36,235,0,48,64,
		0,95,2,176,65,0,106,2,196,0,12,1,112,1,73,36,237,0,176,
		65,0,106,15,82,101,112,114,101,115,101,110,116,97,110,116,101,115,0,
		90,49,51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,
		77,69,78,85,0,176,48,0,106,17,114,101,112,114,101,115,101,110,116,
		97,110,116,101,115,40,41,0,12,1,6,12,2,80,6,36,238,0,48,
		64,0,95,2,95,6,112,1,73,36,239,0,109,72,0,106,2,66,0,
		5,28,16,36,240,0,48,68,0,95,6,9,112,1,73,25,14,36,242,
		0,48,68,0,95,6,120,112,1,73,36,245,0,176,65,0,106,16,84,
		114,97,110,115,112,111,114,116,97,100,111,114,97,115,0,90,50,51,102,
		101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,77,69,78,85,
		0,176,48,0,106,18,84,114,97,110,115,112,111,114,116,97,100,111,114,
		97,115,40,41,0,12,1,6,12,2,80,6,36,246,0,48,64,0,95,
		2,95,6,112,1,73,36,247,0,109,73,0,106,2,66,0,5,28,16,
		36,248,0,48,68,0,95,6,9,112,1,73,25,14,36,250,0,48,68,
		0,95,6,120,112,1,73,36,253,0,48,64,0,95,2,176,65,0,106,
		2,196,0,12,1,112,1,73,36,255,0,176,65,0,106,11,77,117,110,
		105,99,105,112,105,111,115,0,90,45,51,102,101,110,105,120,46,112,114,
		103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,13,109,
		117,110,105,99,105,112,105,111,115,40,41,0,12,1,6,12,2,80,6,
		36,0,1,48,64,0,95,2,95,6,112,1,73,36,1,1,109,74,0,
		106,2,66,0,5,28,16,36,2,1,48,68,0,95,6,9,112,1,73,
		25,14,36,4,1,48,68,0,95,6,120,112,1,73,36,7,1,176,65,
		0,106,5,67,102,111,112,0,90,39,51,102,101,110,105,120,46,112,114,
		103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,7,67,
		70,79,80,40,41,0,12,1,6,12,2,80,6,36,8,1,48,64,0,
		95,2,95,6,112,1,73,36,9,1,109,75,0,106,2,66,0,5,28,
		16,36,10,1,48,68,0,95,6,9,112,1,73,25,14,36,12,1,48,
		68,0,95,6,120,112,1,73,36,15,1,176,65,0,106,13,38,69,115,
		116,97,100,111,47,73,67,77,83,0,47,90,46,51,102,101,110,105,120,
		46,112,114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,
		106,14,101,115,116,97,100,111,32,105,99,109,115,40,41,0,12,1,6,
		12,2,80,6,36,16,1,48,64,0,95,2,95,6,112,1,73,36,17,
		1,109,76,0,106,2,66,0,5,28,16,36,18,1,48,68,0,95,6,
		9,112,1,73,25,14,36,20,1,48,68,0,95,6,120,112,1,73,36,
		23,1,176,65,0,106,5,67,69,83,84,0,90,39,51,102,101,110,105,
		120,46,112,114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,
		0,106,7,99,101,115,116,40,41,0,12,1,6,12,2,80,6,36,24,
		1,48,64,0,95,2,95,6,112,1,73,36,25,1,109,77,0,106,2,
		66,0,5,28,16,36,26,1,48,68,0,95,6,9,112,1,73,25,14,
		36,28,1,48,68,0,95,6,120,112,1,73,36,31,1,48,64,0,95,
		2,176,65,0,106,2,196,0,12,1,112,1,73,36,33,1,176,65,0,
		106,17,67,111,100,105,103,111,32,100,101,32,66,97,114,114,97,115,0,
		90,43,51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,
		77,69,78,85,0,176,48,0,106,11,67,79,68,66,32,66,65,82,40,
		41,0,12,1,6,12,2,80,6,36,34,1,48,64,0,95,2,95,6,
		112,1,73,36,35,1,109,78,0,106,2,66,0,5,28,16,36,36,1,
		48,68,0,95,6,9,112,1,73,25,14,36,38,1,48,68,0,95,6,
		120,112,1,73,36,42,1,176,65,0,106,17,67,108,97,115,46,83,117,
		112,114,105,109,101,110,116,111,115,0,90,46,51,102,101,110,105,120,46,
		112,114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,
		14,115,117,112,114,105,109,101,110,116,111,115,40,41,0,12,1,6,12,
		2,80,6,36,43,1,48,64,0,95,2,95,6,112,1,73,36,44,1,
		109,79,0,106,2,66,0,5,28,16,36,45,1,48,68,0,95,6,9,
		112,1,73,25,14,36,47,1,48,68,0,95,6,120,112,1,73,36,50,
		1,176,65,0,106,11,69,109,98,97,108,97,103,101,110,115,0,90,44,
		51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,77,69,
		78,85,0,176,48,0,106,12,69,109,98,97,108,103,101,110,115,40,41,
		0,12,1,6,12,2,80,6,36,51,1,48,64,0,95,2,95,6,112,
		1,73,36,52,1,109,80,0,106,2,66,0,5,28,16,36,53,1,48,
		68,0,95,6,9,112,1,73,25,14,36,55,1,48,68,0,95,6,120,
		112,1,73,36,61,1,176,63,0,12,0,80,2,36,62,1,48,62,0,
		95,2,95,10,112,1,73,36,63,1,48,64,0,95,1,176,65,0,106,
		8,38,86,101,110,100,97,115,0,47,95,2,100,100,12,4,112,1,73,
		36,65,1,176,63,0,12,0,80,3,36,66,1,48,62,0,95,3,95,
		10,112,1,73,36,67,1,176,65,0,106,17,38,82,101,103,105,115,116,
		114,97,114,32,83,97,105,100,97,0,47,90,41,51,102,101,110,105,120,
		46,112,114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,
		106,9,118,101,110,100,97,115,40,41,0,12,1,6,12,2,80,6,36,
		68,1,48,64,0,95,2,95,6,112,1,73,36,69,1,109,81,0,106,
		2,66,0,5,28,16,36,70,1,48,68,0,95,6,9,112,1,73,25,
		14,36,72,1,48,68,0,95,6,120,112,1,73,36,75,1,176,65,0,
		106,7,38,66,97,105,120,97,0,47,90,40,51,102,101,110,105,120,46,
		112,114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,
		8,98,97,105,120,97,40,41,0,12,1,6,12,2,80,6,36,76,1,
		48,64,0,95,2,95,6,112,1,73,36,78,1,176,65,0,106,9,38,
		67,111,114,114,105,103,101,0,47,90,40,51,102,101,110,105,120,46,112,
		114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,8,
		101,100,105,116,97,40,41,0,12,1,6,12,2,80,6,36,79,1,48,
		64,0,95,2,95,6,112,1,73,36,82,1,176,63,0,12,0,83,82,
		0,36,83,1,48,62,0,109,82,0,95,10,112,1,73,36,84,1,176,
		65,0,106,8,69,115,116,111,113,117,101,0,109,82,0,12,2,80,6,
		36,85,1,48,64,0,95,2,95,6,112,1,73,36,87,1,176,65,0,
		106,14,38,84,111,100,111,32,69,115,116,111,113,117,101,0,47,90,42,
		51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,77,69,
		78,85,0,176,48,0,106,10,101,115,116,111,113,117,101,40,41,0,12,
		1,6,12,2,83,83,0,36,88,1,48,64,0,109,82,0,109,83,0,
		112,1,73,36,90,1,176,65,0,106,13,38,80,111,114,32,80,114,111,
		100,117,116,111,0,47,90,46,51,102,101,110,105,120,46,112,114,103,58,
		77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,14,112,111,114,
		32,112,114,111,100,117,116,111,40,41,0,12,1,6,12,2,83,84,0,
		36,91,1,48,64,0,109,82,0,109,84,0,112,1,73,36,93,1,176,
		65,0,106,16,38,83,105,115,116,101,109,97,32,75,97,110,98,97,110,
		0,47,90,41,51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,
		65,95,77,69,78,85,0,176,48,0,106,9,75,97,110,98,97,110,40,
		41,0,12,1,6,12,2,83,85,0,36,94,1,48,64,0,109,82,0,
		109,85,0,112,1,73,36,96,1,176,63,0,12,0,83,86,0,36,97,
		1,48,62,0,109,86,0,95,10,112,1,73,36,98,1,176,65,0,106,
		11,38,77,97,110,105,112,117,108,97,114,0,47,109,86,0,12,2,83,
		87,0,36,99,1,48,64,0,109,82,0,109,87,0,112,1,73,36,101,
		1,176,65,0,106,16,38,71,101,114,97,114,32,80,114,101,45,76,111,
		116,101,0,47,90,42,51,102,101,110,105,120,46,112,114,103,58,77,79,
		78,84,65,95,77,69,78,85,0,176,48,0,106,10,112,114,101,108,111,
		116,101,40,41,0,12,1,6,12,2,83,88,0,36,102,1,48,64,0,
		109,86,0,109,88,0,112,1,73,36,104,1,176,65,0,106,18,38,67,
		111,110,99,108,117,105,114,32,69,115,116,111,113,117,101,0,47,90,51,
		51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,77,69,
		78,85,0,176,48,0,106,19,99,111,110,99,108,117,105,114,32,101,115,
		116,111,113,117,101,40,41,0,12,1,6,12,2,83,89,0,36,105,1,
		48,64,0,109,86,0,109,89,0,112,1,73,36,107,1,48,64,0,109,
		86,0,176,65,0,106,2,196,0,12,1,112,1,73,36,109,1,176,65,
		0,106,17,38,66,97,105,120,97,114,32,65,109,111,115,116,114,97,115,
		0,47,90,45,51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,
		65,95,77,69,78,85,0,176,48,0,106,13,98,120,32,97,109,111,115,
		116,114,97,40,41,0,12,1,6,12,2,83,90,0,36,110,1,48,64,
		0,109,86,0,109,90,0,112,1,73,36,112,1,176,65,0,106,20,67,
		111,110,116,114,111,108,101,32,100,101,32,38,80,101,114,100,97,115,0,
		47,90,41,51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,
		95,77,69,78,85,0,176,48,0,106,9,112,101,114,100,97,115,40,41,
		0,12,1,6,12,2,83,91,0,36,113,1,48,64,0,109,86,0,109,
		91,0,112,1,73,36,115,1,176,63,0,12,0,83,92,0,36,116,1,
		48,62,0,109,92,0,95,10,112,1,73,36,117,1,176,65,0,106,10,
		38,76,105,115,116,97,103,101,109,0,47,109,92,0,12,2,80,6,36,
		118,1,48,64,0,95,2,95,6,112,1,73,36,120,1,176,65,0,106,
		25,38,76,105,115,116,97,103,101,109,32,99,116,97,115,32,97,32,82,
		101,99,101,98,101,114,0,47,90,47,51,102,101,110,105,120,46,112,114,
		103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,15,99,
		116,97,115,32,114,101,99,101,98,101,114,40,41,0,12,1,6,12,2,
		83,93,0,36,121,1,48,64,0,109,92,0,109,93,0,112,1,73,36,
		123,1,176,65,0,106,9,38,80,101,100,105,100,111,115,0,47,90,42,
		51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,77,69,
		78,85,0,176,48,0,106,10,80,101,100,105,100,111,115,40,41,0,12,
		1,6,12,2,83,94,0,36,124,1,48,64,0,109,92,0,109,94,0,
		112,1,73,36,126,1,176,65,0,106,16,38,82,101,112,114,101,115,101,
		110,116,97,110,116,101,115,0,47,90,49,51,102,101,110,105,120,46,112,
		114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,17,
		82,101,112,114,101,115,101,110,116,97,110,116,101,115,40,41,0,12,1,
		6,12,2,83,95,0,36,127,1,48,64,0,109,92,0,109,95,0,112,
		1,73,36,129,1,176,65,0,106,24,38,69,115,116,111,113,117,101,32,
		82,101,112,114,101,115,101,110,116,97,110,116,101,115,0,47,90,52,51,
		102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,77,69,78,
		85,0,176,48,0,106,20,69,115,116,111,113,117,101,32,82,101,112,114,
		101,115,46,46,46,40,41,0,12,1,6,12,2,83,96,0,36,130,1,
		48,64,0,109,92,0,109,96,0,112,1,73,36,132,1,176,65,0,106,
		11,80,38,114,111,116,101,115,116,111,115,0,47,90,47,51,102,101,110,
		105,120,46,112,114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,
		48,0,106,15,80,114,111,116,101,115,116,111,115,46,46,46,40,41,0,
		12,1,6,12,2,83,97,0,36,133,1,48,64,0,109,92,0,109,97,
		0,112,1,73,36,135,1,176,65,0,106,10,38,80,101,115,113,117,105,
		115,97,0,47,90,43,51,102,101,110,105,120,46,112,114,103,58,77,79,
		78,84,65,95,77,69,78,85,0,176,48,0,106,11,80,101,115,113,117,
		105,115,97,40,41,0,12,1,6,12,2,80,6,36,136,1,48,64,0,
		95,2,95,6,112,1,73,36,138,1,176,65,0,106,13,38,70,97,116,
		117,114,97,109,101,110,116,111,0,47,90,46,51,102,101,110,105,120,46,
		112,114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,
		14,102,97,116,117,114,97,109,101,110,116,111,40,41,0,12,1,6,12,
		2,80,6,36,139,1,48,64,0,95,2,95,6,112,1,73,36,141,1,
		176,65,0,106,12,38,68,101,118,111,108,117,99,111,101,115,0,47,90,
		45,51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,77,
		69,78,85,0,176,48,0,106,13,68,101,118,111,108,117,99,111,101,115,
		40,41,0,12,1,6,12,2,80,6,36,142,1,48,64,0,95,2,95,
		6,112,1,73,36,144,1,176,65,0,106,11,76,101,38,109,98,114,101,
		116,101,115,0,47,90,44,51,102,101,110,105,120,46,112,114,103,58,77,
		79,78,84,65,95,77,69,78,85,0,176,48,0,106,12,76,101,109,98,
		114,101,116,101,115,40,41,0,12,1,6,12,2,80,6,36,145,1,48,
		64,0,95,2,95,6,112,1,73,36,149,1,176,63,0,12,0,80,2,
		36,150,1,48,62,0,95,2,95,10,112,1,73,36,151,1,48,64,0,
		95,1,176,65,0,106,8,67,111,109,112,114,97,115,0,95,2,100,100,
		12,4,112,1,73,36,153,1,176,63,0,12,0,80,4,36,154,1,48,
		62,0,95,4,95,10,112,1,73,36,155,1,176,65,0,106,19,38,82,
		101,103,105,115,116,114,97,114,32,69,110,116,114,97,100,97,0,47,90,
		42,51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,77,
		69,78,85,0,176,48,0,106,10,99,111,109,112,114,97,115,40,41,0,
		12,1,6,12,2,80,6,36,156,1,48,64,0,95,2,95,6,112,1,
		73,36,157,1,109,98,0,106,2,66,0,5,73,36,162,1,176,65,0,
		106,7,38,66,97,105,120,97,0,47,90,40,51,102,101,110,105,120,46,
		112,114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,
		8,98,97,105,120,97,40,41,0,12,1,6,12,2,80,6,36,163,1,
		48,64,0,95,2,95,6,112,1,73,36,165,1,176,65,0,106,9,38,
		67,111,114,114,105,103,101,0,47,90,40,51,102,101,110,105,120,46,112,
		114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,8,
		101,100,105,116,97,40,41,0,12,1,6,12,2,80,6,36,166,1,48,
		64,0,95,2,95,6,112,1,73,36,168,1,176,63,0,12,0,83,99,
		0,36,169,1,48,62,0,109,99,0,95,10,112,1,73,36,170,1,176,
		65,0,106,10,38,76,105,115,116,97,103,101,109,0,47,109,99,0,12,
		2,80,6,36,171,1,48,64,0,95,2,95,6,112,1,73,36,173,1,
		176,65,0,106,23,38,76,105,115,116,97,103,101,109,32,99,116,97,115,
		32,97,32,80,97,103,97,114,0,47,90,45,51,102,101,110,105,120,46,
		112,114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,
		13,99,116,97,115,32,112,97,103,97,114,40,41,0,12,1,6,12,2,
		83,100,0,36,174,1,48,64,0,109,99,0,109,100,0,112,1,73,36,
		176,1,176,65,0,106,9,38,80,101,100,105,100,111,115,0,47,90,42,
		51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,77,69,
		78,85,0,176,48,0,106,10,80,101,100,105,100,111,115,40,41,0,12,
		1,6,12,2,83,101,0,36,177,1,48,64,0,109,99,0,109,101,0,
		112,1,73,36,179,1,176,65,0,106,10,38,80,101,115,113,117,105,115,
		97,0,47,90,43,51,102,101,110,105,120,46,112,114,103,58,77,79,78,
		84,65,95,77,69,78,85,0,176,48,0,106,11,80,101,115,113,117,105,
		115,97,40,41,0,12,1,6,12,2,80,6,36,180,1,48,64,0,95,
		2,95,6,112,1,73,36,182,1,176,65,0,106,13,38,70,97,116,117,
		114,97,109,101,110,116,111,0,47,90,46,51,102,101,110,105,120,46,112,
		114,103,58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,14,
		102,97,116,117,114,97,109,101,110,116,111,40,41,0,12,1,6,12,2,
		80,6,36,183,1,48,64,0,95,2,95,6,112,1,73,36,185,1,176,
		65,0,106,21,38,82,101,103,105,115,116,114,97,32,86,97,122,105,108,
		104,97,109,101,115,0,47,90,45,51,102,101,110,105,120,46,112,114,103,
		58,77,79,78,84,65,95,77,69,78,85,0,176,48,0,106,13,118,97,
		122,105,108,104,97,109,101,115,40,41,0,12,1,6,12,2,80,6,36,
		186,1,48,64,0,95,2,95,6,112,1,73,36,190,1,176,63,0,12,
		0,80,2,36,191,1,48,62,0,95,2,95,10,112,1,73,36,192,1,
		48,64,0,95,1,176,65,0,106,6,38,83,97,105,114,0,47,90,26,
		51,102,101,110,105,120,46,112,114,103,58,77,79,78,84,65,95,77,69,
		78,85,0,120,6,92,223,100,93,231,3,12,5,112,1,73,36,197,1,
		176,44,0,12,0,83,53,0,36,198,1,109,53,0,83,102,0,36,199,
		1,176,58,0,106,32,98,42,47,119,44,119,43,47,98,103,44,98,42,
		47,119,44,119,43,47,98,103,44,98,42,47,119,44,98,42,47,119,0,
		20,1,36,200,1,176,19,0,92,24,121,92,42,93,131,0,20,4,176,
		20,0,92,24,121,20,2,36,201,1,176,38,0,92,24,121,20,2,176,
		39,0,109,1,0,106,2,45,0,72,176,103,0,109,4,0,12,1,72,
		20,1,36,202,1,176,38,0,92,24,92,20,20,2,176,39,0,106,2,
		124,0,20,1,36,203,1,176,38,0,92,24,92,22,20,2,176,39,0,
		176,44,0,12,0,20,1,36,204,1,176,38,0,92,24,92,33,20,2,
		176,39,0,106,2,124,0,20,1,36,205,1,176,104,0,92,24,92,35,
		9,106,5,98,42,47,119,0,9,9,20,6,36,206,1,176,38,0,92,
		24,92,44,20,2,176,39,0,106,2,124,0,20,1,36,207,1,176,38,
		0,92,24,92,46,20,2,176,39,0,106,10,84,101,114,109,105,110,97,
		108,58,0,20,1,36,208,1,176,38,0,92,24,92,56,20,2,176,39,
		0,109,27,0,20,1,36,209,1,176,38,0,92,24,92,60,20,2,176,
		39,0,106,2,124,0,20,1,36,210,1,176,38,0,92,24,92,62,20,
		2,176,39,0,106,1,0,109,29,0,72,106,1,0,72,20,1,36,211,
		1,176,38,0,92,24,92,75,20,2,176,39,0,106,2,124,0,20,1,
		36,212,1,176,38,0,92,24,92,77,20,2,176,39,0,109,25,0,20,
		1,36,214,1,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SETAAMBIENTE )
{
	static const HB_BYTE pcode[] =
	{
		51,102,101,110,105,120,46,112,114,103,58,83,69,84,65,65,77,66,73,
		69,78,84,69,0,36,217,1,176,50,0,92,215,100,20,2,36,218,1,
		176,51,0,92,26,106,4,79,70,70,0,20,2,36,220,1,176,51,0,
		92,4,176,52,0,12,0,28,17,106,11,100,100,47,109,109,47,121,121,
		121,121,0,25,13,106,9,100,100,47,109,109,47,121,121,0,20,2,36,
		222,1,176,52,0,106,3,79,78,0,20,1,36,223,1,176,51,0,92,
		8,106,3,79,78,0,20,2,36,224,1,176,51,0,92,11,106,3,79,
		78,0,20,2,36,225,1,176,51,0,92,39,93,255,0,20,2,36,226,
		1,176,55,0,9,20,1,36,227,1,176,56,0,120,20,1,36,229,1,
		176,58,0,106,5,119,43,47,98,0,20,1,36,230,1,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITLINES()
{
	static const HB_BYTE pcode[] =
	{
		51,102,101,110,105,120,46,112,114,103,58,40,95,73,78,73,84,76,73,
		78,69,83,41,0,106,10,102,101,110,105,120,46,112,114,103,0,121,106,
		62,64,255,63,0,0,0,0,0,0,0,0,0,0,0,136,251,134,94,
		251,253,205,245,255,166,217,121,121,121,121,233,229,165,151,151,151,151,94,
		188,188,224,126,217,188,109,111,107,123,219,182,109,227,62,108,111,219,198,
		225,255,95,214,111,0,4,3,0,4,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}
