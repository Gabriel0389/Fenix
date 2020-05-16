/* C source generated by Harbour */

#include "hbvmpub.h"
#include "hbinit.h"

HB_FUNC( ARQ94 );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( MAXROW );
HB_FUNC_EXTERN( MAXCOL );
HB_FUNC_EXTERN( ARQ1 );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( DBUSEAREA );
HB_FUNC_EXTERN( NETERR );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( TCOR );
HB_FUNC_EXTERN( RESTSCREEN );

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ARQ94 )
{ "ARQ94", { HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL }, { HB_FUNCNAME( ARQ94 ) }, NULL },
{ "SAVESCREEN", { HB_FS_PUBLIC }, { HB_FUNCNAME( SAVESCREEN ) }, NULL },
{ "MAXROW", { HB_FS_PUBLIC }, { HB_FUNCNAME( MAXROW ) }, NULL },
{ "MAXCOL", { HB_FS_PUBLIC }, { HB_FUNCNAME( MAXCOL ) }, NULL },
{ "A90", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "ARQ1", { HB_FS_PUBLIC }, { HB_FUNCNAME( ARQ1 ) }, NULL },
{ "COMP", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "DRT", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "ACESS", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "DBUNLOCK", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBUNLOCK ) }, NULL },
{ "DBUSEAREA", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBUSEAREA ) }, NULL },
{ "NETERR", { HB_FS_PUBLIC }, { HB_FUNCNAME( NETERR ) }, NULL },
{ "SETCOLOR", { HB_FS_PUBLIC }, { HB_FUNCNAME( SETCOLOR ) }, NULL },
{ "DISPBOX", { HB_FS_PUBLIC }, { HB_FUNCNAME( DISPBOX ) }, NULL },
{ "DEVPOS", { HB_FS_PUBLIC }, { HB_FUNCNAME( DEVPOS ) }, NULL },
{ "DEVOUT", { HB_FS_PUBLIC }, { HB_FUNCNAME( DEVOUT ) }, NULL },
{ "TCOR", { HB_FS_PUBLIC }, { HB_FUNCNAME( TCOR ) }, NULL },
{ "RESTSCREEN", { HB_FS_PUBLIC }, { HB_FUNCNAME( RESTSCREEN ) }, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ARQ94, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ARQ94
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ARQ94 )
   #include "hbiniseg.h"
#endif

HB_FUNC( ARQ94 )
{
	static const HB_BYTE pcode[] =
	{
		36,1,0,176,1,0,121,121,176,2,0,12,0,176,3,0,12,0,12,
		4,83,4,0,36,3,0,176,5,0,20,0,36,4,0,109,6,0,106,
		9,83,69,82,86,73,68,79,82,0,5,28,30,36,5,0,106,3,67,
		58,0,83,7,0,36,6,0,106,7,101,116,113,112,114,101,0,83,8,
		0,25,31,36,8,0,106,3,84,58,0,83,7,0,36,9,0,106,10,
		84,58,92,101,116,113,112,114,101,0,83,8,0,36,11,0,176,9,0,
		20,0,36,12,0,176,10,0,9,100,109,8,0,100,9,9,20,6,36,
		13,0,176,11,0,12,0,29,171,0,36,14,0,176,12,0,106,6,71,
		43,47,114,43,0,20,1,36,15,0,176,13,0,92,9,92,21,92,14,
		92,49,122,20,5,36,16,0,176,13,0,92,10,92,22,92,13,92,48,
		122,20,5,36,17,0,176,14,0,92,11,92,23,20,2,176,15,0,106,
		26,32,32,42,32,65,99,101,115,115,111,32,99,111,109,112,97,114,116,
		105,108,104,97,100,111,33,0,20,1,36,18,0,176,14,0,92,12,92,
		23,20,2,176,15,0,106,26,32,32,32,32,32,32,32,32,32,65,103,
		117,97,114,100,101,46,46,46,32,32,32,32,32,32,0,20,1,36,19,
		0,176,13,0,92,9,92,21,92,14,92,49,122,20,5,36,20,0,176,
		16,0,20,0,26,227,254,36,25,0,176,17,0,121,121,176,2,0,12,
		0,176,3,0,12,0,109,4,0,20,5,7
	};

	hb_vmExecute( pcode, symbols );
}
