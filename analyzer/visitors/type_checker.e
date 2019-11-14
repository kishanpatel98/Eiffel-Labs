note
	description: "Summary description for {TYPE_CHECKER}."
	author: "Jackie and You"
	date: "$Date$"
	revision: "$Revision$"

class
	TYPE_CHECKER

inherit

	VISITOR

create
	make

feature -- Status

	is_type_correct: BOOLEAN

feature -- Constructor

	make
		do
			is_type_correct := false
		end

feature -- To Do: Implement Commands for visiting composite structure

	visit_addition (e: ADDITION)
		do
			visit_numerical (e)
		end

	visit_conjunction (e: CONJUNCTION)
		do
			visit_boolean (e)
		end

	visit_disjunction (e: DISJUNCTION)
		do
			visit_boolean (e)
		end

	visit_division (e: DIVISION)
		do
			visit_numerical (e)
		end

	visit_equals (e: EQUALS)
		do
			visit_boolean (e)
		end

	visit_greater_than (e: GREATER_THAN)
		do
			visit_boolean (e)
		end

	visit_greater_than_or_equals (e: GREATER_THAN_OR_EQUALS)
		do
			visit_boolean (e)
		end

	visit_iff (e: IFF)
		do
			visit_boolean (e)
		end

	visit_implication (e: IMPLICATION)
		do
			visit_boolean (e)
		end

	visit_less_than (e: LESS_THAN)
		do
			visit_boolean (e)
		end

	visit_less_than_or_equals (e: LESS_THAN_OR_EQUALS)
		do
			visit_boolean (e)
		end

	visit_multiplication (e: MULTIPLICATION)
		do
			visit_numerical (e)
		end

	visit_negation (e: NEGATION)
		local
			type_calc: TYPE_CALCULATOR
		do
			create type_calc.make
			e.expr.accept (type_calc)
			is_type_correct := attached {BOOLEAN_TYPE} type_calc.type
		end

	visit_not_equals (e: NOT_EQUALS)
		do
			visit_boolean (e)
		end

	visit_subtraction (e: SUBTRACTION)
		do
			visit_numerical (e)
		end

	visit_value_constant (e: VALUE_CONSTANT)
		do
			is_type_correct := True
		end

	visit_numerical (e: BINARY_EXPRESSION)
		local
			l_type, r: TYPE_CHECKER
			type_calc: TYPE_CALCULATOR
		do
			create l_type.make
			create r.make
			create type_calc.make
			e.left.accept (l_type)
			e.right.accept (r)
			e.accept (type_calc)
			if attached {NUMERICAL_TYPE} type_calc.type then
				if attached l_type.is_type_correct = True and attached r.is_type_correct = True then
					is_type_correct := True
				end
			end
		end

	visit_boolean (e: BINARY_EXPRESSION)
		local
			l_type, r: TYPE_CHECKER
			type_calc: TYPE_CALCULATOR
		do
			create l_type.make
			create r.make
			create type_calc.make
			e.left.accept (l_type)
			e.right.accept (r)
			e.accept (type_calc)
			if attached {BOOLEAN_TYPE} type_calc.type then
				if attached l_type.is_type_correct = True and attached r.is_type_correct = True then
					is_type_correct := True
				end
			end
		end

end
