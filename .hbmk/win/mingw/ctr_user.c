/* C source generated by Harbour */

#include "hbvmpub.h"
#include "hbinit.h"

HB_FUNC( CTR_USER );
HB_FUNC_EXTERN( ARQ23 );
HB_FUNC_EXTERN( __DBLOCATE );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( TCOR );
HB_FUNC_EXTERN( __QUIT );
HB_FUNC_EXTERN( __MVPUBLIC );

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CTR_USER )
{ "CTR_USER", { HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL }, { HB_FUNCNAME( CTR_USER ) }, NULL },
{ "ARQ23", { HB_FS_PUBLIC }, { HB_FUNCNAME( ARQ23 ) }, NULL },
{ "__DBLOCATE", { HB_FS_PUBLIC }, { HB_FUNCNAME( __DBLOCATE ) }, NULL },
{ "CODUSU", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "LOGFAN", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "EOF", { HB_FS_PUBLIC }, { HB_FUNCNAME( EOF ) }, NULL },
{ "DBUNLOCK", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBUNLOCK ) }, NULL },
{ "DBCLOSEAREA", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBCLOSEAREA ) }, NULL },
{ "SCROLL", { HB_FS_PUBLIC }, { HB_FUNCNAME( SCROLL ) }, NULL },
{ "SETPOS", { HB_FS_PUBLIC }, { HB_FUNCNAME( SETPOS ) }, NULL },
{ "BLQ", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "READKILL", { HB_FS_PUBLIC }, { HB_FUNCNAME( READKILL ) }, NULL },
{ "GETLIST", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "DISPBOX", { HB_FS_PUBLIC }, { HB_FUNCNAME( DISPBOX ) }, NULL },
{ "SETCOLOR", { HB_FS_PUBLIC }, { HB_FUNCNAME( SETCOLOR ) }, NULL },
{ "DEVPOS", { HB_FS_PUBLIC }, { HB_FUNCNAME( DEVPOS ) }, NULL },
{ "DEVOUT", { HB_FS_PUBLIC }, { HB_FUNCNAME( DEVOUT ) }, NULL },
{ "INKEY", { HB_FS_PUBLIC }, { HB_FUNCNAME( INKEY ) }, NULL },
{ "TCOR", { HB_FS_PUBLIC }, { HB_FUNCNAME( TCOR ) }, NULL },
{ "__QUIT", { HB_FS_PUBLIC }, { HB_FUNCNAME( __QUIT ) }, NULL },
{ "YCADASTRO", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YVENDA", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YREGV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YBXV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YEDTV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YESTQV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YETQED", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YLSTV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YPSQV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YFTV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YNFV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "__MVPUBLIC", { HB_FS_PUBLIC }, { HB_FUNCNAME( __MVPUBLIC ) }, NULL },
{ "YCOMPRA", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YREGC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YBXC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YEDTC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YLSTC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YESTQC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YPSQC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YNFC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YETQC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YESTOQUE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YPLNE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YCNCE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YEDTE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YRGPE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YCHEQ", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YDPE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YLJA", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YFNA", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YNFE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YNFEN", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YNFSA", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YPERE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YDVV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YCLICAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YFORCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YMERCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YPROCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YCFOCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YCDBCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YESTCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YCLACAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YEMBCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YMUNCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YREPCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YTRACAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "YCESCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "CADASTRO", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "CLICAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "FORCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "MERCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "PROCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "CFOCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "CDBCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "ESTCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "CLACAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "EMBCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "MUNCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "REPCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "TRACAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "CESCAD", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "VENDA", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "REGV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "BXV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "EDTV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "ESTQV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "ETQED", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "LSTV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "PSQV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "FTV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "NFV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "DVV", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "COMPRA", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "REGC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "BXC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "EDTC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "LSTC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "ESTQC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "PSQC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "NFC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "ETQC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "ESTOQUE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "PLNE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "CNCE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "EDTE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "PERE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "RGPE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "CHEQ", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "DPE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "LJA", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "FNA", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "NFE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "NFEN", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "NFSA", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CTR_USER, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CTR_USER
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CTR_USER )
   #include "hbiniseg.h"
#endif

HB_FUNC( CTR_USER )
{
	static const HB_BYTE pcode[] =
	{
		36,1,0,176,1,0,20,0,36,2,0,176,2,0,90,10,109,3,0,
		109,4,0,5,6,100,100,100,9,20,5,36,3,0,176,5,0,12,0,
		29,244,0,36,4,0,176,6,0,20,0,36,5,0,176,7,0,20,0,
		36,6,0,176,8,0,20,0,176,9,0,121,121,20,2,36,7,0,106,
		2,32,0,83,10,0,36,8,0,176,8,0,20,0,176,9,0,121,121,
		20,2,176,11,0,120,20,1,4,0,0,83,12,0,109,12,0,73,36,
		9,0,176,13,0,92,8,121,92,13,92,79,122,20,5,36,10,0,176,
		14,0,106,3,114,43,0,20,1,36,11,0,176,15,0,92,10,92,15,
		20,2,176,16,0,106,38,32,32,32,32,86,79,67,69,32,78,199,79,
		32,80,79,68,69,32,66,85,82,76,65,82,32,79,32,83,73,83,84,
		69,77,65,32,32,32,0,20,1,36,12,0,176,15,0,92,11,92,15,
		20,2,176,16,0,106,38,32,32,32,32,32,32,32,32,32,83,65,73,
		78,68,79,32,46,46,46,46,46,46,46,46,46,46,46,46,46,46,32,
		32,32,32,32,32,32,0,20,1,36,13,0,176,17,0,92,5,20,1,
		36,14,0,176,18,0,20,0,36,15,0,176,19,0,20,0,36,17,0,
		176,31,0,108,20,108,21,108,22,108,23,108,24,108,25,108,26,108,27,
		108,28,108,29,108,30,20,11,36,18,0,176,31,0,108,32,108,33,108,
		34,108,35,108,36,108,37,108,38,108,39,108,40,108,41,108,42,108,43,
		20,12,36,19,0,176,31,0,108,44,108,45,108,46,108,47,108,48,108,
		49,108,50,108,51,108,52,108,53,108,54,20,11,36,20,0,176,31,0,
		108,55,108,56,108,57,108,58,108,59,108,60,108,61,108,62,108,63,108,
		64,108,65,108,66,108,67,20,13,36,21,0,109,68,0,83,20,0,36,
		22,0,109,69,0,83,55,0,36,23,0,109,70,0,83,56,0,36,24,
		0,109,71,0,83,57,0,36,25,0,109,72,0,83,58,0,36,26,0,
		109,73,0,83,59,0,36,27,0,109,74,0,83,60,0,36,28,0,109,
		75,0,83,61,0,36,29,0,109,76,0,83,62,0,36,30,0,109,77,
		0,83,63,0,36,31,0,109,78,0,83,64,0,36,32,0,109,79,0,
		83,65,0,36,33,0,109,80,0,83,66,0,36,34,0,109,81,0,83,
		67,0,36,35,0,109,82,0,83,21,0,36,36,0,109,83,0,83,22,
		0,36,37,0,109,84,0,83,23,0,36,38,0,109,85,0,83,24,0,
		36,39,0,109,86,0,83,25,0,36,40,0,109,87,0,83,26,0,36,
		41,0,109,88,0,83,27,0,36,42,0,109,89,0,83,28,0,36,43,
		0,109,90,0,83,29,0,36,44,0,109,91,0,83,30,0,36,45,0,
		109,92,0,83,54,0,36,46,0,109,93,0,83,32,0,36,47,0,109,
		94,0,83,33,0,36,48,0,109,95,0,83,34,0,36,49,0,109,96,
		0,83,35,0,36,50,0,109,97,0,83,36,0,36,51,0,109,98,0,
		83,37,0,36,52,0,109,99,0,83,38,0,36,53,0,109,100,0,83,
		39,0,36,54,0,109,101,0,83,40,0,36,55,0,109,102,0,83,41,
		0,36,56,0,109,103,0,83,42,0,36,57,0,109,104,0,83,43,0,
		36,58,0,109,105,0,83,44,0,36,59,0,109,106,0,83,53,0,36,
		60,0,109,107,0,83,45,0,36,61,0,109,108,0,83,46,0,36,62,
		0,109,109,0,83,47,0,36,63,0,109,110,0,83,48,0,36,64,0,
		109,111,0,83,49,0,36,65,0,109,112,0,83,50,0,36,66,0,109,
		113,0,83,51,0,36,67,0,109,114,0,83,52,0,36,68,0,176,6,
		0,20,0,36,69,0,176,7,0,20,0,36,70,0,7
	};

	hb_vmExecute( pcode, symbols );
}
