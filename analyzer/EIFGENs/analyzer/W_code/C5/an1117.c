/*
 * Code for class ANALYZER_TOKENS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1117_9017(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9018(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9019(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1117_9020(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9021(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9022(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9023(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9024(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9025(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9026(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9027(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9028(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9029(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9030(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9031(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9032(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9033(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9034(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9035(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9036(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9037(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9038(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1117_9039(EIF_REFERENCE);
extern void EIF_Minit1117(void);

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

/* {ANALYZER_TOKENS}.last_detachable_any_value */
EIF_TYPED_VALUE F1117_9017 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6372,Dtype(Current)));
	return r;
}


/* {ANALYZER_TOKENS}.last_string_value */
EIF_TYPED_VALUE F1117_9018 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6373,Dtype(Current)));
	return r;
}


/* {ANALYZER_TOKENS}.token_name */
EIF_TYPED_VALUE F1117_9019 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "token_name";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1116, Current, 0, 1, 15147);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1116, Current, 15147);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 0L:
			RTHOOK(2);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("EOF token",9,451139182);
			break;
		case -1L:
			RTHOOK(3);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("Error token",11,1176850798);
			break;
		case 258L:
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("NUMBER",6,1450195794);
			break;
		case 259L:
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("REAL",4,1380270412);
			break;
		case 260L:
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("EOL",3,4542284);
			break;
		case 261L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_PLUS",7,824353619);
			break;
		case 262L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_MINUS",8,530692435);
			break;
		case 263L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_TIMES",8,530676563);
			break;
		case 264L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_DIVIDE",9,681768261);
			break;
		case 265L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_EQUALS",9,666496339);
			break;
		case 266L:
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_NOT_EQUALS",13,1069748307);
			break;
		case 267L:
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_GT",5,1265180500);
			break;
		case 268L:
			RTHOOK(14);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_GTEQ",7,673878865);
			break;
		case 269L:
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_LT",5,1265181780);
			break;
		case 270L:
			RTHOOK(16);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_LTEQ",7,757764945);
			break;
		case 271L:
			RTHOOK(17);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_IFF",6,1764364358);
			break;
		case 272L:
			RTHOOK(18);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_AND",6,1763842116);
			break;
		case 273L:
			RTHOOK(19);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_OR",5,1265182546);
			break;
		case 274L:
			RTHOOK(20);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_IMPLIES",10,1014390611);
			break;
		case 275L:
			RTHOOK(21);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_NOT",6,1764694356);
			break;
		case 276L:
			RTHOOK(22);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_LPAREN",9,345819214);
			break;
		case 277L:
			RTHOOK(23);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("TK_RPAREN",9,357615694);
			break;
		default:
			RTHOOK(24);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			ui4_1 = arg1;
			Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6371, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(25);
		RTCT("token_name_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {ANALYZER_TOKENS}.number */
EIF_TYPED_VALUE F1117_9020 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 258L);
	return r;
}

/* {ANALYZER_TOKENS}.real */
EIF_TYPED_VALUE F1117_9021 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 259L);
	return r;
}

/* {ANALYZER_TOKENS}.eol */
EIF_TYPED_VALUE F1117_9022 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 260L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_plus */
EIF_TYPED_VALUE F1117_9023 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 261L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_minus */
EIF_TYPED_VALUE F1117_9024 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 262L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_times */
EIF_TYPED_VALUE F1117_9025 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 263L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_divide */
EIF_TYPED_VALUE F1117_9026 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 264L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_equals */
EIF_TYPED_VALUE F1117_9027 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 265L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_not_equals */
EIF_TYPED_VALUE F1117_9028 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 266L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_gt */
EIF_TYPED_VALUE F1117_9029 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 267L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_gteq */
EIF_TYPED_VALUE F1117_9030 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 268L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_lt */
EIF_TYPED_VALUE F1117_9031 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 269L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_lteq */
EIF_TYPED_VALUE F1117_9032 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 270L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_iff */
EIF_TYPED_VALUE F1117_9033 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 271L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_and */
EIF_TYPED_VALUE F1117_9034 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 272L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_or */
EIF_TYPED_VALUE F1117_9035 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 273L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_implies */
EIF_TYPED_VALUE F1117_9036 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 274L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_not */
EIF_TYPED_VALUE F1117_9037 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 275L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_lparen */
EIF_TYPED_VALUE F1117_9038 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 276L);
	return r;
}

/* {ANALYZER_TOKENS}.tk_rparen */
EIF_TYPED_VALUE F1117_9039 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 277L);
	return r;
}

void EIF_Minit1117 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
