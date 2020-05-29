/*
 * Harbour 3.2.0dev (r2003271400)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "src\tmenu.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TMENU );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TAMBIENTE );
HB_FUNC_STATIC( TMENU_NEW );
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC( TMENUNEW );
HB_FUNC_EXTERN( DBFNTX );
HB_FUNC_EXTERN( DBFCDX );
HB_FUNC_EXTERN( DBFFPT );
HB_FUNC_EXTERN( SIXCDX );
HB_FUNC_EXTERN( DBFNSX );
HB_FUNC_EXTERN( HB_MEMIO );
HB_FUNC_EXTERN( __DBGENTRY );
HB_FUNC_INITSTATICS();
HB_FUNC_INITLINES();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TMENU )
{ "TMENU", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TMENU )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TAMBIENTE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TAMBIENTE )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TMENU_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TMENU_NEW )}, NULL },
{ "MENU1", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "__MVPUBLIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPUBLIC )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETVAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_STATUSSUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_STATUSINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_PANOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPANO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_MENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "XMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DISP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "XDISP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ALTERANDO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ATIVO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NOMEFIRMA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CODIFIRMA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_STSUPARRAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STATUSSUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_STINFARRAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STATUSINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_MENUARRAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DISPARRAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ADBFS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TMENUNEW", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TMENUNEW )}, NULL },
{ "DBFNTX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFNTX )}, NULL },
{ "DBFCDX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFCDX )}, NULL },
{ "DBFFPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFFPT )}, NULL },
{ "SIXCDX", {HB_FS_PUBLIC}, {HB_FUNCNAME( SIXCDX )}, NULL },
{ "DBFNSX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFNSX )}, NULL },
{ "HB_MEMIO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MEMIO )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TMENU, "src\\tmenu.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TMENU
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TMENU )
   #include "hbiniseg.h"
#endif

HB_FUNC( TMENU )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,46,0,51,115,114,99,92,116,109,101,
		110,117,46,112,114,103,58,84,77,69,78,85,0,36,
		3,0,118,0,1,0,83,95,79,67,76,65,83,83,
		0,36,3,0,37,1,0,78,83,67,79,80,69,0,
		37,2,0,79,67,76,65,83,83,0,37,3,0,79,
		73,78,83,84,65,78,67,69,0,103,1,0,100,8,
		29,198,0,176,1,0,104,1,0,12,1,29,187,0,
		166,125,0,0,122,80,1,48,2,0,176,3,0,12,
		0,106,6,84,77,101,110,117,0,108,4,4,1,0,
		108,0,112,3,80,2,36,4,0,122,80,1,36,5,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,4,67,111,108,0,4,1,0,9,112,5,
		73,36,7,0,122,80,1,36,8,0,48,6,0,95,
		2,106,4,78,101,119,0,108,7,95,1,121,72,121,
		72,121,72,112,3,73,36,10,0,176,9,0,108,8,
		20,1,36,11,0,48,10,0,95,2,112,0,73,167,
		14,0,0,176,11,0,104,1,0,95,2,20,2,168,
		48,12,0,95,2,112,0,80,3,176,13,0,95,3,
		106,10,73,110,105,116,67,108,97,115,115,0,12,2,
		28,12,48,14,0,95,3,164,146,1,0,73,95,3,
		110,7,48,12,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TMENU_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,51,115,114,99,92,116,109,101,110,117,46,
		112,114,103,58,84,77,69,78,85,95,78,69,87,0,
		37,1,0,79,79,87,78,69,82,0,36,13,0,37,
		2,0,83,69,76,70,0,102,80,2,36,15,0,48,
		2,0,95,2,95,1,112,1,73,36,18,0,48,15,
		0,95,2,112,0,73,36,19,0,48,16,0,95,2,
		106,18,70,101,110,105,120,32,102,111,114,32,87,105,
		110,100,111,119,115,0,112,1,73,36,20,0,48,17,
		0,95,2,106,1,0,112,1,73,36,21,0,48,18,
		0,95,2,48,19,0,95,2,112,0,112,1,73,36,
		22,0,48,20,0,95,2,48,21,0,95,2,112,0,
		112,1,73,36,23,0,48,22,0,95,2,48,23,0,
		95,2,112,0,112,1,73,36,24,0,48,24,0,95,
		2,9,112,1,73,36,25,0,48,25,0,95,2,122,
		112,1,73,36,26,0,48,26,0,95,2,122,112,1,
		73,36,27,0,48,27,0,95,2,106,17,67,76,65,
		77,65,82,32,67,79,78,83,69,82,86,65,83,0,
		112,1,73,36,28,0,48,28,0,95,2,106,5,48,
		48,48,49,0,112,1,73,36,29,0,48,29,0,95,
		2,48,30,0,95,2,112,0,4,1,0,112,1,73,
		36,30,0,48,31,0,95,2,48,32,0,95,2,112,
		0,4,1,0,112,1,73,36,31,0,48,33,0,95,
		2,48,34,0,95,2,112,0,4,1,0,112,1,73,
		36,32,0,48,35,0,95,2,48,36,0,95,2,112,
		0,4,1,0,112,1,73,36,33,0,48,37,0,95,
		2,4,0,0,112,1,73,36,37,0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( TMENUNEW )
{
	static const HB_BYTE pcode[] =
	{
		51,115,114,99,92,116,109,101,110,117,46,112,114,103,
		58,84,77,69,78,85,78,69,87,0,36,40,0,48,
		2,0,176,0,0,12,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,46,0,1,0,116,46,0,51,115,114,99,92,116,
		109,101,110,117,46,112,114,103,58,40,95,73,78,73,
		84,83,84,65,84,73,67,83,41,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITLINES()
{
	static const HB_BYTE pcode[] =
	{
		51,115,114,99,92,116,109,101,110,117,46,112,114,103,
		58,40,95,73,78,73,84,76,73,78,69,83,41,0,
		106,14,115,114,99,92,116,109,101,110,117,46,112,114,
		103,0,121,106,6,184,173,252,255,35,1,4,3,0,
		4,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

