/* C source generated by Harbour */

#include "hbvmpub.h"
#include "hbinit.h"

HB_FUNC( BCOR );
HB_FUNC_EXTERN( SETCOLOR );

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BCOR )
{ "BCOR", { HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL }, { HB_FUNCNAME( BCOR ) }, NULL },
{ "SETCOLOR", { HB_FS_PUBLIC }, { HB_FUNCNAME( SETCOLOR ) }, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BCOR, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BCOR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BCOR )
   #include "hbiniseg.h"
#endif

HB_FUNC( BCOR )
{
	static const HB_BYTE pcode[] =
	{
		36,1,0,176,1,0,106,5,119,47,98,43,0,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}
