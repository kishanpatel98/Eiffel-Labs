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

	/* RBT_TESTS2 t0 */
EIF_TYPED_VALUE _A970_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5111, "t0", closed [1].it_r))(closed [1].it_r);
}

	/* RBT_TESTS2 jt1 */
EIF_TYPED_VALUE _A970_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5112, "jt1", closed [1].it_r))(closed [1].it_r);
}

	/* RBT_TESTS2 jt2 */
EIF_TYPED_VALUE _A970_82 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5113, "jt2", closed [1].it_r))(closed [1].it_r);
}

	/* RBT_TESTS2 jt3 */
EIF_TYPED_VALUE _A970_83 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5114, "jt3", closed [1].it_r))(closed [1].it_r);
}

	/* RBT_TESTS2 jt4 */
EIF_TYPED_VALUE _A970_84 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5115, "jt4", closed [1].it_r))(closed [1].it_r);
}

	/* RBT_TESTS2 jt5 */
EIF_TYPED_VALUE _A970_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5116, "jt5", closed [1].it_r))(closed [1].it_r);
}

	/* RBT_TESTS2 jt6 */
EIF_TYPED_VALUE _A970_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5117, "jt6", closed [1].it_r))(closed [1].it_r);
}

	/* RBT_TESTS2 jt7 */
EIF_TYPED_VALUE _A970_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5118, "jt7", closed [1].it_r))(closed [1].it_r);
}

	/* RBT_TESTS2 jt8 */
EIF_TYPED_VALUE _A970_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5119, "jt8", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_BST_TESTS t1 */
EIF_TYPED_VALUE _A971_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5124, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_BST_TESTS jt0 */
EIF_TYPED_VALUE _A971_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5125, "jt0", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_BST_TESTS jt1 */
EIF_TYPED_VALUE _A971_82 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5126, "jt1", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_BST_TESTS jt2 */
EIF_TYPED_VALUE _A971_83 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5127, "jt2", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_BST_TESTS jt3 */
EIF_TYPED_VALUE _A971_84 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5128, "jt3", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_BST_TESTS jt4 */
EIF_TYPED_VALUE _A971_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5129, "jt4", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_BST_TESTS jt5 */
EIF_TYPED_VALUE _A971_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5130, "jt5", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_BST_TESTS jt6 */
EIF_TYPED_VALUE _A971_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5131, "jt6", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_BST_TESTS jt7 */
EIF_TYPED_VALUE _A971_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5132, "jt7", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_BST_TESTS jt8 */
EIF_TYPED_VALUE _A971_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5133, "jt8", closed [1].it_r))(closed [1].it_r);
}

	/* BST_EXTEND_TEST t1 */
EIF_TYPED_VALUE _A972_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5137, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST_NODE t0 */
EIF_TYPED_VALUE _A973_91 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5153, "t0", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST_NODE t1 */
EIF_TYPED_VALUE _A973_92 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5154, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST_NODE t2 */
EIF_TYPED_VALUE _A973_97 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5159, "t2", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST_NODE t3 */
EIF_TYPED_VALUE _A973_98 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5160, "t3", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST_NODE t4 */
EIF_TYPED_VALUE _A973_99 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5161, "t4", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST_NODE t5 */
EIF_TYPED_VALUE _A973_100 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5162, "t5", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST_NODE t6 */
EIF_TYPED_VALUE _A973_101 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5163, "t6", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST_NODE t7 */
EIF_TYPED_VALUE _A973_102 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5164, "t7", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t1 */
EIF_TYPED_VALUE _A974_77 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5166, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t2 */
EIF_TYPED_VALUE _A974_78 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5167, "t2", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t3 */
EIF_TYPED_VALUE _A974_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5168, "t3", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t4 */
EIF_TYPED_VALUE _A974_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5169, "t4", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t0 */
EIF_TYPED_VALUE _A975_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5173, "t0", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t1 */
EIF_TYPED_VALUE _A975_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5174, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t2 */
EIF_TYPED_VALUE _A975_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5175, "t2", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t3 */
EIF_TYPED_VALUE _A975_82 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5176, "t3", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t4 */
EIF_TYPED_VALUE _A975_83 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5177, "t4", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t5 */
EIF_TYPED_VALUE _A975_84 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5178, "t5", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t6 */
EIF_TYPED_VALUE _A975_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5179, "t6", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t7 */
EIF_TYPED_VALUE _A975_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5180, "t7", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t8 */
EIF_TYPED_VALUE _A975_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5181, "t8", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t9 */
EIF_TYPED_VALUE _A975_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5182, "t9", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t10 */
EIF_TYPED_VALUE _A975_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5183, "t10", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t11 */
EIF_TYPED_VALUE _A975_90 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5184, "t11", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t12 */
EIF_TYPED_VALUE _A975_91 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5185, "t12", closed [1].it_r))(closed [1].it_r);
}

	/* SORTED_TREE_ADT_TESTS t13 */
EIF_TYPED_VALUE _A975_92 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5186, "t13", closed [1].it_r))(closed [1].it_r);
}

	/* RBT_TESTS t20 */
EIF_TYPED_VALUE _A976_93 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5187, "t20", closed [1].it_r))(closed [1].it_r);
}

	/* RBT_TESTS t21 */
EIF_TYPED_VALUE _A976_94 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5188, "t21", closed [1].it_r))(closed [1].it_r);
}

	/* RBT_TESTS t22 */
EIF_TYPED_VALUE _A976_95 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5189, "t22", closed [1].it_r))(closed [1].it_r);
}

	/* FUN [INTEGER_32, G#2] in_range */
EIF_TYPED_VALUE _A1011_87_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5636, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [G#1, INTEGER_32] in_range */
EIF_TYPED_VALUE _A1014_87_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5636, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, INTEGER_32] in_range */
EIF_TYPED_VALUE _A1016_87_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5636, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [G#1, G#2] in_range */
EIF_TYPED_VALUE _A1019_87_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5636, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, G#2] in_domain */
EIF_TYPED_VALUE _A1011_86_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5635, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [G#1, INTEGER_32] in_domain */
EIF_TYPED_VALUE _A1014_86_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5635, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, INTEGER_32] in_domain */
EIF_TYPED_VALUE _A1016_86_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5635, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [G#1, G#2] in_domain */
EIF_TYPED_VALUE _A1019_86_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5635, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, G#2] in_both_fun */
EIF_TYPED_VALUE _A1011_89_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5638, "in_both_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [G#1, INTEGER_32] in_both_fun */
EIF_TYPED_VALUE _A1014_89_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5638, "in_both_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, INTEGER_32] in_both_fun */
EIF_TYPED_VALUE _A1016_89_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5638, "in_both_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [G#1, G#2] in_both_fun */
EIF_TYPED_VALUE _A1019_89_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5638, "in_both_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, G#2] in_either_fun */
EIF_TYPED_VALUE _A1011_88_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5637, "in_either_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [G#1, INTEGER_32] in_either_fun */
EIF_TYPED_VALUE _A1014_88_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5637, "in_either_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, INTEGER_32] in_either_fun */
EIF_TYPED_VALUE _A1016_88_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5637, "in_either_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [G#1, G#2] in_either_fun */
EIF_TYPED_VALUE _A1019_88_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5637, "in_either_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [G#1] eq */
EIF_TYPED_VALUE _A1010_61_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5670, "eq", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* SET [INTEGER_32] eq */
EIF_TYPED_VALUE _A1012_61_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5670, "eq", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* SET [G#1] g_to_true */
EIF_TYPED_VALUE _A1010_60_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5669, "g_to_true", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* SET [INTEGER_32] g_to_true */
EIF_TYPED_VALUE _A1012_60_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5669, "g_to_true", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* SET [G#1] in_both_set */
EIF_TYPED_VALUE _A1010_63_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5672, "in_both_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [INTEGER_32] in_both_set */
EIF_TYPED_VALUE _A1012_63_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5672, "in_both_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [G#1] in_either_set */
EIF_TYPED_VALUE _A1010_62_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5671, "in_either_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [INTEGER_32] in_either_set */
EIF_TYPED_VALUE _A1012_62_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5671, "in_either_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
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
