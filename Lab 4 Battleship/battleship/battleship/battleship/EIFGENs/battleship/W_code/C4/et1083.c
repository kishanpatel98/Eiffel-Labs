/*
 * Code for class ETF_TYPE_CONSTRAINTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1083_9292(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1083_9293(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1083_9294(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1083_9295(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1083_9296(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9297(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9298(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9299(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9300(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9301(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9302(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9303(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9304(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9305(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9306(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9307(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9308(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9309(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9310(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9311(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9312(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9313(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9314(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9315(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1083_9316(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1083(void);

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

/* {ETF_TYPE_CONSTRAINTS}.is_column */
EIF_TYPED_VALUE F1083_9292 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_column";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1082, Current, 0, 1, 15554);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1082, Current, 15554);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = RTMS_EX_H("etf_v: COLUMN = 1 .. 12",23,1501283890);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7086, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1)) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1))) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_row */
EIF_TYPED_VALUE F1083_9293 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_row";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1082, Current, 0, 1, 15555);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1082, Current, 15555);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = RTMS_EX_H("etf_v: ROW = {A, B, C, D, E, F, G, H, I, J, K, L}",49,1284506237);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7086, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	tb6 = '\01';
	tb7 = '\01';
	tb8 = '\01';
	tb9 = '\01';
	tb10 = '\01';
	tb11 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7066, dtype))(Current)).it_i4);
	ti8_1 = (EIF_INTEGER_64) ti4_1;
	if (!((arg1 == ti8_1))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7067, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb11 = (arg1 == ti8_1);
	}
	if (!tb11) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7068, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb10 = (arg1 == ti8_1);
	}
	if (!tb10) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7069, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb9 = (arg1 == ti8_1);
	}
	if (!tb9) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7070, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb8 = (arg1 == ti8_1);
	}
	if (!tb8) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7071, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb7 = (arg1 == ti8_1);
	}
	if (!tb7) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7072, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb6 = (arg1 == ti8_1);
	}
	if (!tb6) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7073, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb5 = (arg1 == ti8_1);
	}
	if (!tb5) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7074, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb4 = (arg1 == ti8_1);
	}
	if (!tb4) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7075, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb3 = (arg1 == ti8_1);
	}
	if (!tb3) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7076, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb2 = (arg1 == ti8_1);
	}
	if (!tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7077, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb1 = (arg1 == ti8_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		tb4 = '\01';
		tb5 = '\01';
		tb6 = '\01';
		tb7 = '\01';
		tb8 = '\01';
		tb9 = '\01';
		tb10 = '\01';
		tb11 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7066, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		if (!((arg1 == ti8_1))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7067, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb11 = (arg1 == ti8_1);
		}
		if (!tb11) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7068, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb10 = (arg1 == ti8_1);
		}
		if (!tb10) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7069, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb9 = (arg1 == ti8_1);
		}
		if (!tb9) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7070, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb8 = (arg1 == ti8_1);
		}
		if (!tb8) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7071, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb7 = (arg1 == ti8_1);
		}
		if (!tb7) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7072, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb6 = (arg1 == ti8_1);
		}
		if (!tb6) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7073, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb5 = (arg1 == ti8_1);
		}
		if (!tb5) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7074, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb4 = (arg1 == ti8_1);
		}
		if (!tb4) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7075, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb3 = (arg1 == ti8_1);
		}
		if (!tb3) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7076, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb2 = (arg1 == ti8_1);
		}
		if (!tb2) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7077, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb1 = (arg1 == ti8_1);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_coordinate */
EIF_TYPED_VALUE F1083_9294 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_coordinate";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1082, Current, 0, 1, 15556);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1082, Current, 15556);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,185,199,199,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1082, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = RTMS_EX_H("etf_v: COORDINATE = TUPLE[row: ROW = {A, B, C, D, E, F, G, H, I, J, K, L}; column: COLUMN = 1 .. 12]",100,1156708189);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7086, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	ti8_1 = eif_integer_64_item(RTCW(arg1),1);
	ui8_1 = ti8_1;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7063, dtype))(Current, ui8_1x)).it_b);
	if (tb2) {
		ti8_1 = eif_integer_64_item(RTCW(arg1),2);
		ui8_1 = ti8_1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7062, dtype))(Current, ui8_1x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		tb1 = '\0';
		ti8_1 = eif_integer_64_item(RTCW(arg1),1);
		ui8_1 = ti8_1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7063, dtype))(Current, ui8_1x)).it_b);
		if ((EIF_BOOLEAN)(Result == tb2)) {
			ti8_1 = eif_integer_64_item(RTCW(arg1),2);
			ui8_1 = ti8_1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7062, dtype))(Current, ui8_1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui8_1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_level */
EIF_TYPED_VALUE F1083_9295 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_level";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1082, Current, 0, 1, 15557);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1082, Current, 15557);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = RTMS_EX_H("etf_v: LEVEL = {easy, medium, hard, advanced}",45,916681853);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7086, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7078, dtype))(Current)).it_i4);
	ti8_1 = (EIF_INTEGER_64) ti4_1;
	if (!((arg1 == ti8_1))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7079, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb3 = (arg1 == ti8_1);
	}
	if (!tb3) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7080, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb2 = (arg1 == ti8_1);
	}
	if (!tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7081, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb1 = (arg1 == ti8_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7078, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		if (!((arg1 == ti8_1))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7079, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb3 = (arg1 == ti8_1);
		}
		if (!tb3) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7080, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb2 = (arg1 == ti8_1);
		}
		if (!tb2) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7081, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb1 = (arg1 == ti8_1);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.a */
EIF_TYPED_VALUE F1083_9296 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.b */
EIF_TYPED_VALUE F1083_9297 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.c */
EIF_TYPED_VALUE F1083_9298 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.d */
EIF_TYPED_VALUE F1083_9299 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.e */
EIF_TYPED_VALUE F1083_9300 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.f */
EIF_TYPED_VALUE F1083_9301 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.g */
EIF_TYPED_VALUE F1083_9302 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.h */
EIF_TYPED_VALUE F1083_9303 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.i */
EIF_TYPED_VALUE F1083_9304 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.j */
EIF_TYPED_VALUE F1083_9305 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.k */
EIF_TYPED_VALUE F1083_9306 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.l */
EIF_TYPED_VALUE F1083_9307 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.easy */
EIF_TYPED_VALUE F1083_9308 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.medium */
EIF_TYPED_VALUE F1083_9309 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.hard */
EIF_TYPED_VALUE F1083_9310 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.advanced */
EIF_TYPED_VALUE F1083_9311 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items */
EIF_TYPED_VALUE F1083_9312 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1082, Current, 0, 0, 15549);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1082, Current, 15549);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80003AF, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,943,217,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3037, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = RTMS_EX_H("A",1,65);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = RTMS_EX_H("B",1,66);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tr1 = RTMS_EX_H("C",1,67);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	tr1 = RTMS_EX_H("D",1,68);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	tr1 = RTMS_EX_H("E",1,69);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 6L);
	tr1 = RTMS_EX_H("F",1,70);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(8);
	ui4_1 = ((EIF_INTEGER_32) 7L);
	tr1 = RTMS_EX_H("G",1,71);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(9);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tr1 = RTMS_EX_H("H",1,72);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(10);
	ui4_1 = ((EIF_INTEGER_32) 9L);
	tr1 = RTMS_EX_H("I",1,73);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(11);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	tr1 = RTMS_EX_H("J",1,74);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(12);
	ui4_1 = ((EIF_INTEGER_32) 11L);
	tr1 = RTMS_EX_H("K",1,75);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(13);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	tr1 = RTMS_EX_H("L",1,76);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(14);
	ui4_1 = ((EIF_INTEGER_32) 13L);
	tr1 = RTMS_EX_H("easy",4,1700885369);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(15);
	ui4_1 = ((EIF_INTEGER_32) 14L);
	tr1 = RTMS_EX_H("medium",6,1899711341);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(16);
	ui4_1 = ((EIF_INTEGER_32) 15L);
	tr1 = RTMS_EX_H("hard",4,1751216740);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(17);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tr1 = RTMS_EX_H("advanced",8,899231588);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items_inverse */
EIF_TYPED_VALUE F1083_9313 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items_inverse";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1082, Current, 0, 0, 15550);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1082, Current, 15550);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000633, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1587,0xFF01,231,199,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3037, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("A",1,65);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("B",1,66);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("C",1,67);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("D",1,68);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("E",1,69);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("F",1,70);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("G",1,71);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("H",1,72);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(10);
	tr1 = RTMS_EX_H("I",1,73);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 9L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(11);
	tr1 = RTMS_EX_H("J",1,74);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(12);
	tr1 = RTMS_EX_H("K",1,75);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 11L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(13);
	tr1 = RTMS_EX_H("L",1,76);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(14);
	tr1 = RTMS_EX_H("easy",4,1700885369);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 13L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(15);
	tr1 = RTMS_EX_H("medium",6,1899711341);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 14L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(16);
	tr1 = RTMS_EX_H("hard",4,1751216740);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 15L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(17);
	tr1 = RTMS_EX_H("advanced",8,899231588);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 16L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ui8_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui8_1
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_table */
EIF_TYPED_VALUE F1083_9314 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_table";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui8_2x = {{0}, SK_INT64};
#define ui8_2 ui8_2x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_REFERENCE tr11 = NULL;
	EIF_REFERENCE tr12 = NULL;
	EIF_REFERENCE tr13 = NULL;
	EIF_REFERENCE tr14 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(24);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,tr5);
	RTLR(9,tr6);
	RTLR(10,ur2);
	RTLR(11,loc2);
	RTLR(12,loc3);
	RTLR(13,tr7);
	RTLR(14,tr8);
	RTLR(15,tr9);
	RTLR(16,tr10);
	RTLR(17,ur3);
	RTLR(18,tr11);
	RTLR(19,tr12);
	RTLR(20,tr13);
	RTLR(21,tr14);
	RTLR(22,ur4);
	RTLR(23,loc4);
	RTLIU(24);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1082, Current, 4, 0, 15551);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1082, Current, 15551);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000215, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,533,0xFF01,533,0xFF01,1068,0xFF01,231,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3037, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1727, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000215, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,533,0xFF01,1068,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3037, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1727, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1079, 0x01).id);
	tr2 = RTMS_EX_H("LEVEL",5,1163865420);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1072, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 4L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("easy",4,1700885369);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("medium",6,1899711341);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("hard",4,1751216740);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("advanced",8,899231588);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr5)))(tr5).it_r;
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7052, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(5,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("level",5,1703087468);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(6);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("new_game",8,1289924453);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(7);
	RTDBGAL(Current, 2, 0xF8000215, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,533,0xFF01,1068,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3037, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(7,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1727, "compare_objects", loc2))(loc2);
	RTHOOK(9);
	tr1 = RTLN(eif_new_type(1079, 0x01).id);
	tr2 = RTMS_EX_H("LEVEL",5,1163865420);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1072, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 4L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("easy",4,1700885369);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("medium",6,1899711341);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("hard",4,1751216740);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("advanced",8,899231588);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr5)))(tr5).it_r;
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7052, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(9,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(9,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("level",5,1703087468);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", loc2))(loc2, ur1x, ur2x);
	RTHOOK(10);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("debug_test",10,723132276);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(11);
	RTDBGAL(Current, 3, 0xF8000215, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,533,0xFF01,1068,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3037, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(11,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1727, "compare_objects", loc3))(loc3);
	RTHOOK(13);
	tr1 = RTLN(eif_new_type(1079, 0x01).id);
	tr2 = RTMS_EX_H("COORDINATE",10,355500357);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1081, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,975,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(975, 0x01).id);
	tr8 = RTMS_EX_H("row",3,7499639);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1079, 0x01).id);
	tr10 = RTMS_EX_H("ROW",3,5394263);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1072, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 12L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr13+2) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr13+3) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr13+4) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr13+5) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr13+6) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr13+7) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr13+8) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr13+9) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("K",1,75);
	*((EIF_REFERENCE *)tr13+10) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("L",1,76);
	*((EIF_REFERENCE *)tr13+11) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7052, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(13,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6192, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(975, 0x01).id);
	tr8 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1079, 0x01).id);
	tr10 = RTMS_EX_H("COLUMN",6,1412992846);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1077, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7054, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(13,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6192, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7060, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(13,7);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(13,8);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("coordinate",10,1779599461);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", loc3))(loc3, ur1x, ur2x);
	RTHOOK(14);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("fire",4,1718186597);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(15);
	RTDBGAL(Current, 4, 0xF8000215, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,533,0xFF01,1068,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3037, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(15,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(16);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1727, "compare_objects", loc4))(loc4);
	RTHOOK(17);
	tr1 = RTLN(eif_new_type(1079, 0x01).id);
	tr2 = RTMS_EX_H("COORDINATE",10,355500357);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1081, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,975,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(975, 0x01).id);
	tr8 = RTMS_EX_H("row",3,7499639);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1079, 0x01).id);
	tr10 = RTMS_EX_H("ROW",3,5394263);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1072, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 12L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr13+2) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr13+3) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr13+4) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr13+5) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr13+6) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr13+7) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr13+8) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr13+9) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("K",1,75);
	*((EIF_REFERENCE *)tr13+10) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("L",1,76);
	*((EIF_REFERENCE *)tr13+11) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7052, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(17,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(17,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6192, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(975, 0x01).id);
	tr8 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1079, 0x01).id);
	tr10 = RTMS_EX_H("COLUMN",6,1412992846);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1077, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7054, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(17,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(17,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6192, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7060, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(17,7);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(17,8);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("coordinate1",11,311742769);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", loc4))(loc4, ur1x, ur2x);
	RTHOOK(18);
	tr1 = RTLN(eif_new_type(1079, 0x01).id);
	tr2 = RTMS_EX_H("COORDINATE",10,355500357);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1081, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,975,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(975, 0x01).id);
	tr8 = RTMS_EX_H("row",3,7499639);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1079, 0x01).id);
	tr10 = RTMS_EX_H("ROW",3,5394263);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1072, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 12L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr13+2) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr13+3) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr13+4) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr13+5) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr13+6) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr13+7) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr13+8) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr13+9) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("K",1,75);
	*((EIF_REFERENCE *)tr13+10) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("L",1,76);
	*((EIF_REFERENCE *)tr13+11) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7052, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(18,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(18,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6192, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(18,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(975, 0x01).id);
	tr8 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1079, 0x01).id);
	tr10 = RTMS_EX_H("COLUMN",6,1412992846);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1077, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7054, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(18,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(18,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6192, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(18,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7060, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(18,7);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(18,8);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("coordinate2",11,311742770);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", loc4))(loc4, ur1x, ur2x);
	RTHOOK(19);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("bomb",4,1651469666);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui8_1
#undef ui8_2
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_list */
EIF_TYPED_VALUE F1083_9315 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_list";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui8_2x = {{0}, SK_INT64};
#define ui8_2 ui8_2x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_REFERENCE tr11 = NULL;
	EIF_REFERENCE tr12 = NULL;
	EIF_REFERENCE tr13 = NULL;
	EIF_REFERENCE tr14 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(24);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,tr5);
	RTLR(9,tr6);
	RTLR(10,ur2);
	RTLR(11,loc2);
	RTLR(12,loc3);
	RTLR(13,tr7);
	RTLR(14,tr8);
	RTLR(15,tr9);
	RTLR(16,tr10);
	RTLR(17,ur3);
	RTLR(18,tr11);
	RTLR(19,tr12);
	RTLR(20,tr13);
	RTLR(21,tr14);
	RTLR(22,ur4);
	RTLR(23,loc4);
	RTLIU(24);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1082, Current, 4, 0, 15552);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1082, Current, 15552);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000215, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,533,0xFF01,839,0xFF01,1068,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3037, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1727, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000347, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,839,0xFF01,1068,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2777, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1727, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1079, 0x01).id);
	tr2 = RTMS_EX_H("LEVEL",5,1163865420);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1072, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 4L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("easy",4,1700885369);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("medium",6,1899711341);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("hard",4,1751216740);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("advanced",8,899231588);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr5)))(tr5).it_r;
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7052, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(5,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1735, "extend", loc1))(loc1, ur1x);
	RTHOOK(6);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("new_game",8,1289924453);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(7);
	RTDBGAL(Current, 2, 0xF8000347, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,839,0xFF01,1068,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2777, Dtype(tr1)))(tr1);
	RTNHOOK(7,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1727, "compare_objects", loc2))(loc2);
	RTHOOK(9);
	tr1 = RTLN(eif_new_type(1079, 0x01).id);
	tr2 = RTMS_EX_H("LEVEL",5,1163865420);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1072, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 4L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("easy",4,1700885369);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("medium",6,1899711341);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("hard",4,1751216740);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("advanced",8,899231588);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr5)))(tr5).it_r;
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7052, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(9,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(9,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1735, "extend", loc2))(loc2, ur1x);
	RTHOOK(10);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("debug_test",10,723132276);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(11);
	RTDBGAL(Current, 3, 0xF8000347, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,839,0xFF01,1068,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2777, Dtype(tr1)))(tr1);
	RTNHOOK(11,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1727, "compare_objects", loc3))(loc3);
	RTHOOK(13);
	tr1 = RTLN(eif_new_type(1079, 0x01).id);
	tr2 = RTMS_EX_H("COORDINATE",10,355500357);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1081, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,975,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(975, 0x01).id);
	tr8 = RTMS_EX_H("row",3,7499639);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1079, 0x01).id);
	tr10 = RTMS_EX_H("ROW",3,5394263);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1072, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 12L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr13+2) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr13+3) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr13+4) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr13+5) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr13+6) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr13+7) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr13+8) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr13+9) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("K",1,75);
	*((EIF_REFERENCE *)tr13+10) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("L",1,76);
	*((EIF_REFERENCE *)tr13+11) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7052, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(13,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6192, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(975, 0x01).id);
	tr8 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1079, 0x01).id);
	tr10 = RTMS_EX_H("COLUMN",6,1412992846);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1077, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7054, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(13,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6192, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7060, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(13,7);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(13,8);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1735, "extend", loc3))(loc3, ur1x);
	RTHOOK(14);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("fire",4,1718186597);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(15);
	RTDBGAL(Current, 4, 0xF8000347, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,839,0xFF01,1068,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2777, Dtype(tr1)))(tr1);
	RTNHOOK(15,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(16);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1727, "compare_objects", loc4))(loc4);
	RTHOOK(17);
	tr1 = RTLN(eif_new_type(1079, 0x01).id);
	tr2 = RTMS_EX_H("COORDINATE",10,355500357);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1081, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,975,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(975, 0x01).id);
	tr8 = RTMS_EX_H("row",3,7499639);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1079, 0x01).id);
	tr10 = RTMS_EX_H("ROW",3,5394263);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1072, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 12L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr13+2) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr13+3) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr13+4) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr13+5) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr13+6) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr13+7) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr13+8) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr13+9) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("K",1,75);
	*((EIF_REFERENCE *)tr13+10) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("L",1,76);
	*((EIF_REFERENCE *)tr13+11) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7052, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(17,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(17,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6192, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(975, 0x01).id);
	tr8 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1079, 0x01).id);
	tr10 = RTMS_EX_H("COLUMN",6,1412992846);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1077, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7054, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(17,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(17,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6192, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7060, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(17,7);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(17,8);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1735, "extend", loc4))(loc4, ur1x);
	RTHOOK(18);
	tr1 = RTLN(eif_new_type(1079, 0x01).id);
	tr2 = RTMS_EX_H("COORDINATE",10,355500357);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1081, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,975,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(975, 0x01).id);
	tr8 = RTMS_EX_H("row",3,7499639);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1079, 0x01).id);
	tr10 = RTMS_EX_H("ROW",3,5394263);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1072, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {257,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 12L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr13+2) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr13+3) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr13+4) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr13+5) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr13+6) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr13+7) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr13+8) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr13+9) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("K",1,75);
	*((EIF_REFERENCE *)tr13+10) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("L",1,76);
	*((EIF_REFERENCE *)tr13+11) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7052, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(18,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(18,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6192, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(18,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(975, 0x01).id);
	tr8 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1079, 0x01).id);
	tr10 = RTMS_EX_H("COLUMN",6,1412992846);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1077, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7054, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(18,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(18,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6192, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(18,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2634, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7060, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(18,7);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7057, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(18,8);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1735, "extend", loc4))(loc4, ur1x);
	RTHOOK(19);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("bomb",4,1651469666);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3067, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui8_1
#undef ui8_2
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.comment */
EIF_TYPED_VALUE F1083_9316 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "comment";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1082, Current, 0, 1, 15553);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1082, Current, 15553);
	RTCC(arg1, 1082, l_feature_name, 1, eif_new_type(231, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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

void EIF_Minit1083 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
