/* C source generated by Harbour */

#include "hbvmpub.h"
#include "hbinit.h"

HB_FUNC( MDSHA );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( TONE );
HB_FUNC_EXTERN( ALERT );

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MDSHA )
{ "MDSHA", { HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL }, { HB_FUNCNAME( MDSHA ) }, NULL },
{ "SET", { HB_FS_PUBLIC }, { HB_FUNCNAME( SET ) }, NULL },
{ "TONE", { HB_FS_PUBLIC }, { HB_FUNCNAME( TONE ) }, NULL },
{ "ALERT", { HB_FS_PUBLIC }, { HB_FUNCNAME( ALERT ) }, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MDSHA, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MDSHA
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MDSHA )
   #include "hbiniseg.h"
#endif

HB_FUNC( MDSHA )
{
	static const HB_BYTE pcode[] =
	{
		36,1,0,176,1,0,92,26,106,3,111,110,0,20,2,36,2,0,176,
		2,0,93,200,0,92,5,20,2,36,3,0,176,3,0,106,33,32,65,
		84,69,78,128,199,79,32,33,33,33,59,59,83,69,78,72,65,32,73,
		78,67,79,82,82,69,84,65,32,33,32,0,100,106,5,87,43,47,66,
		0,20,3,36,4,0,176,1,0,92,26,106,4,111,102,102,0,20,2,
		7
	};

	hb_vmExecute( pcode, symbols );
}
