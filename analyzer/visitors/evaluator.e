note
	description: "Summary description for {EVALUATOR}."
	author: "Jackie and You"
	date: "$Date$"
	revision: "$Revision$"

class
	EVALUATOR

inherit

	VISITOR

create
	make

feature -- Status

	value: EXPRESSION_VALUE

feature -- Constructor

	make
		do
			create {NIL} value
		end

feature {NONE} -- Helper Queries

	is_equal_within (expected, actual: REAL_64): BOOLEAN
			-- Is `expected' equal to `actual' within 0.001 tolerance?
		do
			Result := (expected - actual).abs <= 0.001
		end

feature -- To Do: Implement Commands for visiting composite structure

	visit_addition (e: ADDITION)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {NUMERICAL_VALUE} left_eval.value as l_value and attached {NUMERICAL_VALUE} right_eval.value as r_value then
				create {NUMERICAL_VALUE} value.make (l_value.value + r_value.value)
			end
		end

	visit_conjunction (e: CONJUNCTION)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {BOOLEAN_VALUE} left_eval.value as l_value and attached {BOOLEAN_VALUE} right_eval.value as r_value then
				create {BOOLEAN_VALUE} value.make (l_value.value and r_value.value)
			end
		end

	visit_disjunction (e: DISJUNCTION)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {BOOLEAN_VALUE} left_eval.value as l_value and attached {BOOLEAN_VALUE} right_eval.value as r_value then
				create {BOOLEAN_VALUE} value.make (l_value.value or r_value.value)
			end
		end

	visit_division (e: DIVISION)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {NUMERICAL_VALUE} left_eval.value as l_value and attached {NUMERICAL_VALUE} right_eval.value as r_value then
				create {NUMERICAL_VALUE} value.make (l_value.value / r_value.value)
			end
		end

	visit_equals (e: EQUALS)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {NUMERICAL_VALUE} left_eval.value as l_value and attached {NUMERICAL_VALUE} right_eval.value as r_value then
				create {BOOLEAN_VALUE} value.make (is_equal_within (l_value.value, r_value.value))
			end
		end

	visit_greater_than (e: GREATER_THAN)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {NUMERICAL_VALUE} left_eval.value as l_value and attached {NUMERICAL_VALUE} right_eval.value as r_value then
				create {BOOLEAN_VALUE} value.make (l_value.value > r_value.value)
			end
		end

	visit_greater_than_or_equals (e: GREATER_THAN_OR_EQUALS)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {NUMERICAL_VALUE} left_eval.value as l_value and attached {NUMERICAL_VALUE} right_eval.value as r_value then
				create {BOOLEAN_VALUE} value.make (l_value.value >= r_value.value)
			end
		end

	visit_iff (e: IFF)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {BOOLEAN_VALUE} left_eval.value as l_value and attached {BOOLEAN_VALUE} right_eval.value as r_value then
				create {BOOLEAN_VALUE} value.make ((l_value.value implies r_value.value) and (r_value.value implies l_value.value))
			end
		end

	visit_implication (e: IMPLICATION)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {BOOLEAN_VALUE} left_eval.value as l_value and attached {BOOLEAN_VALUE} right_eval.value as r_value then
				create {BOOLEAN_VALUE} value.make (l_value.value implies r_value.value)
			end
		end

	visit_less_than (e: LESS_THAN)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {NUMERICAL_VALUE} left_eval.value as l_value and attached {NUMERICAL_VALUE} right_eval.value as r_value then
				create {BOOLEAN_VALUE} value.make (l_value.value < r_value.value)
			end
		end

	visit_less_than_or_equals (e: LESS_THAN_OR_EQUALS)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {NUMERICAL_VALUE} left_eval.value as l_value and attached {NUMERICAL_VALUE} right_eval.value as r_value then
				create {BOOLEAN_VALUE} value.make (l_value.value <= r_value.value)
			end
		end

	visit_multiplication (e: MULTIPLICATION)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {NUMERICAL_VALUE} left_eval.value as l_value and attached {NUMERICAL_VALUE} right_eval.value as r_value then
				create {NUMERICAL_VALUE} value.make (l_value.value * r_value.value)
			end
		end

	visit_negation (e: NEGATION)
		local
			left_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			e.expr.accept (left_eval)
			if attached {BOOLEAN_VALUE} left_eval.value as l_value then
				create {BOOLEAN_VALUE} value.make (not l_value.value)
			end
		end

	visit_not_equals (e: NOT_EQUALS)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {NUMERICAL_VALUE} left_eval.value as l_value and attached {NUMERICAL_VALUE} right_eval.value as r_value then
				create {BOOLEAN_VALUE} value.make (l_value.value /= r_value.value)
			end
		end

	visit_subtraction (e: SUBTRACTION)
		local
			left_eval: EVALUATOR
			right_eval: EVALUATOR
		do
			create {EVALUATOR} left_eval.make
			create {EVALUATOR} right_eval.make
			e.left.accept (left_eval)
			e.right.accept (right_eval)
			if attached {NUMERICAL_VALUE} left_eval.value as l_value and attached {NUMERICAL_VALUE} right_eval.value as r_value then
				create {NUMERICAL_VALUE} value.make (l_value.value - r_value.value)
			end
		end

	visit_value_constant (e: VALUE_CONSTANT)
		do
			create {NUMERICAL_VALUE} value.make (e.value)
		end

end
