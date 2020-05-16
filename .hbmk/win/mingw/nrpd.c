/* C source generated by Harbour */

#include "hbvmpub.h"
#include "hbinit.h"

HB_FUNC( NRPD );
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( STR );

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_NRPD )
{ "NRPD", { HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL }, { HB_FUNCNAME( NRPD ) }, NULL },
{ "CODNUM", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "__MVPUBLIC", { HB_FS_PUBLIC }, { HB_FUNCNAME( __MVPUBLIC ) }, NULL },
{ "DIGT", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "REG", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "LTRIM", { HB_FS_PUBLIC }, { HB_FUNCNAME( LTRIM ) }, NULL },
{ "STR", { HB_FS_PUBLIC }, { HB_FUNCNAME( STR ) }, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_NRPD, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_NRPD
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_NRPD )
   #include "hbiniseg.h"
#endif

HB_FUNC( NRPD )
{
	static const HB_BYTE pcode[] =
	{
		36,1,0,176,2,0,108,1,20,1,36,2,0,109,3,0,106,3,49,
		48,0,5,29,145,1,36,3,0,109,4,0,92,10,35,28,34,36,4,
		0,106,10,48,48,48,48,48,48,48,48,48,0,176,5,0,176,6,0,
		109,4,0,12,1,12,1,72,83,1,0,36,6,0,109,4,0,92,10,
		16,28,33,36,7,0,106,9,48,48,48,48,48,48,48,48,0,176,5,
		0,176,6,0,109,4,0,12,1,12,1,72,83,1,0,36,9,0,109,
		4,0,92,99,15,28,32,36,10,0,106,8,48,48,48,48,48,48,48,
		0,176,5,0,176,6,0,109,4,0,12,1,12,1,72,83,1,0,36,
		12,0,109,4,0,93,231,3,15,28,31,36,13,0,106,7,48,48,48,
		48,48,48,0,176,5,0,176,6,0,109,4,0,12,1,12,1,72,83,
		1,0,36,15,0,109,4,0,93,15,39,15,28,30,36,16,0,106,6,
		48,48,48,48,48,0,176,5,0,176,6,0,109,4,0,12,1,12,1,
		72,83,1,0,36,18,0,109,4,0,97,159,134,1,0,15,28,29,36,
		19,0,106,5,48,48,48,48,0,176,5,0,176,6,0,109,4,0,12,
		1,12,1,72,83,1,0,36,21,0,109,4,0,97,63,66,15,0,15,
		28,28,36,22,0,106,4,48,48,48,0,176,5,0,176,6,0,109,4,
		0,12,1,12,1,72,83,1,0,36,24,0,109,4,0,97,127,150,152,
		0,15,28,27,36,25,0,106,3,48,48,0,176,5,0,176,6,0,109,
		4,0,12,1,12,1,72,83,1,0,36,27,0,109,4,0,97,255,224,
		245,5,15,28,26,36,28,0,106,2,48,0,176,5,0,176,6,0,109,
		4,0,12,1,12,1,72,83,1,0,36,30,0,109,4,0,97,255,201,
		154,59,15,28,21,36,31,0,176,5,0,176,6,0,109,4,0,12,1,
		12,1,83,1,0,36,34,0,109,3,0,106,2,56,0,5,29,54,1,
		36,35,0,109,4,0,92,10,35,28,32,36,36,0,106,8,48,48,48,
		48,48,48,48,0,176,5,0,176,6,0,109,4,0,12,1,12,1,72,
		83,1,0,36,38,0,109,4,0,92,10,16,28,31,36,39,0,106,7,
		48,48,48,48,48,48,0,176,5,0,176,6,0,109,4,0,12,1,12,
		1,72,83,1,0,36,41,0,109,4,0,92,99,15,28,30,36,42,0,
		106,6,48,48,48,48,48,0,176,5,0,176,6,0,109,4,0,12,1,
		12,1,72,83,1,0,36,44,0,109,4,0,93,231,3,15,28,29,36,
		45,0,106,5,48,48,48,48,0,176,5,0,176,6,0,109,4,0,12,
		1,12,1,72,83,1,0,36,47,0,109,4,0,93,15,39,15,28,28,
		36,48,0,106,4,48,48,48,0,176,5,0,176,6,0,109,4,0,12,
		1,12,1,72,83,1,0,36,50,0,109,4,0,97,159,134,1,0,15,
		28,27,36,51,0,106,3,48,48,0,176,5,0,176,6,0,109,4,0,
		12,1,12,1,72,83,1,0,36,53,0,109,4,0,97,63,66,15,0,
		15,28,26,36,54,0,106,2,48,0,176,5,0,176,6,0,109,4,0,
		12,1,12,1,72,83,1,0,36,56,0,109,4,0,97,127,150,152,0,
		15,28,21,36,57,0,176,5,0,176,6,0,109,4,0,12,1,12,1,
		83,1,0,36,60,0,109,3,0,106,2,54,0,5,29,223,0,36,61,
		0,109,4,0,92,10,35,28,30,36,62,0,106,6,48,48,48,48,48,
		0,176,5,0,176,6,0,109,4,0,12,1,12,1,72,83,1,0,36,
		64,0,109,4,0,92,10,16,28,29,36,65,0,106,5,48,48,48,48,
		0,176,5,0,176,6,0,109,4,0,12,1,12,1,72,83,1,0,36,
		67,0,109,4,0,92,99,15,28,28,36,68,0,106,4,48,48,48,0,
		176,5,0,176,6,0,109,4,0,12,1,12,1,72,83,1,0,36,70,
		0,109,4,0,93,231,3,15,28,27,36,71,0,106,3,48,48,0,176,
		5,0,176,6,0,109,4,0,12,1,12,1,72,83,1,0,36,73,0,
		109,4,0,93,15,39,15,28,26,36,74,0,106,2,48,0,176,5,0,
		176,6,0,109,4,0,12,1,12,1,72,83,1,0,36,76,0,109,4,
		0,97,159,134,1,0,15,28,21,36,77,0,176,5,0,176,6,0,109,
		4,0,12,1,12,1,83,1,0,36,80,0,109,3,0,106,2,53,0,
		5,29,181,0,36,81,0,109,4,0,92,10,35,28,29,36,82,0,106,
		5,48,48,48,48,0,176,5,0,176,6,0,109,4,0,12,1,12,1,
		72,83,1,0,36,84,0,109,4,0,92,10,16,28,28,36,85,0,106,
		4,48,48,48,0,176,5,0,176,6,0,109,4,0,12,1,12,1,72,
		83,1,0,36,87,0,109,4,0,92,99,15,28,27,36,88,0,106,3,
		48,48,0,176,5,0,176,6,0,109,4,0,12,1,12,1,72,83,1,
		0,36,90,0,109,4,0,93,231,3,15,28,26,36,91,0,106,2,48,
		0,176,5,0,176,6,0,109,4,0,12,1,12,1,72,83,1,0,36,
		93,0,109,4,0,93,15,39,15,28,21,36,94,0,176,5,0,176,6,
		0,109,4,0,12,1,12,1,83,1,0,36,97,0,109,3,0,106,2,
		52,0,5,29,142,0,36,98,0,109,4,0,92,10,35,28,28,36,99,
		0,106,4,48,48,48,0,176,5,0,176,6,0,109,4,0,12,1,12,
		1,72,83,1,0,36,101,0,109,4,0,92,10,16,28,27,36,102,0,
		106,3,48,48,0,176,5,0,176,6,0,109,4,0,12,1,12,1,72,
		83,1,0,36,104,0,109,4,0,92,99,15,28,26,36,105,0,106,2,
		48,0,176,5,0,176,6,0,109,4,0,12,1,12,1,72,83,1,0,
		36,107,0,109,4,0,93,231,3,15,28,21,36,108,0,176,5,0,176,
		6,0,109,4,0,12,1,12,1,83,1,0,36,111,0,109,3,0,106,
		2,50,0,5,28,67,36,112,0,109,4,0,92,10,35,28,26,36,113,
		0,106,2,48,0,176,5,0,176,6,0,109,4,0,12,1,12,1,72,
		83,1,0,36,115,0,109,4,0,92,10,16,28,21,36,116,0,176,5,
		0,176,6,0,109,4,0,12,1,12,1,83,1,0,36,118,0,7
	};

	hb_vmExecute( pcode, symbols );
}
