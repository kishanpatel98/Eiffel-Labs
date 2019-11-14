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

	/* STUDENT_DESIGN_TESTS test_sorted_map_adt */
EIF_TYPED_VALUE _A969_77 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5115, "test_sorted_map_adt", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t1 */
EIF_TYPED_VALUE _A970_77 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5117, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t2 */
EIF_TYPED_VALUE _A970_78 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5118, "t2", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t3 */
EIF_TYPED_VALUE _A970_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5119, "t3", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t4 */
EIF_TYPED_VALUE _A970_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5120, "t4", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t50 */
EIF_TYPED_VALUE _A971_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5125, "t50", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t51 */
EIF_TYPED_VALUE _A971_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5126, "t51", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t52 */
EIF_TYPED_VALUE _A971_82 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5127, "t52", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t53 */
EIF_TYPED_VALUE _A971_83 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5128, "t53", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t54 */
EIF_TYPED_VALUE _A971_84 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5129, "t54", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t55 */
EIF_TYPED_VALUE _A971_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5130, "t55", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t56 */
EIF_TYPED_VALUE _A971_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5131, "t56", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t57 */
EIF_TYPED_VALUE _A971_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5132, "t57", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t58 */
EIF_TYPED_VALUE _A971_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5133, "t58", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t59 */
EIF_TYPED_VALUE _A971_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5134, "t59", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t60 */
EIF_TYPED_VALUE _A971_90 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5135, "t60", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t61 */
EIF_TYPED_VALUE _A971_91 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5136, "t61", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t62 */
EIF_TYPED_VALUE _A971_92 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5137, "t62", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t63 */
EIF_TYPED_VALUE _A971_93 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5138, "t63", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t64 */
EIF_TYPED_VALUE _A971_94 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5139, "t64", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t65 */
EIF_TYPED_VALUE _A971_95 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5140, "t65", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t66 */
EIF_TYPED_VALUE _A971_96 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5141, "t66", closed [1].it_r))(closed [1].it_r);
}

	/* P_KEY_TESTS t67 */
EIF_TYPED_VALUE _A971_97 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "t67", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t0 */
EIF_TYPED_VALUE _A972_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5147, "t0", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t1 */
EIF_TYPED_VALUE _A972_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5148, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t2 */
EIF_TYPED_VALUE _A972_82 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5149, "t2", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t3 */
EIF_TYPED_VALUE _A972_83 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5150, "t3", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t4 */
EIF_TYPED_VALUE _A972_84 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5151, "t4", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t5 */
EIF_TYPED_VALUE _A972_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5152, "t5", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t6 */
EIF_TYPED_VALUE _A972_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5153, "t6", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t7 */
EIF_TYPED_VALUE _A972_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5154, "t7", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t8 */
EIF_TYPED_VALUE _A972_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5155, "t8", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t9 */
EIF_TYPED_VALUE _A972_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5156, "t9", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t10 */
EIF_TYPED_VALUE _A972_90 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5157, "t10", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t11 */
EIF_TYPED_VALUE _A972_91 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5158, "t11", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t12 */
EIF_TYPED_VALUE _A972_92 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5159, "t12", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t13 */
EIF_TYPED_VALUE _A972_93 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5160, "t13", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t14 */
EIF_TYPED_VALUE _A972_94 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5161, "t14", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t15 */
EIF_TYPED_VALUE _A972_95 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5162, "t15", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t16 */
EIF_TYPED_VALUE _A972_96 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5163, "t16", closed [1].it_r))(closed [1].it_r);
}

	/* INT_KEY_TESTS t17 */
EIF_TYPED_VALUE _A972_97 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5164, "t17", closed [1].it_r))(closed [1].it_r);
}

	/* ITERABLE_SORTED_MAP_TESTS test_iterable_map */
EIF_TYPED_VALUE _A977_78 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5191, "test_iterable_map", closed [1].it_r))(closed [1].it_r);
}

	/* ITERABLE_SORTED_MAP_TESTS test_iteration_cursor */
EIF_TYPED_VALUE _A977_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5192, "test_iteration_cursor", closed [1].it_r))(closed [1].it_r);
}

	/* SET [G#1] eq */
EIF_TYPED_VALUE _A1019_61_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5653, "eq", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* SET [INTEGER_32] eq */
EIF_TYPED_VALUE _A1020_61_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5653, "eq", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* SET [G#1] g_to_true */
EIF_TYPED_VALUE _A1019_60_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5652, "g_to_true", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* SET [INTEGER_32] g_to_true */
EIF_TYPED_VALUE _A1020_60_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5652, "g_to_true", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* SET [G#1] in_both_set */
EIF_TYPED_VALUE _A1019_63_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5655, "in_both_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [INTEGER_32] in_both_set */
EIF_TYPED_VALUE _A1020_63_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5655, "in_both_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [G#1] in_either_set */
EIF_TYPED_VALUE _A1019_62_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5654, "in_either_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [INTEGER_32] in_either_set */
EIF_TYPED_VALUE _A1020_62_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5654, "in_either_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, G#2] in_range */
EIF_TYPED_VALUE _A1018_87_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5711, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [G#1, INTEGER_32] in_range */
EIF_TYPED_VALUE _A1023_87_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5711, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, INTEGER_32] in_range */
EIF_TYPED_VALUE _A1026_87_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5711, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [G#1, G#2] in_range */
EIF_TYPED_VALUE _A1056_87_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5711, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, G#2] in_domain */
EIF_TYPED_VALUE _A1018_86_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5710, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [G#1, INTEGER_32] in_domain */
EIF_TYPED_VALUE _A1023_86_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5710, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, INTEGER_32] in_domain */
EIF_TYPED_VALUE _A1026_86_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5710, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [G#1, G#2] in_domain */
EIF_TYPED_VALUE _A1056_86_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5710, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, G#2] in_both_fun */
EIF_TYPED_VALUE _A1018_89_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5713, "in_both_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [G#1, INTEGER_32] in_both_fun */
EIF_TYPED_VALUE _A1023_89_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5713, "in_both_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, INTEGER_32] in_both_fun */
EIF_TYPED_VALUE _A1026_89_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5713, "in_both_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [G#1, G#2] in_both_fun */
EIF_TYPED_VALUE _A1056_89_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5713, "in_both_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, G#2] in_either_fun */
EIF_TYPED_VALUE _A1018_88_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5712, "in_either_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [G#1, INTEGER_32] in_either_fun */
EIF_TYPED_VALUE _A1023_88_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5712, "in_either_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, INTEGER_32] in_either_fun */
EIF_TYPED_VALUE _A1026_88_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5712, "in_either_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [G#1, G#2] in_either_fun */
EIF_TYPED_VALUE _A1056_88_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5712, "in_either_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
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
