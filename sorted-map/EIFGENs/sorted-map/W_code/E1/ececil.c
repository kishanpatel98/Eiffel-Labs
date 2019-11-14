#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* TRACING_HANDLER per_thread_trace */
void A32_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(864, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A139_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F139_7117)(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A160_97 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2226, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A160_161 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3075, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A160_162 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3076, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* STUDENT_TESTS t1 */
EIF_TYPED_VALUE _A969_77 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5106, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t2 */
EIF_TYPED_VALUE _A969_78 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5107, "t2", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t3 */
EIF_TYPED_VALUE _A969_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5108, "t3", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t4 */
EIF_TYPED_VALUE _A969_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5109, "t4", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_UTIL t1 */
EIF_TYPED_VALUE _A970_77 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5111, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_UTIL t2 */
EIF_TYPED_VALUE _A970_78 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5112, "t2", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_UTIL t3 */
EIF_TYPED_VALUE _A970_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5113, "t3", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t50 */
EIF_TYPED_VALUE _A971_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5118, "t50", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t51 */
EIF_TYPED_VALUE _A971_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5119, "t51", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t52 */
EIF_TYPED_VALUE _A971_82 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5120, "t52", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t55 */
EIF_TYPED_VALUE _A971_83 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5121, "t55", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t56 */
EIF_TYPED_VALUE _A971_84 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5122, "t56", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t58 */
EIF_TYPED_VALUE _A971_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5123, "t58", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t59 */
EIF_TYPED_VALUE _A971_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5124, "t59", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t60 */
EIF_TYPED_VALUE _A971_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5125, "t60", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t61 */
EIF_TYPED_VALUE _A971_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5126, "t61", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t62 */
EIF_TYPED_VALUE _A971_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5127, "t62", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t63 */
EIF_TYPED_VALUE _A971_90 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5128, "t63", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t64 */
EIF_TYPED_VALUE _A971_91 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5129, "t64", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t65 */
EIF_TYPED_VALUE _A971_92 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5130, "t65", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_KEY_TESTS t66 */
EIF_TYPED_VALUE _A971_93 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5131, "t66", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t0 */
EIF_TYPED_VALUE _A972_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5136, "t0", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t1 */
EIF_TYPED_VALUE _A972_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5137, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t2 */
EIF_TYPED_VALUE _A972_82 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5138, "t2", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t5 */
EIF_TYPED_VALUE _A972_83 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5139, "t5", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t6 */
EIF_TYPED_VALUE _A972_84 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5140, "t6", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t8 */
EIF_TYPED_VALUE _A972_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5141, "t8", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t9 */
EIF_TYPED_VALUE _A972_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "t9", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t10 */
EIF_TYPED_VALUE _A972_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5143, "t10", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t11 */
EIF_TYPED_VALUE _A972_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5144, "t11", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t12 */
EIF_TYPED_VALUE _A972_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5145, "t12", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t13 */
EIF_TYPED_VALUE _A972_90 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5146, "t13", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t14 */
EIF_TYPED_VALUE _A972_91 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5147, "t14", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t15 */
EIF_TYPED_VALUE _A972_92 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5148, "t15", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t16 */
EIF_TYPED_VALUE _A972_93 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5149, "t16", closed [1].it_r))(closed [1].it_r);
}

	/* SET [INTEGER_32] eq */
EIF_TYPED_VALUE _A1012_61_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5474, "eq", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* SET [G#1] eq */
EIF_TYPED_VALUE _A1014_61_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5474, "eq", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* SET [INTEGER_32] g_to_true */
EIF_TYPED_VALUE _A1012_60_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5473, "g_to_true", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* SET [G#1] g_to_true */
EIF_TYPED_VALUE _A1014_60_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5473, "g_to_true", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* SET [INTEGER_32] in_both_set */
EIF_TYPED_VALUE _A1012_63_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5476, "in_both_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [G#1] in_both_set */
EIF_TYPED_VALUE _A1014_63_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5476, "in_both_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [INTEGER_32] in_either_set */
EIF_TYPED_VALUE _A1012_62_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5475, "in_either_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [G#1] in_either_set */
EIF_TYPED_VALUE _A1014_62_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5475, "in_either_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [G#1, INTEGER_32] in_range */
EIF_TYPED_VALUE _A1009_87_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5532, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, INTEGER_32] in_range */
EIF_TYPED_VALUE _A1011_87_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5532, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, G#2] in_range */
EIF_TYPED_VALUE _A1018_87_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5532, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [G#1, INTEGER_32] in_domain */
EIF_TYPED_VALUE _A1009_86_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5531, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, INTEGER_32] in_domain */
EIF_TYPED_VALUE _A1011_86_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5531, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, G#2] in_domain */
EIF_TYPED_VALUE _A1018_86_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5531, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [G#1, INTEGER_32] in_both_fun */
EIF_TYPED_VALUE _A1009_89_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5534, "in_both_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, INTEGER_32] in_both_fun */
EIF_TYPED_VALUE _A1011_89_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5534, "in_both_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, G#2] in_both_fun */
EIF_TYPED_VALUE _A1018_89_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5534, "in_both_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [G#1, INTEGER_32] in_either_fun */
EIF_TYPED_VALUE _A1009_88_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5533, "in_either_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, INTEGER_32] in_either_fun */
EIF_TYPED_VALUE _A1011_88_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5533, "in_either_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, G#2] in_either_fun */
EIF_TYPED_VALUE _A1018_88_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5533, "in_either_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A32_36,
(fnptr)A160_97,
(fnptr)A160_161,
(fnptr)A160_162,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
