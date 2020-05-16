/* C source generated by Harbour */

#include "hbvmpub.h"
#include "hbinit.h"

HB_FUNC_STATIC( OSCIMENUSCI );
HB_FUNC_EXTERN( AADD );
HB_FUNC( AMAXSTRLENBI );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC( AVALIA );
HB_FUNC( BROWSEARRAY );
HB_FUNC_EXTERN( HB_ISNIL );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( DBCREATE );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( DBAPPEND );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( BROWSE );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC_EXTERN( DBDROP );
HB_FUNC_EXTERN( ALERT );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( RAT );
HB_FUNC_EXTERN( RIGHT );
HB_FUNC( BROWSEARRAYSIMPLESV );
HB_FUNC( BROWSEARRAYDBF );
HB_FUNC_EXTERN( USED );
HB_FUNC_EXTERN( ALIAS );
HB_FUNC_EXTERN( DBSTRUCT );
HB_FUNC( BROWSEARRAYSIMPLESH );
HB_FUNC( MAIN );
HB_FUNC_EXTERN( ADIR );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( AFILL );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_EXTERN( DIRECTORY );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( PADR );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC( QUITTBDEMO );
HB_FUNC_EXTERN( DBUSEAREA );
HB_FUNC_EXTERN( MAXROW );
HB_FUNC_EXTERN( __QUIT );
HB_FUNC_EXTERN( HB_MEMIO );

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TBDEMO )
{ "OSCIMENUSCI", { HB_FS_STATIC | HB_FS_FIRST | HB_FS_LOCAL }, { HB_FUNCNAME( OSCIMENUSCI ) }, NULL },
{ "AADD", { HB_FS_PUBLIC }, { HB_FUNCNAME( AADD ) }, NULL },
{ "AMAXSTRLENBI", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( AMAXSTRLENBI ) }, NULL },
{ "VALTYPE", { HB_FS_PUBLIC }, { HB_FUNCNAME( VALTYPE ) }, NULL },
{ "AVALIA", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( AVALIA ) }, NULL },
{ "BROWSEARRAY", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( BROWSEARRAY ) }, NULL },
{ "HB_ISNIL", { HB_FS_PUBLIC }, { HB_FUNCNAME( HB_ISNIL ) }, NULL },
{ "HB_ISARRAY", { HB_FS_PUBLIC }, { HB_FUNCNAME( HB_ISARRAY ) }, NULL },
{ "LEN", { HB_FS_PUBLIC }, { HB_FUNCNAME( LEN ) }, NULL },
{ "DBCREATE", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBCREATE ) }, NULL },
{ "DBSELECTAREA", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBSELECTAREA ) }, NULL },
{ "AVALOR", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "MEMAREA", { HB_FS_PUBLIC }, { NULL }, NULL },
{ "DBAPPEND", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBAPPEND ) }, NULL },
{ "ALLTRIM", { HB_FS_PUBLIC }, { HB_FUNCNAME( ALLTRIM ) }, NULL },
{ "STR", { HB_FS_PUBLIC }, { HB_FUNCNAME( STR ) }, NULL },
{ "__ENUMINDEX", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "ID", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "VALOR", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "TYPE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "WIDTH", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "DEC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "DBGOTOP", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBGOTOP ) }, NULL },
{ "BROWSE", { HB_FS_PUBLIC }, { HB_FUNCNAME( BROWSE ) }, NULL },
{ "DBCLOSEAREA", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBCLOSEAREA ) }, NULL },
{ "DBDROP", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBDROP ) }, NULL },
{ "ALERT", { HB_FS_PUBLIC }, { HB_FUNCNAME( ALERT ) }, NULL },
{ "NTYPE", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "NDEC", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "CSTR", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "NLEN", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "DTOC", { HB_FS_PUBLIC }, { HB_FUNCNAME( DTOC ) }, NULL },
{ "RAT", { HB_FS_PUBLIC }, { HB_FUNCNAME( RAT ) }, NULL },
{ "NPOS", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "RIGHT", { HB_FS_PUBLIC }, { HB_FUNCNAME( RIGHT ) }, NULL },
{ "BROWSEARRAYSIMPLESV", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( BROWSEARRAYSIMPLESV ) }, NULL },
{ "BROWSEARRAYDBF", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( BROWSEARRAYDBF ) }, NULL },
{ "USED", { HB_FS_PUBLIC }, { HB_FUNCNAME( USED ) }, NULL },
{ "ALIAS", { HB_FS_PUBLIC }, { HB_FUNCNAME( ALIAS ) }, NULL },
{ "DBSTRUCT", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBSTRUCT ) }, NULL },
{ "ACAMPOS", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "NAME", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "BROWSEARRAYSIMPLESH", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( BROWSEARRAYSIMPLESH ) }, NULL },
{ "CCAMPO", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "MAIN", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( MAIN ) }, NULL },
{ "ADIR", { HB_FS_PUBLIC }, { HB_FUNCNAME( ADIR ) }, NULL },
{ "SET", { HB_FS_PUBLIC }, { HB_FUNCNAME( SET ) }, NULL },
{ "AFILL", { HB_FS_PUBLIC }, { HB_FUNCNAME( AFILL ) }, NULL },
{ "AEVAL", { HB_FS_PUBLIC }, { HB_FUNCNAME( AEVAL ) }, NULL },
{ "QOUT", { HB_FS_PUBLIC }, { HB_FUNCNAME( QOUT ) }, NULL },
{ "DIRECTORY", { HB_FS_PUBLIC }, { HB_FUNCNAME( DIRECTORY ) }, NULL },
{ "SUBSTR", { HB_FS_PUBLIC }, { HB_FUNCNAME( SUBSTR ) }, NULL },
{ "TRANSFORM", { HB_FS_PUBLIC }, { HB_FUNCNAME( TRANSFORM ) }, NULL },
{ "PADR", { HB_FS_PUBLIC }, { HB_FUNCNAME( PADR ) }, NULL },
{ "SCROLL", { HB_FS_PUBLIC }, { HB_FUNCNAME( SCROLL ) }, NULL },
{ "SETPOS", { HB_FS_PUBLIC }, { HB_FUNCNAME( SETPOS ) }, NULL },
{ "SETCOLOR", { HB_FS_PUBLIC }, { HB_FUNCNAME( SETCOLOR ) }, NULL },
{ "NROW1", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "DISPBOX", { HB_FS_PUBLIC }, { HB_FUNCNAME( DISPBOX ) }, NULL },
{ "SPACE", { HB_FS_PUBLIC }, { HB_FUNCNAME( SPACE ) }, NULL },
{ "ACHOICE", { HB_FS_PUBLIC }, { HB_FUNCNAME( ACHOICE ) }, NULL },
{ "QUITTBDEMO", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( QUITTBDEMO ) }, NULL },
{ "DBUSEAREA", { HB_FS_PUBLIC }, { HB_FUNCNAME( DBUSEAREA ) }, NULL },
{ "CALIAS", { HB_FS_PUBLIC | HB_FS_MEMVAR }, { NULL }, NULL },
{ "MAXROW", { HB_FS_PUBLIC }, { HB_FUNCNAME( MAXROW ) }, NULL },
{ "__QUIT", { HB_FS_PUBLIC }, { HB_FUNCNAME( __QUIT ) }, NULL },
{ "HB_MEMIO", { HB_FS_PUBLIC }, { HB_FUNCNAME( HB_MEMIO ) }, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TBDEMO, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TBDEMO
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TBDEMO )
   #include "hbiniseg.h"
#endif

HB_FUNC_STATIC( OSCIMENUSCI )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,5,0,4,0,0,80,1,36,9,0,106,25,68,101,115,
		97,116,105,118,97,114,32,71,101,116,32,84,101,108,97,32,67,104,101,
		105,97,0,80,2,36,10,0,106,16,68,101,115,76,105,103,97,114,32,
		83,111,109,98,114,97,0,80,3,36,12,0,176,1,0,95,1,106,10,
		69,94,110,99,101,114,114,97,114,0,106,26,69,94,110,99,101,114,114,
		97,114,32,69,120,101,99,117,99,97,111,32,100,111,32,83,67,73,0,
		106,1,0,106,19,84,94,114,111,99,97,114,32,100,101,32,69,109,112,
		114,101,115,97,0,106,19,84,114,111,99,97,114,32,100,101,32,85,94,
		115,117,97,114,105,111,0,106,1,0,106,20,67,94,111,112,105,97,32,
		100,101,32,83,101,103,117,114,97,110,99,97,0,106,30,82,94,101,115,
		116,97,117,114,97,114,32,67,111,112,105,97,32,100,101,32,83,101,103,
		117,114,97,110,99,97,0,4,7,0,4,2,0,20,2,36,13,0,176,
		1,0,95,1,106,9,77,94,111,100,117,108,111,115,0,106,21,67,111,
		110,116,114,111,108,101,32,100,101,32,69,94,115,116,111,113,117,101,0,
		106,18,67,111,110,116,97,115,32,97,32,82,94,101,99,101,98,101,114,
		0,106,16,67,111,110,116,97,115,32,97,32,80,94,97,103,97,114,0,
		106,18,67,111,110,116,97,115,32,67,94,111,114,114,101,110,116,101,115,
		0,106,22,67,111,110,116,114,111,108,101,32,100,101,32,80,94,114,111,
		100,117,99,97,111,0,106,19,67,111,110,116,114,111,108,101,32,100,101,
		32,80,94,111,110,116,111,0,106,13,77,97,108,97,32,68,94,105,114,
		101,116,97,0,106,12,86,94,101,110,100,101,100,111,114,101,115,0,4,
		8,0,4,2,0,20,2,36,14,0,176,1,0,95,1,106,8,86,94,
		101,110,100,97,115,0,106,13,84,101,114,109,105,110,97,108,32,80,68,
		86,0,106,28,84,101,114,109,105,110,97,108,32,67,111,110,115,117,108,
		116,97,32,100,101,32,80,114,101,99,111,115,0,106,19,82,101,108,97,
		116,111,114,105,111,32,86,101,110,100,97,115,32,42,0,106,20,82,101,
		108,97,116,111,114,105,111,32,82,101,99,101,98,101,114,32,42,0,106,
		21,82,101,108,97,116,111,114,105,111,32,82,101,99,101,98,105,100,111,
		32,42,0,106,21,67,97,100,97,115,116,114,97,32,83,101,110,104,97,
		32,67,97,105,120,97,0,106,1,0,106,24,82,101,115,117,109,111,32,
		67,97,105,120,97,32,73,110,100,105,118,105,100,117,97,108,0,106,25,
		68,101,116,97,108,104,101,32,67,97,105,120,97,32,73,110,100,105,118,
		105,100,117,97,108,0,106,29,68,101,116,97,108,104,101,32,68,105,97,
		114,105,111,32,67,97,105,120,97,32,71,101,114,97,108,32,42,0,106,
		36,68,101,116,97,108,104,101,32,69,109,105,115,115,97,111,32,82,101,
		99,105,98,111,115,32,101,109,32,67,97,114,116,101,105,114,97,0,106,
		30,68,101,116,97,108,104,101,32,69,109,105,115,115,97,111,32,82,101,
		99,105,98,111,115,32,66,97,110,99,111,0,106,31,68,101,116,97,108,
		104,101,32,69,109,105,115,115,97,111,32,82,101,99,105,98,111,115,32,
		79,117,116,114,111,115,0,106,1,0,106,23,82,111,108,32,68,101,98,
		105,116,111,32,67,47,67,32,67,108,105,101,110,116,101,0,106,28,82,
		101,97,106,117,115,116,101,32,68,101,98,105,116,111,32,67,47,67,32,
		67,108,105,101,110,116,101,0,106,20,67,111,110,115,117,108,116,97,32,
		68,101,98,105,116,111,32,67,47,67,0,106,18,66,97,105,120,97,114,
		32,68,101,98,105,116,111,32,67,47,67,0,106,1,0,106,30,67,111,
		109,97,110,100,111,115,32,100,101,32,73,109,112,114,101,115,115,111,114,
		97,32,70,105,115,99,97,108,0,4,20,0,4,2,0,20,2,36,15,
		0,176,1,0,95,1,106,8,66,94,97,99,107,117,112,0,106,19,67,
		111,112,105,97,32,100,101,32,83,101,103,117,114,97,110,99,97,0,106,
		29,82,101,115,116,97,117,114,97,114,32,67,111,112,105,97,32,100,101,
		32,83,101,103,117,114,97,110,99,97,0,106,39,71,101,114,97,114,32,
		65,114,113,117,105,118,111,32,66,97,116,99,104,32,100,101,32,67,111,
		112,105,97,32,83,101,103,117,114,97,110,99,97,0,106,1,0,106,17,
		82,101,105,110,100,101,120,97,114,32,78,111,114,109,97,108,0,106,34,
		82,101,105,110,100,101,120,97,114,32,86,101,114,105,102,105,99,97,110,
		100,111,32,68,117,112,108,105,99,105,100,97,100,101,0,106,23,82,101,
		105,110,100,101,120,97,114,32,80,97,114,99,105,97,108,109,101,110,116,
		101,0,106,30,69,108,105,109,105,110,97,114,32,65,114,113,117,105,118,
		111,115,32,84,101,109,112,111,114,97,114,105,111,115,0,4,8,0,4,
		2,0,20,2,36,16,0,176,1,0,95,1,106,8,69,94,100,105,116,
		111,114,0,106,15,69,100,105,116,97,114,32,65,114,113,117,105,118,111,
		0,106,17,73,109,112,114,105,109,105,114,32,65,114,113,117,105,118,111,
		0,106,23,84,101,115,116,101,32,82,101,105,110,100,101,120,97,114,32,
		84,104,114,101,97,100,0,106,18,71,101,114,97,114,32,65,114,113,117,
		105,118,111,32,80,68,70,0,4,4,0,4,2,0,20,2,36,17,0,
		176,1,0,95,1,106,10,65,94,109,98,105,101,110,116,101,0,106,21,
		83,112,111,111,108,101,114,32,100,101,32,73,109,112,114,101,115,115,97,
		111,0,106,14,76,97,121,111,117,116,32,74,97,110,101,108,97,0,106,
		1,0,106,18,67,111,114,32,80,97,110,111,32,100,101,32,70,117,110,
		100,111,0,106,12,67,111,114,32,100,101,32,77,101,110,117,0,106,14,
		67,111,114,32,67,97,98,101,99,97,108,104,111,0,106,11,67,111,114,
		32,65,108,101,114,116,97,0,106,10,67,111,114,32,66,111,114,100,97,
		0,106,20,67,111,114,32,73,116,101,109,32,68,101,115,97,116,105,118,
		97,100,111,0,106,17,67,111,114,32,66,111,120,32,77,101,110,115,97,
		103,101,109,0,106,14,67,111,114,32,76,105,103,104,116,32,66,97,114,
		0,106,11,67,111,114,32,72,111,116,75,101,121,0,106,20,67,111,114,
		32,76,105,103,104,116,66,97,114,32,72,111,116,75,101,121,0,106,1,
		0,106,14,80,97,110,111,32,100,101,32,70,117,110,100,111,0,106,6,
		70,114,97,109,101,0,95,3,95,2,106,14,65,108,116,101,114,97,114,
		32,83,101,110,104,97,0,4,19,0,4,2,0,20,2,36,19,0,176,
		1,0,95,1,106,10,65,114,81,94,117,105,118,111,115,0,106,22,77,
		97,110,117,116,101,110,99,97,111,32,68,105,114,101,116,111,114,105,111,
		115,0,106,26,65,114,113,117,105,118,111,115,32,100,97,32,66,97,115,
		101,32,100,101,32,68,97,100,111,115,0,106,1,0,106,17,82,101,105,
		110,100,101,120,97,114,32,78,111,114,109,97,108,0,106,34,82,101,105,
		110,100,101,120,97,114,32,86,101,114,105,102,105,99,97,110,100,111,32,
		68,117,112,108,105,99,105,100,97,100,101,0,106,1,0,106,30,69,108,
		105,109,105,110,97,114,32,65,114,113,117,105,118,111,115,32,84,101,109,
		112,111,114,97,114,105,111,115,0,106,26,67,97,100,97,115,116,114,97,
		32,101,32,65,108,116,101,114,97,32,85,115,117,97,114,105,111,0,106,
		27,67,111,110,102,105,103,117,114,97,99,97,111,32,100,101,32,66,97,
		115,101,32,68,97,100,111,115,0,106,15,82,101,116,111,114,110,111,32,
		65,99,101,115,115,111,0,106,24,83,101,112,97,114,97,114,32,77,111,
		118,105,109,101,110,116,111,32,65,110,117,97,108,0,106,17,67,97,105,
		120,97,32,65,117,116,111,109,97,116,105,99,111,0,106,25,90,101,114,
		97,114,32,77,111,118,105,109,101,110,116,111,32,100,101,32,67,111,110,
		116,97,0,106,21,67,97,100,97,115,116,114,97,114,32,73,109,112,114,
		101,115,115,111,114,97,0,106,19,65,108,116,101,114,97,114,32,73,109,
		112,114,101,115,115,111,114,97,0,106,25,82,101,110,111,118,97,114,32,
		67,111,100,105,103,111,32,100,101,32,65,99,101,115,115,111,0,4,16,
		0,4,2,0,20,2,36,20,0,176,1,0,95,1,106,14,82,94,101,
		99,111,110,115,116,114,117,105,114,32,0,106,14,66,97,115,101,32,100,
		101,32,68,97,100,111,115,0,106,13,65,114,113,117,105,118,111,32,78,
		111,116,97,0,106,16,65,114,113,117,105,118,111,32,80,114,105,110,116,
		101,114,0,106,16,65,114,113,117,105,118,111,32,69,110,116,78,111,116,
		97,0,106,17,65,114,113,117,105,118,111,32,80,114,101,118,101,110,100,
		97,0,4,5,0,4,2,0,20,2,36,21,0,176,1,0,95,1,106,
		7,83,94,104,101,108,108,0,106,20,83,104,101,108,108,32,32,32,32,
		32,32,32,32,32,65,76,84,32,68,0,106,20,67,111,109,97,110,100,
		111,115,32,68,79,83,32,32,65,76,84,32,88,0,4,2,0,4,2,
		0,20,2,36,22,0,176,1,0,95,1,106,6,72,94,101,108,112,0,
		106,16,83,111,98,114,101,32,111,32,83,105,115,116,101,109,97,0,106,
		19,85,108,116,105,109,97,115,32,65,108,116,101,114,97,99,111,101,115,
		0,106,5,72,101,108,112,0,4,3,0,4,2,0,20,2,36,23,0,
		95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( AMAXSTRLENBI )
{
	static const HB_BYTE pcode[] =
	{
		13,5,1,36,29,0,121,80,5,36,30,0,121,80,6,36,32,0,95,
		1,96,2,0,129,1,1,29,185,0,36,33,0,176,3,0,95,2,12,
		1,106,2,65,0,8,29,128,0,36,34,0,95,2,96,3,0,129,1,
		1,28,111,36,35,0,176,3,0,95,3,12,1,106,2,65,0,8,28,
		56,36,36,0,95,3,96,4,0,129,1,1,28,40,36,37,0,176,4,
		0,95,4,12,1,92,3,1,80,5,36,38,0,95,6,95,5,35,28,
		9,36,39,0,95,5,80,6,36,41,0,130,31,220,132,25,34,36,43,
		0,176,4,0,95,3,12,1,92,3,1,80,5,36,44,0,95,6,95,
		5,35,28,9,36,45,0,95,5,80,6,36,48,0,130,31,149,132,25,
		34,36,50,0,176,4,0,95,2,12,1,92,3,1,80,5,36,51,0,
		95,6,95,5,35,28,9,36,52,0,95,5,80,6,36,55,0,130,32,
		77,255,132,36,56,0,95,6,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BROWSEARRAY )
{
	static const HB_BYTE pcode[] =
	{
		13,5,1,36,60,0,92,40,80,2,36,69,0,106,3,73,68,0,106,
		2,67,0,92,10,121,4,4,0,106,6,86,65,76,79,82,0,106,2,
		67,0,95,2,121,4,4,0,106,5,84,89,80,69,0,106,2,67,0,
		122,121,4,4,0,106,6,87,73,68,84,72,0,106,2,78,0,92,3,
		121,4,4,0,106,4,68,69,67,0,106,2,78,0,122,121,4,4,0,
		4,5,0,80,6,36,71,0,176,6,0,95,1,12,1,32,135,2,176,
		7,0,95,1,12,1,29,125,2,176,8,0,95,1,12,1,121,69,29,
		113,2,36,72,0,176,2,0,95,1,12,1,95,6,92,2,1,92,3,
		2,36,73,0,176,9,0,106,9,109,101,109,58,116,101,115,116,0,95,
		6,100,120,106,8,109,101,109,97,114,101,97,0,20,5,36,74,0,176,
		10,0,106,8,109,101,109,97,114,101,97,0,20,1,36,75,0,95,1,
		96,3,0,129,1,1,29,230,1,36,76,0,176,3,0,95,3,12,1,
		106,2,65,0,8,29,103,1,36,77,0,95,3,96,4,0,129,1,1,
		29,73,1,36,78,0,176,3,0,95,4,12,1,106,2,65,0,8,29,
		178,0,36,79,0,95,4,96,5,0,129,1,1,29,160,0,36,80,0,
		176,4,0,95,5,12,1,83,11,0,36,81,0,85,108,12,74,176,13,
		0,20,0,74,36,82,0,176,14,0,176,15,0,48,16,0,96,3,0,
		112,0,12,1,12,1,106,2,46,0,72,176,14,0,176,15,0,48,16,
		0,96,3,0,112,0,12,1,12,1,72,106,2,46,0,72,176,14,0,
		176,15,0,48,16,0,96,5,0,112,0,12,1,12,1,72,108,12,76,
		17,36,83,0,98,11,0,122,1,108,12,76,18,36,84,0,98,11,0,
		92,2,1,108,12,76,19,36,85,0,98,11,0,92,3,1,108,12,76,
		20,36,86,0,98,11,0,92,4,1,108,12,76,21,36,87,0,130,32,
		102,255,132,26,129,0,36,89,0,176,4,0,95,4,12,1,83,11,0,
		36,90,0,85,108,12,74,176,13,0,20,0,74,36,91,0,176,14,0,
		176,15,0,48,16,0,96,3,0,112,0,12,1,12,1,106,2,46,0,
		72,176,14,0,176,15,0,48,16,0,96,4,0,112,0,12,1,12,1,
		72,108,12,76,17,36,92,0,98,11,0,122,1,108,12,76,18,36,93,
		0,98,11,0,92,2,1,108,12,76,19,36,94,0,98,11,0,92,3,
		1,108,12,76,20,36,95,0,98,11,0,92,4,1,108,12,76,21,36,
		97,0,130,32,189,254,132,36,98,0,85,108,12,74,176,13,0,20,0,
		74,25,104,36,100,0,176,4,0,95,3,12,1,83,11,0,36,101,0,
		85,108,12,74,176,13,0,20,0,74,36,102,0,176,14,0,176,15,0,
		48,16,0,96,3,0,112,0,12,1,12,1,108,12,76,17,36,103,0,
		98,11,0,122,1,108,12,76,18,36,104,0,98,11,0,92,2,1,108,
		12,76,19,36,105,0,98,11,0,92,3,1,108,12,76,20,36,106,0,
		98,11,0,92,4,1,108,12,76,21,36,108,0,130,32,32,254,132,36,
		109,0,85,108,12,74,176,22,0,20,0,74,36,110,0,176,23,0,20,
		0,36,111,0,85,108,12,74,176,24,0,20,0,74,36,114,0,176,25,
		0,106,9,109,101,109,58,116,101,115,116,0,20,1,25,36,36,116,0,
		176,26,0,106,24,65,114,114,97,121,32,105,110,118,97,108,105,100,111,
		32,111,117,32,118,97,122,105,111,0,20,1,36,118,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( AVALIA )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,121,0,176,3,0,95,1,12,1,83,27,0,36,122,0,
		121,83,28,0,36,123,0,95,1,83,29,0,36,124,0,121,83,30,0,
		36,125,0,26,182,0,36,127,0,176,8,0,109,29,0,12,1,83,30,
		0,26,215,0,36,131,0,92,8,83,30,0,36,132,0,176,31,0,95,
		1,12,1,83,29,0,26,191,0,36,135,0,122,83,30,0,36,136,0,
		95,1,120,8,28,10,106,4,46,84,46,0,25,8,106,4,46,70,46,
		0,83,29,0,26,155,0,36,139,0,176,14,0,176,15,0,95,1,12,
		1,12,1,83,29,0,36,140,0,176,8,0,109,29,0,12,1,83,30,
		0,36,141,0,176,32,0,106,2,46,0,109,29,0,12,2,83,33,0,
		36,142,0,176,8,0,176,34,0,109,29,0,109,30,0,109,33,0,49,
		12,2,12,1,83,28,0,25,76,36,145,0,92,3,83,30,0,36,146,
		0,106,4,110,105,108,0,83,29,0,25,54,25,52,109,27,0,133,7,
		0,106,2,67,0,26,67,255,106,2,84,0,26,77,255,106,2,68,0,
		26,70,255,106,2,76,0,26,87,255,106,2,78,0,26,116,255,106,2,
		85,0,25,187,100,25,206,36,150,0,109,29,0,109,27,0,109,30,0,
		109,28,0,4,4,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BROWSEARRAYSIMPLESV )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,160,0,106,3,73,68,0,106,2,43,0,121,121,4,4,
		0,106,6,86,65,76,79,82,0,106,2,67,0,92,40,121,4,4,0,
		106,5,84,89,80,69,0,106,2,67,0,122,121,4,4,0,106,6,87,
		73,68,84,72,0,106,2,78,0,92,3,121,4,4,0,106,4,68,69,
		67,0,106,2,78,0,122,121,4,4,0,4,5,0,80,3,36,163,0,
		176,9,0,106,9,109,101,109,58,116,101,115,116,0,95,3,100,120,106,
		8,109,101,109,97,114,101,97,0,20,5,36,164,0,176,10,0,106,8,
		109,101,109,97,114,101,97,0,20,1,36,166,0,95,1,96,2,0,129,
		1,1,29,40,2,36,167,0,176,3,0,95,2,12,1,83,27,0,36,
		168,0,121,83,28,0,36,169,0,95,2,83,29,0,36,170,0,26,152,
		1,36,172,0,176,8,0,95,2,12,1,83,30,0,36,173,0,176,1,
		0,95,3,106,2,86,0,176,14,0,176,15,0,48,16,0,96,2,0,
		112,0,12,1,12,1,72,109,27,0,109,30,0,109,28,0,4,4,0,
		20,2,26,141,1,36,177,0,92,8,83,30,0,36,178,0,176,31,0,
		95,2,12,1,83,29,0,36,179,0,176,1,0,95,3,106,2,86,0,
		176,14,0,176,15,0,48,16,0,96,2,0,112,0,12,1,12,1,72,
		109,27,0,109,30,0,109,28,0,4,4,0,20,2,26,72,1,36,182,
		0,122,83,30,0,36,183,0,95,2,120,8,28,10,106,4,46,84,46,
		0,25,8,106,4,46,70,46,0,83,29,0,36,184,0,176,1,0,95,
		3,106,2,86,0,176,14,0,176,15,0,48,16,0,96,2,0,112,0,
		12,1,12,1,72,109,27,0,109,30,0,109,28,0,4,4,0,20,2,
		26,247,0,36,187,0,176,14,0,176,15,0,95,2,12,1,12,1,83,
		29,0,36,188,0,176,8,0,109,29,0,12,1,83,30,0,36,189,0,
		176,32,0,106,2,46,0,109,29,0,12,2,83,33,0,36,190,0,176,
		8,0,176,34,0,109,29,0,109,30,0,109,33,0,49,12,2,12,1,
		83,28,0,36,191,0,176,1,0,95,3,106,2,86,0,176,14,0,176,
		15,0,48,16,0,96,2,0,112,0,12,1,12,1,72,109,27,0,109,
		30,0,109,28,0,4,4,0,20,2,26,123,0,36,194,0,92,3,83,
		30,0,36,195,0,106,4,110,105,108,0,83,29,0,36,196,0,176,1,
		0,95,3,106,2,86,0,176,14,0,176,15,0,48,16,0,96,2,0,
		112,0,12,1,12,1,72,106,2,67,0,109,30,0,109,28,0,4,4,
		0,20,2,25,54,25,52,109,27,0,133,7,0,106,2,67,0,26,97,
		254,106,2,84,0,26,151,254,106,2,68,0,26,144,254,106,2,76,0,
		26,206,254,106,2,78,0,26,24,255,106,2,85,0,25,141,100,25,206,
		36,200,0,85,108,12,74,176,13,0,20,0,74,36,201,0,109,29,0,
		108,12,76,18,36,202,0,109,27,0,108,12,76,19,36,203,0,109,30,
		0,108,12,76,20,36,204,0,109,28,0,108,12,76,21,36,205,0,130,
		32,222,253,132,36,206,0,85,108,12,74,176,22,0,20,0,74,36,207,
		0,176,23,0,20,0,36,208,0,85,108,12,74,176,24,0,20,0,74,
		36,211,0,176,25,0,106,9,109,101,109,58,116,101,115,116,0,20,1,
		36,212,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BROWSEARRAYDBF )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,222,0,106,3,73,68,0,106,2,43,0,92,9,121,4,
		4,0,106,5,78,65,77,69,0,106,2,67,0,92,20,121,4,4,0,
		106,5,84,89,80,69,0,106,2,67,0,122,121,4,4,0,106,6,87,
		73,68,84,72,0,106,2,78,0,92,3,121,4,4,0,106,4,68,69,
		67,0,106,2,78,0,122,121,4,4,0,4,5,0,80,3,36,224,0,
		176,37,0,12,0,29,216,0,36,225,0,176,38,0,12,0,80,2,36,
		226,0,85,95,2,74,176,39,0,12,0,119,83,40,0,36,227,0,176,
		9,0,106,9,109,101,109,58,116,101,115,116,0,95,3,100,120,106,8,
		109,101,109,97,114,101,97,0,20,5,36,229,0,109,40,0,96,1,0,
		129,1,1,28,68,36,230,0,85,108,12,74,176,13,0,20,0,74,36,
		231,0,95,1,122,1,108,12,76,41,36,232,0,95,1,92,2,1,108,
		12,76,19,36,233,0,95,1,92,3,1,108,12,76,20,36,234,0,95,
		1,92,4,1,108,12,76,21,36,235,0,130,31,192,132,36,245,0,176,
		10,0,106,8,109,101,109,97,114,101,97,0,20,1,36,246,0,85,108,
		12,74,176,22,0,20,0,74,36,247,0,176,23,0,20,0,36,248,0,
		85,108,12,74,176,24,0,20,0,74,36,251,0,176,25,0,106,9,109,
		101,109,58,116,101,115,116,0,20,1,25,37,36,253,0,176,26,0,106,
		25,78,101,110,104,117,109,97,32,97,114,101,97,32,115,101,108,101,99,
		105,111,110,97,100,97,0,20,1,36,255,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BROWSEARRAYSIMPLESH )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,5,1,4,0,0,80,3,36,8,1,95,1,96,2,0,
		129,1,1,29,161,1,36,9,1,176,3,0,95,2,12,1,83,27,0,
		36,10,1,26,92,1,36,12,1,176,8,0,95,2,12,1,83,30,0,
		36,13,1,176,1,0,95,3,106,2,86,0,176,14,0,176,15,0,48,
		16,0,96,2,0,112,0,12,1,12,1,72,109,27,0,109,30,0,121,
		4,4,0,20,2,26,76,1,36,16,1,92,8,83,30,0,36,17,1,
		176,1,0,95,3,106,2,86,0,176,14,0,176,15,0,48,16,0,96,
		2,0,112,0,12,1,12,1,72,109,27,0,109,30,0,121,4,4,0,
		20,2,26,22,1,36,20,1,122,83,30,0,36,21,1,176,1,0,95,
		3,106,2,86,0,176,14,0,176,15,0,48,16,0,96,2,0,112,0,
		12,1,12,1,72,109,27,0,109,30,0,121,4,4,0,20,2,26,225,
		0,36,24,1,176,14,0,176,15,0,95,2,12,1,12,1,83,29,0,
		36,25,1,176,8,0,109,29,0,12,1,83,30,0,36,26,1,176,32,
		0,106,2,46,0,109,29,0,12,2,83,33,0,36,27,1,176,8,0,
		176,34,0,109,29,0,109,30,0,109,33,0,49,12,2,12,1,83,28,
		0,36,28,1,176,1,0,95,3,106,2,86,0,176,14,0,176,15,0,
		48,16,0,96,2,0,112,0,12,1,12,1,72,109,27,0,109,30,0,
		109,28,0,4,4,0,20,2,25,101,36,31,1,92,3,83,30,0,36,
		32,1,176,1,0,95,3,106,2,86,0,176,14,0,176,15,0,48,16,
		0,96,2,0,112,0,12,1,12,1,72,106,2,67,0,109,30,0,121,
		4,4,0,20,2,25,47,25,45,109,27,0,133,6,0,106,2,67,0,
		26,157,254,106,2,68,0,26,209,254,106,2,76,0,26,0,255,106,2,
		78,0,26,46,255,106,2,85,0,25,162,100,25,213,36,37,1,130,32,
		101,254,132,36,39,1,176,9,0,106,9,109,101,109,58,116,101,115,116,
		0,95,3,100,120,106,8,109,101,109,97,114,101,97,0,20,5,36,40,
		1,176,10,0,106,8,109,101,109,97,114,101,97,0,20,1,36,42,1,
		85,108,12,74,176,13,0,20,0,74,36,43,1,95,1,96,2,0,129,
		1,1,29,149,0,36,44,1,176,3,0,95,2,12,1,83,27,0,36,
		45,1,25,108,36,47,1,176,14,0,176,15,0,48,16,0,96,2,0,
		112,0,12,1,12,1,83,43,0,36,48,1,106,4,110,105,108,0,106,
		8,77,69,77,65,82,69,65,0,106,2,86,0,109,43,0,72,39,11,
		25,68,36,51,1,176,14,0,176,15,0,48,16,0,96,2,0,112,0,
		12,1,12,1,83,43,0,36,52,1,95,2,106,8,77,69,77,65,82,
		69,65,0,106,2,86,0,109,43,0,72,39,11,25,17,109,27,0,133,
		2,0,106,2,85,0,25,140,100,25,192,36,55,1,130,32,113,255,132,
		36,58,1,85,108,12,74,176,22,0,20,0,74,36,59,1,176,23,0,
		20,0,36,60,1,85,108,12,74,176,24,0,20,0,74,36,63,1,176,
		25,0,106,9,109,101,109,58,116,101,115,116,0,20,1,36,75,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( MAIN )
{
	static const HB_BYTE pcode[] =
	{
		13,5,1,36,22,0,106,6,42,46,100,98,102,0,80,2,36,23,0,
		4,0,0,80,3,36,24,0,176,45,0,95,2,12,1,3,1,0,80,
		4,36,25,0,176,45,0,95,2,12,1,3,1,0,80,5,36,28,0,
		176,46,0,92,11,106,3,79,78,0,20,2,36,29,0,95,1,100,5,
		29,217,1,36,30,0,176,47,0,95,5,120,20,2,36,31,0,176,45,
		0,95,2,95,4,20,2,36,32,0,176,48,0,95,4,89,15,0,1,
		0,0,0,176,49,0,95,1,12,1,6,20,2,36,39,0,176,48,0,
		176,50,0,95,2,12,1,89,133,0,1,0,1,0,3,0,176,1,0,
		95,255,176,31,0,95,1,92,3,1,12,1,106,3,32,32,0,72,176,
		51,0,95,1,92,4,1,122,92,5,12,3,72,106,3,32,32,0,72,
		176,51,0,95,1,92,5,1,122,122,12,3,106,2,68,0,8,28,15,
		106,9,32,32,32,60,68,73,82,62,0,25,31,176,52,0,95,1,92,
		2,1,106,17,57,57,44,57,57,57,44,57,57,57,32,66,121,116,101,
		115,0,12,2,72,106,3,32,32,0,72,176,53,0,95,1,122,1,92,
		15,12,2,72,12,2,6,20,2,36,41,0,176,54,0,20,0,176,55,
		0,121,121,20,2,36,42,0,176,49,0,106,51,77,97,99,114,111,115,
		111,102,116,32,84,68,66,100,101,109,111,44,32,67,111,112,121,114,105,
		103,104,116,32,40,99,41,44,32,86,105,108,109,97,114,32,67,97,116,
		97,102,101,115,116,97,0,20,1,36,43,0,176,49,0,106,31,91,69,
		83,67,93,32,115,97,105,114,44,32,91,69,78,84,69,82,93,32,115,
		101,108,101,99,105,111,110,97,114,0,20,1,36,44,0,176,56,0,106,
		5,87,43,47,66,0,20,1,36,45,0,92,5,176,8,0,95,3,12,
		1,72,83,57,0,36,46,0,109,57,0,92,24,15,28,10,36,47,0,
		92,24,83,57,0,36,49,0,176,58,0,92,5,92,10,109,57,0,122,
		72,92,70,106,9,214,196,183,186,189,196,211,186,0,176,59,0,122,12,
		1,72,20,5,36,50,0,176,60,0,92,6,92,11,109,57,0,92,69,
		95,3,12,5,80,6,36,51,0,95,6,121,5,28,10,36,52,0,176,
		61,0,20,0,36,54,0,176,62,0,120,100,176,14,0,176,34,0,95,
		3,95,6,1,92,15,12,2,12,1,100,100,9,20,6,25,17,36,56,
		0,176,62,0,120,100,95,1,100,100,9,20,6,36,58,0,176,38,0,
		12,0,83,63,0,36,59,0,176,56,0,106,5,87,43,47,66,0,20,
		1,36,60,0,176,54,0,20,0,176,55,0,121,121,20,2,36,61,0,
		176,23,0,20,0,36,62,0,176,36,0,20,0,36,63,0,176,5,0,
		85,109,63,0,74,176,39,0,12,0,119,20,1,36,64,0,176,61,0,
		20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( QUITTBDEMO )
{
	static const HB_BYTE pcode[] =
	{
		36,68,0,176,56,0,106,1,0,20,1,36,69,0,176,55,0,176,64,
		0,12,0,121,20,2,36,70,0,176,49,0,106,29,77,97,99,114,111,
		115,111,102,116,32,84,68,66,100,101,109,111,32,116,101,114,109,105,110,
		97,116,101,33,0,20,1,36,71,0,176,65,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}
