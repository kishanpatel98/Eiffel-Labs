/*
 * Code for class reference ETF_MODEL_ACCESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F980_8409(EIF_REFERENCE);
extern void F980_16300(EIF_REFERENCE, int);
extern void EIF_Minit980(void);

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

/* {ETF_MODEL_ACCESS}.m */
RTOID (F980_8409)
EIF_TYPED_VALUE F980_8409 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "m";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F980_8409);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 979, Current, 0, 0, 14738);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(979, Current, 14738);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80003D4, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(980, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6243, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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
#undef Result
}

/* {ETF_MODEL_ACCESS}._invariant */
void F980_16300 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 979, Current, 0, 16299);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT(NULL, Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6242, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6242, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	if (RTCEQ(tr1, tr2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef up2
}

void EIF_Minit980 (void)
{
	GTCX
	RTOTS (8409,F980_8409)
}


#ifdef __cplusplus
}
#endif
