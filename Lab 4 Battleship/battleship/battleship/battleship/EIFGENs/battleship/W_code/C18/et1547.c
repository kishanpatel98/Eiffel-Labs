/*
 * Code for class ETF_EVT_SCANNER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1547_15920(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1547_15921(EIF_REFERENCE);
extern void F1547_15922(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1547_15923(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1547_15924(EIF_REFERENCE);
extern void F1547_15925(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1547_15926(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1547_15927(EIF_REFERENCE);
extern void F1547_15928(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1547_15929(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1547_15930(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15931(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15932(EIF_REFERENCE);
extern void F1547_15933(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1547_15934(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1547_15935(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15936(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15937(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15938(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15939(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15940(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15941(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15942(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15943(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15944(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15945(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15946(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15947(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1547_15948(EIF_REFERENCE);
extern void F1547_15949(EIF_REFERENCE);
extern void F1547_15950(EIF_REFERENCE);
extern void EIF_Minit1547(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_EVT_SCANNER}.valid_start_condition */
EIF_TYPED_VALUE F1547_15920 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_start_condition";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 1, 22018);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1546, Current, 22018);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11699, Dtype(Current)))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == ti4_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_build_tables */
void F1547_15921 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_build_tables";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 0, 22019);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22019);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 11249, 0xF8000146, 0); /* yy_nxt */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11686, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11249, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11250, 0xF8000146, 0); /* yy_chk */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11689, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11250, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11251, 0xF8000146, 0); /* yy_base */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11692, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11251, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11252, 0xF8000146, 0); /* yy_def */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11693, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11252, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11253, 0xF8000146, 0); /* yy_ec */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11694, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11253, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11254, 0xF8000146, 0); /* yy_meta */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11697, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11254, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 11255, 0xF8000146, 0); /* yy_accept */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11698, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11255, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("yy_nxt_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11249, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("yy_chk_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11250, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("yy_base_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11251, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("yy_def_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11252, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("yy_accept_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11255, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {ETF_EVT_SCANNER}.yy_execute_action */
void F1547_15922 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_execute_action";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 1, 22020);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22020);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11223, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11224, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(11229, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3) - ti4_4);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(3);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(3,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(3,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 67",72,1387144247);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			break;
		case 2L:
			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11217, dtype))(Current);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(5);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(5,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(5,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 69",72,1387144249);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			break;
		case 3L:
			RTHOOK(6);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 6L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(7,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(7,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 71",72,1387144497);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(8);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11655, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 4L:
			RTHOOK(9);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 4L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(10);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(10,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(10,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 72",72,1387144498);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(11);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11656, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 5L:
			RTHOOK(12);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 7L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(13);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(13,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(13,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 73",72,1387144499);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(14);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11657, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 6L:
			RTHOOK(15);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 4L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(16);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(16,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(16,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 74",72,1387144500);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(17);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11658, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 7L:
			RTHOOK(18);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 9L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(19);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(19,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(19,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 75",72,1387144501);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(20);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11659, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 8L:
			RTHOOK(21);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 3L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(22);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(22,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(22,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 76",72,1387144502);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(23);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11660, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 9L:
			RTHOOK(24);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 7L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(25);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(25,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(25,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 77",72,1387144503);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(26);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11661, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 10L:
			RTHOOK(27);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 4L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(28);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(28,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(28,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 78",72,1387144504);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(29);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11662, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 11L:
			RTHOOK(30);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 6L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(31);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(31,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(31,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 79",72,1387144505);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(32);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11663, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 12L:
			RTHOOK(33);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 5L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(34);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(34,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(34,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 80",72,1387144752);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(35);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11664, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 13L:
			RTHOOK(36);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 5L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(37);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(37,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(37,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 81",72,1387144753);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(38);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11665, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 14L:
			RTHOOK(39);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 5L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(40);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(40,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(40,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 82",72,1387144754);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(41);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11666, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 15L:
			RTHOOK(42);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(43);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(43,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(43,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 84",72,1387144756);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(44);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11669, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 16L:
			RTHOOK(45);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(46);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(46,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(46,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 85",72,1387144757);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(47);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11670, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 17L:
			RTHOOK(48);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(49);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(49,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(49,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 86",72,1387144758);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(50);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11671, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 18L:
			RTHOOK(51);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(52);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(52,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(52,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 87",72,1387144759);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(53);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11672, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 19L:
			RTHOOK(54);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(55);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(55,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(55,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 88",72,1387144760);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(56);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11673, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 20L:
			RTHOOK(57);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(58);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(58,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(58,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 89",72,1387144761);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(59);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11674, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 21L:
			RTHOOK(60);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(61);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(61,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(61,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 90",72,1387145008);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(62);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11675, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 22L:
			RTHOOK(63);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(64);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(64,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(64,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 91",72,1387145009);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(65);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11676, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 23L:
			RTHOOK(66);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(67);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(67,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(67,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 92",72,1387145010);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(68);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11677, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 24L:
			RTHOOK(69);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(70);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(70,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(70,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 93",72,1387145011);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(71);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11678, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 25L:
			RTHOOK(72);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(73);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(73,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(73,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 94",72,1387145012);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(74);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11679, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 26L:
			RTHOOK(75);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(76);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(76,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(76,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 95",72,1387145013);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(77);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11680, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 27L:
			RTHOOK(78);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(79);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(79,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(79,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 96",72,1387145014);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(80);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11681, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 28L:
			RTHOOK(81);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 2L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(82);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(82,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(82,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 97",72,1387145015);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(83);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11682, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 29L:
			RTHOOK(84);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 4L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(85);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(85,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(85,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 98",72,1387145016);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(86);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11683, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 30L:
			RTHOOK(87);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(88);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(88,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(88,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 99",72,1387145017);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(89);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11684, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 31L:
			RTHOOK(90);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 4L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(91);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(91,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(91,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 101",73,774429489);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(92);
			RTDBGAA(Current, dtype, 11649, 0xF80000E7, 0); /* last_string_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11159, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11649, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(93);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11667, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 32L:
			RTHOOK(94);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 5L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(95);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(95,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(95,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 106",73,774429494);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(96);
			RTDBGAA(Current, dtype, 11649, 0xF80000E7, 0); /* last_string_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11159, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11649, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(97);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11668, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 33L:
			RTHOOK(98);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11223, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11224, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(11229, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3) - ti4_4);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(99);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(99,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(99,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 111",73,774429745);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(100);
			RTDBGAA(Current, dtype, 11649, 0xF80000E7, 0); /* last_string_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11159, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11649, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(101);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11650, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 34L:
			RTHOOK(102);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11223, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11224, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(11229, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3) - ti4_4);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(103);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(103,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(103,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 117",73,774429751);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(104);
			RTDBGAA(Current, dtype, 11649, 0xF80000E7, 0); /* last_string_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11159, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11649, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(105);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11651, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 35L:
			RTHOOK(106);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11223, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11224, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(11229, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3) - ti4_4);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(107);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(107,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(107,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 123",73,774430003);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(108);
			RTDBGAA(Current, dtype, 11649, 0xF80000E7, 0); /* last_string_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11159, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11649, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(109);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11652, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 36L:
			RTHOOK(110);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype))) += ((EIF_INTEGER_32) 3L);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(111);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(111,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(111,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 128",73,774430008);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(112);
			RTDBGAA(Current, dtype, 11185, 0x08000000, 1); /* last_character */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11159, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(112,1);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_c1);
			*(EIF_CHARACTER_8 *)(Current + RTWA(11185, dtype)) = (EIF_CHARACTER_8) tc1;
			RTHOOK(113);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11653, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 37L:
			RTHOOK(114);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11217, dtype))(Current);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(115);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(115,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(115,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 133",73,774430259);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(116);
			RTDBGAA(Current, dtype, 11649, 0xF80000E7, 0); /* last_string_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11159, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(116,1);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11159, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(116,2);
			ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4707, "count", tr2));
			ui4_2 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4661, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = RTCCL(tr2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11649, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(117);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11654, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 38L:
			RTHOOK(118);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11223, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11224, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(11229, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3) - ti4_4);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(119);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(119,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(119,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 138",73,774430264);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			break;
		case 39L:
			RTHOOK(120);
			RTDBGAA(Current, dtype, 11226, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11226, dtype)))++;
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(121);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(121,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(121,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 140",73,774430512);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(122);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11160, dtype))(Current, ui4_1x)).it_c1);
			RTNHOOK(122,1);
			ti4_1 = (EIF_INTEGER_32) (tc1);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 40L:
			RTHOOK(123);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11217, dtype))(Current);
			if (
				WDBG(1546,"gelex")
			) {
				RTHOOK(124);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(124,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6116, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(124,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 0",71,424848176);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(125);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11202, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(126);
			tr1 = RTMS_EX_H("scanner jammed",14,1957244260);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11199, dtype))(Current, ur1x);
			break;
		default:
			RTHOOK(127);
			RTDBGAA(Current, dtype, 11158, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11202, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11158, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(128);
			tr1 = RTMS_EX_H("fatal scanner internal error: no action found",45,1022935396);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11199, dtype))(Current, ur1x);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(129);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_execute_eof_action */
void F1547_15923 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_execute_eof_action";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 1, 22021);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1546, Current, 22021);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11179, Dtype(Current)))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_nxt_template */
RTOID (F1547_15924)
EIF_TYPED_VALUE F1547_15924 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_nxt_template";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1547_15924);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1546, Current, 1, 0, 22022);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22022);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000143, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 211L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2838, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11687, dtype))(Current, ur1x);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11688, dtype))(Current, ur1x);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF8000146, 0,0); /* Result */
	ur1 = RTCCL(loc1);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11209, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef Result
}

/* {ETF_EVT_SCANNER}.yy_nxt_template_1 */
void F1547_15925 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_nxt_template_1";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 1, 22023);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22023);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1546, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 201L);
	{
		static EIF_TYPE_INDEX typarr0[] = {326,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 201L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 17L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 18L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 21L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 23L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 27L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 29L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 33L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 34L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 36L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 37L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+58) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	*((EIF_INTEGER_32 *)tr2+59) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 45L);
	*((EIF_INTEGER_32 *)tr2+60) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+61) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51L);
	*((EIF_INTEGER_32 *)tr2+62) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+63) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+64) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+65) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 56L);
	*((EIF_INTEGER_32 *)tr2+66) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+67) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	*((EIF_INTEGER_32 *)tr2+68) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 60L);
	*((EIF_INTEGER_32 *)tr2+69) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 45L);
	*((EIF_INTEGER_32 *)tr2+70) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+71) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 66L);
	*((EIF_INTEGER_32 *)tr2+72) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	*((EIF_INTEGER_32 *)tr2+73) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 70L);
	*((EIF_INTEGER_32 *)tr2+74) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 78L);
	*((EIF_INTEGER_32 *)tr2+75) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 82L);
	*((EIF_INTEGER_32 *)tr2+76) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 90L);
	*((EIF_INTEGER_32 *)tr2+77) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+78) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+79) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 47L);
	*((EIF_INTEGER_32 *)tr2+80) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 47L);
	*((EIF_INTEGER_32 *)tr2+81) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 47L);
	*((EIF_INTEGER_32 *)tr2+82) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
	*((EIF_INTEGER_32 *)tr2+83) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 105L);
	*((EIF_INTEGER_32 *)tr2+84) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51L);
	*((EIF_INTEGER_32 *)tr2+85) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
	*((EIF_INTEGER_32 *)tr2+86) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 103L);
	*((EIF_INTEGER_32 *)tr2+87) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 66L);
	*((EIF_INTEGER_32 *)tr2+88) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 70L);
	*((EIF_INTEGER_32 *)tr2+89) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 78L);
	*((EIF_INTEGER_32 *)tr2+90) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 102L);
	*((EIF_INTEGER_32 *)tr2+91) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 101L);
	*((EIF_INTEGER_32 *)tr2+92) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+93) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	*((EIF_INTEGER_32 *)tr2+94) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 99L);
	*((EIF_INTEGER_32 *)tr2+95) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 82L);
	*((EIF_INTEGER_32 *)tr2+96) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 90L);
	*((EIF_INTEGER_32 *)tr2+97) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 98L);
	*((EIF_INTEGER_32 *)tr2+98) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 97L);
	*((EIF_INTEGER_32 *)tr2+99) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 96L);
	*((EIF_INTEGER_32 *)tr2+100) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 95L);
	*((EIF_INTEGER_32 *)tr2+101) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+102) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+103) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 94L);
	*((EIF_INTEGER_32 *)tr2+104) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 93L);
	*((EIF_INTEGER_32 *)tr2+105) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 92L);
	*((EIF_INTEGER_32 *)tr2+106) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+107) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+108) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+109) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+110) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+111) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+112) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+113) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 91L);
	*((EIF_INTEGER_32 *)tr2+114) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+115) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+116) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+117) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+118) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 89L);
	*((EIF_INTEGER_32 *)tr2+119) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+120) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+121) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+122) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 88L);
	*((EIF_INTEGER_32 *)tr2+123) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 87L);
	*((EIF_INTEGER_32 *)tr2+124) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 86L);
	*((EIF_INTEGER_32 *)tr2+125) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 85L);
	*((EIF_INTEGER_32 *)tr2+126) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 84L);
	*((EIF_INTEGER_32 *)tr2+127) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 83L);
	*((EIF_INTEGER_32 *)tr2+128) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 81L);
	*((EIF_INTEGER_32 *)tr2+129) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	*((EIF_INTEGER_32 *)tr2+130) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 79L);
	*((EIF_INTEGER_32 *)tr2+131) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 77L);
	*((EIF_INTEGER_32 *)tr2+132) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 76L);
	*((EIF_INTEGER_32 *)tr2+133) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 75L);
	*((EIF_INTEGER_32 *)tr2+134) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+135) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 74L);
	*((EIF_INTEGER_32 *)tr2+136) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 73L);
	*((EIF_INTEGER_32 *)tr2+137) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 72L);
	*((EIF_INTEGER_32 *)tr2+138) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 71L);
	*((EIF_INTEGER_32 *)tr2+139) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 69L);
	*((EIF_INTEGER_32 *)tr2+140) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 68L);
	*((EIF_INTEGER_32 *)tr2+141) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 67L);
	*((EIF_INTEGER_32 *)tr2+142) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 65L);
	*((EIF_INTEGER_32 *)tr2+143) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	*((EIF_INTEGER_32 *)tr2+144) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 63L);
	*((EIF_INTEGER_32 *)tr2+145) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+146) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 61L);
	*((EIF_INTEGER_32 *)tr2+147) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 58L);
	*((EIF_INTEGER_32 *)tr2+148) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 57L);
	*((EIF_INTEGER_32 *)tr2+149) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 54L);
	*((EIF_INTEGER_32 *)tr2+150) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 53L);
	*((EIF_INTEGER_32 *)tr2+151) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 52L);
	*((EIF_INTEGER_32 *)tr2+152) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	*((EIF_INTEGER_32 *)tr2+153) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 49L);
	*((EIF_INTEGER_32 *)tr2+154) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 48L);
	*((EIF_INTEGER_32 *)tr2+155) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 44L);
	*((EIF_INTEGER_32 *)tr2+156) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+157) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+158) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+159) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+160) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+161) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+162) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+163) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+164) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+165) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+166) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+167) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+168) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+169) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+170) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+171) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+172) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+173) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+174) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+175) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+176) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+177) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+178) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+179) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+180) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+181) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+182) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+183) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+184) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+185) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+186) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+187) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+188) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+189) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+190) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+191) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+192) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+193) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+194) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+195) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+196) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+197) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+198) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+199) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+200) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr2)))(tr2).it_r;
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 200L);
	ui4_4 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11210, dtype))(Current, ur1x, ur2x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_nxt_template_2 */
void F1547_15926 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_nxt_template_2";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 1, 22024);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22024);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1546, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 13L);
	{
		static EIF_TYPE_INDEX typarr0[] = {326,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 13L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr2)))(tr2).it_r;
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 12L);
	ui4_4 = ((EIF_INTEGER_32) 200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11210, dtype))(Current, ur1x, ur2x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_chk_template */
RTOID (F1547_15927)
EIF_TYPED_VALUE F1547_15927 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_chk_template";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1547_15927);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1546, Current, 1, 0, 22025);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22025);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000143, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 211L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2838, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11690, dtype))(Current, ur1x);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11691, dtype))(Current, ur1x);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF8000146, 0,0); /* Result */
	ur1 = RTCCL(loc1);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11209, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef Result
}

/* {ETF_EVT_SCANNER}.yy_chk_template_1 */
void F1547_15928 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_chk_template_1";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 1, 22026);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22026);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1546, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 201L);
	{
		static EIF_TYPE_INDEX typarr0[] = {326,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 201L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+58) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+59) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+60) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+61) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	*((EIF_INTEGER_32 *)tr2+62) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+63) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+64) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+65) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+66) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+67) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+68) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+69) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+70) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+71) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51L);
	*((EIF_INTEGER_32 *)tr2+72) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 60L);
	*((EIF_INTEGER_32 *)tr2+73) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+74) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 66L);
	*((EIF_INTEGER_32 *)tr2+75) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 70L);
	*((EIF_INTEGER_32 *)tr2+76) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 78L);
	*((EIF_INTEGER_32 *)tr2+77) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+78) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+79) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+80) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+81) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+82) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+83) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
	*((EIF_INTEGER_32 *)tr2+84) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	*((EIF_INTEGER_32 *)tr2+85) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 102L);
	*((EIF_INTEGER_32 *)tr2+86) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 98L);
	*((EIF_INTEGER_32 *)tr2+87) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51L);
	*((EIF_INTEGER_32 *)tr2+88) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+89) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 66L);
	*((EIF_INTEGER_32 *)tr2+90) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 97L);
	*((EIF_INTEGER_32 *)tr2+91) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 96L);
	*((EIF_INTEGER_32 *)tr2+92) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+93) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 95L);
	*((EIF_INTEGER_32 *)tr2+94) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 92L);
	*((EIF_INTEGER_32 *)tr2+95) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 70L);
	*((EIF_INTEGER_32 *)tr2+96) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 78L);
	*((EIF_INTEGER_32 *)tr2+97) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 91L);
	*((EIF_INTEGER_32 *)tr2+98) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 89L);
	*((EIF_INTEGER_32 *)tr2+99) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 88L);
	*((EIF_INTEGER_32 *)tr2+100) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 85L);
	*((EIF_INTEGER_32 *)tr2+101) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+102) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+103) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 84L);
	*((EIF_INTEGER_32 *)tr2+104) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 83L);
	*((EIF_INTEGER_32 *)tr2+105) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 81L);
	*((EIF_INTEGER_32 *)tr2+106) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 60L);
	*((EIF_INTEGER_32 *)tr2+107) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+108) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+109) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+110) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+111) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+112) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 108L);
	*((EIF_INTEGER_32 *)tr2+113) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 79L);
	*((EIF_INTEGER_32 *)tr2+114) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 108L);
	*((EIF_INTEGER_32 *)tr2+115) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 108L);
	*((EIF_INTEGER_32 *)tr2+116) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 108L);
	*((EIF_INTEGER_32 *)tr2+117) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+118) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 77L);
	*((EIF_INTEGER_32 *)tr2+119) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+120) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+121) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+122) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 76L);
	*((EIF_INTEGER_32 *)tr2+123) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 75L);
	*((EIF_INTEGER_32 *)tr2+124) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 74L);
	*((EIF_INTEGER_32 *)tr2+125) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 73L);
	*((EIF_INTEGER_32 *)tr2+126) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 72L);
	*((EIF_INTEGER_32 *)tr2+127) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 71L);
	*((EIF_INTEGER_32 *)tr2+128) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 69L);
	*((EIF_INTEGER_32 *)tr2+129) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 68L);
	*((EIF_INTEGER_32 *)tr2+130) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 67L);
	*((EIF_INTEGER_32 *)tr2+131) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 65L);
	*((EIF_INTEGER_32 *)tr2+132) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	*((EIF_INTEGER_32 *)tr2+133) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 63L);
	*((EIF_INTEGER_32 *)tr2+134) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+135) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
	*((EIF_INTEGER_32 *)tr2+136) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 58L);
	*((EIF_INTEGER_32 *)tr2+137) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 57L);
	*((EIF_INTEGER_32 *)tr2+138) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 56L);
	*((EIF_INTEGER_32 *)tr2+139) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 54L);
	*((EIF_INTEGER_32 *)tr2+140) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 53L);
	*((EIF_INTEGER_32 *)tr2+141) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 52L);
	*((EIF_INTEGER_32 *)tr2+142) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	*((EIF_INTEGER_32 *)tr2+143) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 49L);
	*((EIF_INTEGER_32 *)tr2+144) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 48L);
	*((EIF_INTEGER_32 *)tr2+145) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 45L);
	*((EIF_INTEGER_32 *)tr2+146) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+147) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 34L);
	*((EIF_INTEGER_32 *)tr2+148) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+149) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 29L);
	*((EIF_INTEGER_32 *)tr2+150) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
	*((EIF_INTEGER_32 *)tr2+151) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 27L);
	*((EIF_INTEGER_32 *)tr2+152) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+153) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 23L);
	*((EIF_INTEGER_32 *)tr2+154) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+155) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	*((EIF_INTEGER_32 *)tr2+156) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	*((EIF_INTEGER_32 *)tr2+157) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+158) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+159) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+160) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+161) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+162) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+163) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+164) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+165) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+166) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+167) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+168) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+169) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+170) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+171) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+172) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+173) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+174) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+175) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+176) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+177) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+178) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+179) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+180) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+181) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+182) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+183) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+184) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+185) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+186) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+187) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+188) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+189) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+190) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+191) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+192) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+193) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+194) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+195) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+196) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+197) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+198) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+199) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+200) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr2)))(tr2).it_r;
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 200L);
	ui4_4 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11210, dtype))(Current, ur1x, ur2x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_chk_template_2 */
void F1547_15929 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_chk_template_2";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 1, 22027);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22027);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1546, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 13L);
	{
		static EIF_TYPE_INDEX typarr0[] = {326,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 13L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr2)))(tr2).it_r;
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 12L);
	ui4_4 = ((EIF_INTEGER_32) 200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11210, dtype))(Current, ur1x, ur2x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_base_template */
RTOID (F1547_15930)
EIF_TYPED_VALUE F1547_15930 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_base_template";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1547_15930);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 0, 22028);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22028);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000146, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 112L);
	{
		static EIF_TYPE_INDEX typarr0[] = {326,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 112L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 157L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 52L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 53L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 53L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 146L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 144L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 48L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 122L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 123L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 126L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 122L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 127L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 115L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 129L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 96L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 63L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 140L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 133L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 58L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 113L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 123L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 121L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+58) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 88L);
	*((EIF_INTEGER_32 *)tr2+59) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 89L);
	*((EIF_INTEGER_32 *)tr2+60) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 67L);
	*((EIF_INTEGER_32 *)tr2+61) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+62) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 122L);
	*((EIF_INTEGER_32 *)tr2+63) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 114L);
	*((EIF_INTEGER_32 *)tr2+64) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
	*((EIF_INTEGER_32 *)tr2+65) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 99L);
	*((EIF_INTEGER_32 *)tr2+66) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+67) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+68) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 101L);
	*((EIF_INTEGER_32 *)tr2+69) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 101L);
	*((EIF_INTEGER_32 *)tr2+70) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 52L);
	*((EIF_INTEGER_32 *)tr2+71) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 99L);
	*((EIF_INTEGER_32 *)tr2+72) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 91L);
	*((EIF_INTEGER_32 *)tr2+73) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 76L);
	*((EIF_INTEGER_32 *)tr2+74) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 81L);
	*((EIF_INTEGER_32 *)tr2+75) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 86L);
	*((EIF_INTEGER_32 *)tr2+76) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 99L);
	*((EIF_INTEGER_32 *)tr2+77) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 99L);
	*((EIF_INTEGER_32 *)tr2+78) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 53L);
	*((EIF_INTEGER_32 *)tr2+79) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 88L);
	*((EIF_INTEGER_32 *)tr2+80) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+81) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 76L);
	*((EIF_INTEGER_32 *)tr2+82) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+83) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 81L);
	*((EIF_INTEGER_32 *)tr2+84) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	*((EIF_INTEGER_32 *)tr2+85) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 57L);
	*((EIF_INTEGER_32 *)tr2+86) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+87) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+88) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	*((EIF_INTEGER_32 *)tr2+89) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 77L);
	*((EIF_INTEGER_32 *)tr2+90) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+91) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 74L);
	*((EIF_INTEGER_32 *)tr2+92) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 69L);
	*((EIF_INTEGER_32 *)tr2+93) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+94) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+95) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 48L);
	*((EIF_INTEGER_32 *)tr2+96) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+97) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 56L);
	*((EIF_INTEGER_32 *)tr2+98) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 54L);
	*((EIF_INTEGER_32 *)tr2+99) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+100) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+101) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+102) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+103) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+104) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51L);
	*((EIF_INTEGER_32 *)tr2+105) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+106) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	*((EIF_INTEGER_32 *)tr2+107) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+108) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 111L);
	*((EIF_INTEGER_32 *)tr2+109) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 76L);
	*((EIF_INTEGER_32 *)tr2+110) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 116L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+111) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr2)))(tr2).it_r;
	ur1 = tr1;
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11209, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef Result
}

/* {ETF_EVT_SCANNER}.yy_def_template */
RTOID (F1547_15931)
EIF_TYPED_VALUE F1547_15931 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_def_template";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1547_15931);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 0, 22029);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22029);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000146, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 112L);
	{
		static EIF_TYPE_INDEX typarr0[] = {326,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 112L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 108L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+58) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+59) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+60) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+61) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+62) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+63) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+64) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+65) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+66) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+67) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+68) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+69) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+70) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+71) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+72) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+73) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+74) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+75) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+76) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+77) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+78) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+79) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+80) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+81) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+82) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+83) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+84) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+85) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+86) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+87) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+88) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+89) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+90) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+91) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+92) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+93) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+94) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+95) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+96) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+97) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+98) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+99) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+100) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+101) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+102) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+103) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+104) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+105) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+106) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+107) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+108) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+109) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+110) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+111) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr2)))(tr2).it_r;
	ur1 = tr1;
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11209, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef Result
}

/* {ETF_EVT_SCANNER}.yy_ec_template */
RTOID (F1547_15932)
EIF_TYPED_VALUE F1547_15932 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_ec_template";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1547_15932);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1546, Current, 1, 0, 22030);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22030);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000143, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 256L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2838, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11695, dtype))(Current, ur1x);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11696, dtype))(Current, ur1x);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF8000146, 0,0); /* Result */
	ur1 = RTCCL(loc1);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11209, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef Result
}

/* {ETF_EVT_SCANNER}.yy_ec_template_1 */
void F1547_15933 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_ec_template_1";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 1, 22031);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22031);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1546, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 201L);
	{
		static EIF_TYPE_INDEX typarr0[] = {326,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 201L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+58) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	*((EIF_INTEGER_32 *)tr2+59) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	*((EIF_INTEGER_32 *)tr2+60) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+61) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	*((EIF_INTEGER_32 *)tr2+62) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 17L);
	*((EIF_INTEGER_32 *)tr2+63) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 18L);
	*((EIF_INTEGER_32 *)tr2+64) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+65) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
	*((EIF_INTEGER_32 *)tr2+66) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	*((EIF_INTEGER_32 *)tr2+67) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 21L);
	*((EIF_INTEGER_32 *)tr2+68) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+69) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 23L);
	*((EIF_INTEGER_32 *)tr2+70) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+71) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+72) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	*((EIF_INTEGER_32 *)tr2+73) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 27L);
	*((EIF_INTEGER_32 *)tr2+74) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+75) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+76) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
	*((EIF_INTEGER_32 *)tr2+77) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+78) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 29L);
	*((EIF_INTEGER_32 *)tr2+79) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+80) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+81) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+82) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_32 *)tr2+83) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 33L);
	*((EIF_INTEGER_32 *)tr2+84) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 34L);
	*((EIF_INTEGER_32 *)tr2+85) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+86) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 36L);
	*((EIF_INTEGER_32 *)tr2+87) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+88) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+89) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 37L);
	*((EIF_INTEGER_32 *)tr2+90) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+91) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+92) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+93) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	*((EIF_INTEGER_32 *)tr2+94) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+95) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+96) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+97) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+98) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+99) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+100) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+101) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+102) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+103) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+104) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+105) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+106) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+107) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+108) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 44L);
	*((EIF_INTEGER_32 *)tr2+109) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 45L);
	*((EIF_INTEGER_32 *)tr2+110) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+111) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+112) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+113) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+114) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 47L);
	*((EIF_INTEGER_32 *)tr2+115) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 48L);
	*((EIF_INTEGER_32 *)tr2+116) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 49L);
	*((EIF_INTEGER_32 *)tr2+117) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	*((EIF_INTEGER_32 *)tr2+118) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+119) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+120) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+121) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51L);
	*((EIF_INTEGER_32 *)tr2+122) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+123) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 52L);
	*((EIF_INTEGER_32 *)tr2+124) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+125) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 53L);
	*((EIF_INTEGER_32 *)tr2+126) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+127) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+128) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+129) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+130) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+131) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+132) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+133) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+134) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+135) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+136) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+137) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+138) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+139) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+140) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+141) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+142) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+143) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+144) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+145) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+146) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+147) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+148) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+149) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+150) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+151) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+152) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+153) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+154) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+155) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+156) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+157) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+158) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+159) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+160) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+161) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+162) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+163) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+164) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+165) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+166) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+167) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+168) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+169) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+170) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+171) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+172) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+173) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+174) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+175) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+176) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+177) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+178) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+179) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+180) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+181) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+182) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+183) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+184) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+185) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+186) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+187) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+188) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+189) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+190) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+191) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+192) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+193) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+194) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+195) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+196) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+197) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+198) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+199) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+200) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr2)))(tr2).it_r;
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 200L);
	ui4_4 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11210, dtype))(Current, ur1x, ur2x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_ec_template_2 */
void F1547_15934 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_ec_template_2";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 1, 22032);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22032);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1546, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 58L);
	{
		static EIF_TYPE_INDEX typarr0[] = {326,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 58L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr2)))(tr2).it_r;
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 57L);
	ui4_4 = ((EIF_INTEGER_32) 200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11210, dtype))(Current, ur1x, ur2x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_meta_template */
RTOID (F1547_15935)
EIF_TYPED_VALUE F1547_15935 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_meta_template";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1547_15935);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 0, 22033);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22033);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000146, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 55L);
	{
		static EIF_TYPE_INDEX typarr0[] = {326,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 55L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr2)))(tr2).it_r;
	ur1 = tr1;
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11209, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef Result
}

/* {ETF_EVT_SCANNER}.yy_accept_template */
RTOID (F1547_15936)
EIF_TYPED_VALUE F1547_15936 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_accept_template";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1547_15936);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 0, 22034);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1546, Current, 22034);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000146, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 108L);
	{
		static EIF_TYPE_INDEX typarr0[] = {326,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 108L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 18L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 27L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 33L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 17L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 23L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 21L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 37L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 33L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+58) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+59) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+60) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 37L);
	*((EIF_INTEGER_32 *)tr2+61) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 36L);
	*((EIF_INTEGER_32 *)tr2+62) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 34L);
	*((EIF_INTEGER_32 *)tr2+63) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+64) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+65) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+66) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+67) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+68) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+69) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+70) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+71) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+72) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+73) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+74) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+75) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+76) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+77) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr2+78) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+79) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+80) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	*((EIF_INTEGER_32 *)tr2+81) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+82) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+83) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+84) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+85) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+86) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 29L);
	*((EIF_INTEGER_32 *)tr2+87) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	*((EIF_INTEGER_32 *)tr2+88) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+89) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+90) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_32 *)tr2+91) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+92) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+93) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	*((EIF_INTEGER_32 *)tr2+94) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+95) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+96) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+97) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+98) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+99) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	*((EIF_INTEGER_32 *)tr2+100) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+101) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+102) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+103) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	*((EIF_INTEGER_32 *)tr2+104) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+105) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+106) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+107) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr2)))(tr2).it_r;
	ur1 = tr1;
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11209, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef Result
}

/* {ETF_EVT_SCANNER}.yyjam_base */
EIF_TYPED_VALUE F1547_15937 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 158L);
	return r;
}

/* {ETF_EVT_SCANNER}.yyjam_state */
EIF_TYPED_VALUE F1547_15938 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	return r;
}

/* {ETF_EVT_SCANNER}.yytemplate_mark */
EIF_TYPED_VALUE F1547_15939 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	return r;
}

/* {ETF_EVT_SCANNER}.yynull_equiv_class */
EIF_TYPED_VALUE F1547_15940 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {ETF_EVT_SCANNER}.yyreject_used */
EIF_TYPED_VALUE F1547_15941 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {ETF_EVT_SCANNER}.yyvariable_trail_context */
EIF_TYPED_VALUE F1547_15942 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {ETF_EVT_SCANNER}.yyreject_or_variable_trail_context */
EIF_TYPED_VALUE F1547_15943 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {ETF_EVT_SCANNER}.yynb_rules */
EIF_TYPED_VALUE F1547_15944 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	return r;
}

/* {ETF_EVT_SCANNER}.yyend_of_buffer */
EIF_TYPED_VALUE F1547_15945 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	return r;
}

/* {ETF_EVT_SCANNER}.yyline_used */
EIF_TYPED_VALUE F1547_15946 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {ETF_EVT_SCANNER}.yyposition_used */
EIF_TYPED_VALUE F1547_15947 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {ETF_EVT_SCANNER}.initial */
EIF_TYPED_VALUE F1547_15948 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {ETF_EVT_SCANNER}.make */
void F1547_15949 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 0, 22047);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1546, Current, 22047);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11151, Dtype(Current)))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ETF_EVT_SCANNER}.reset */
void F1547_15950 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1546, Current, 0, 0, 22048);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1546, Current, 22048);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11154, Dtype(Current)))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1547 (void)
{
	GTCX
	RTOTS (15924,F1547_15924)
	RTOTS (15927,F1547_15927)
	RTOTS (15930,F1547_15930)
	RTOTS (15931,F1547_15931)
	RTOTS (15932,F1547_15932)
	RTOTS (15935,F1547_15935)
	RTOTS (15936,F1547_15936)
}


#ifdef __cplusplus
}
#endif
