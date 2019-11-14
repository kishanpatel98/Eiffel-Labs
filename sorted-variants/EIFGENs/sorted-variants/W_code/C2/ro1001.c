/*
 * Code for class ROOT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1001_7754(EIF_REFERENCE);
extern void EIF_Minit1001(void);

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

/* {ROOT}.make */
void F1001_7754 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1000, Current, 0, 0, 14093);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1000, Current, 14093);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(eif_new_type(969, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5116, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5082, dtype))(Current, ur1x);
	RTHOOK(2);
	tr1 = RTLN(eif_new_type(980, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5189, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5082, dtype))(Current, ur1x);
	RTHOOK(3);
	tr1 = RTLN(eif_new_type(975, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5183, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5082, dtype))(Current, ur1x);
	RTHOOK(4);
	tr1 = RTLN(eif_new_type(968, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5114, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5082, dtype))(Current, ur1x);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(974, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5177, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5082, dtype))(Current, ur1x);
	RTHOOK(6);
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5171, Dtype(tr1)))(tr1);
	RTNHOOK(6,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5082, dtype))(Current, ur1x);
	RTHOOK(7);
	tr1 = RTLN(eif_new_type(972, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5165, Dtype(tr1)))(tr1);
	RTNHOOK(7,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5082, dtype))(Current, ur1x);
	RTHOOK(8);
	tr1 = RTLN(eif_new_type(979, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5189, Dtype(tr1)))(tr1);
	RTNHOOK(8,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5082, dtype))(Current, ur1x);
	RTHOOK(9);
	tr1 = RTLN(eif_new_type(978, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5189, Dtype(tr1)))(tr1);
	RTNHOOK(9,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5082, dtype))(Current, ur1x);
	RTHOOK(10);
	tr1 = RTLN(eif_new_type(977, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5189, Dtype(tr1)))(tr1);
	RTNHOOK(10,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5082, dtype))(Current, ur1x);
	RTHOOK(11);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5065, dtype))(Current);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5063, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
}

void EIF_Minit1001 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
