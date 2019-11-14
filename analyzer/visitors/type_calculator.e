note
	description: "Summary description for {TYPE_CALCULATOR}."
	author: "Jackie and You"
	date: "$Date$"
	revision: "$Revision$"

class
	TYPE_CALCULATOR

inherit

	VISITOR

create
	make

feature -- Status

	type: EXPRESSION_TYPE

feature -- Constructor

	make
		do
			create {UNKNOWN_TYPE} type
		end

feature -- To Do: Implement Commands for visiting composite structure

	visit_addition (e: ADDITION)
		do
				--TO DO
			visit_numerical (e)
		end

	visit_conjunction (e: CONJUNCTION)
		do
				--TO DO
			visit_boolean (e)
		end

	visit_disjunction (e: DISJUNCTION)
		do
				--TO DO
			visit_boolean (e)
		end

	visit_division (e: DIVISION)
		do
				--TO DO
			visit_numerical (e)
		end

	visit_equals (e: EQUALS)
		do
				--TO DO
			visit_numerical_boolean (e)
		end

	visit_greater_than (e: GREATER_THAN)
		do
				--TO DO
			visit_numerical_boolean (e)
		end

	visit_greater_than_or_equals (e: GREATER_THAN_OR_EQUALS)
		do
				--TO DO
			visit_numerical_boolean (e)
		end

	visit_iff (e: IFF)
		do
				--TO DO
			visit_boolean (e)
		end

	visit_implication (e: IMPLICATION)
		do
				--TO DO
			visit_boolean (e)
		end

	visit_less_than (e: LESS_THAN)
		do
				--TO DO
			visit_numerical_boolean (e)
		end

	visit_less_than_or_equals (e: LESS_THAN_OR_EQUALS)
		do
				--TO DO
			visit_numerical_boolean (e)
		end

	visit_multiplication (e: MULTIPLICATION)
		do
				--TO DO
			visit_numerical (e)
		end

	visit_negation (e: NEGATION)
		local
			type_calc: TYPE_CALCULATOR
		do
				--TO DO
			create type_calc.make
			e.expr.accept (type_calc)
			if attached {BOOLEAN_TYPE} type_calc.type as t then
				create {BOOLEAN_TYPE} type.default_create
			end
		end

	visit_not_equals (e: NOT_EQUALS)
		do
				--TO DO
			visit_numerical_boolean (e)
		end

	visit_subtraction (e: SUBTRACTION)
		do
				--TO DO
			visit_numerical (e)
		end

	visit_value_constant (e: VALUE_CONSTANT)
		do
				--TO DO
			create {NUMERICAL_TYPE} type
		end

	visit_numerical (e: BINARY_EXPRESSION)
		local
			l_type, r_type: TYPE_CALCULATOR
		do
			create l_type.make
			create r_type.make
			e.left.accept (l_type)
			e.right.accept (r_type)
			if attached {NUMERICAL_TYPE} l_type.type as l and attached {NUMERICAL_TYPE} r_type.type as r then
				create {NUMERICAL_TYPE} type
			else
				create {UNKNOWN_TYPE} type
			end
		end

	visit_numerical_boolean (e: BINARY_EXPRESSION)
		local
			l_type, r_type: TYPE_CALCULATOR
		do
			create l_type.make
			create r_type.make
			e.left.accept (l_type)
			e.right.accept (r_type)
			if attached {NUMERICAL_TYPE} l_type.type as l and attached {NUMERICAL_TYPE} r_type.type as r then
				create {BOOLEAN_TYPE} type
			else
				create {UNKNOWN_TYPE} type
			end
		end

	visit_boolean (e: BINARY_EXPRESSION)
		local
			l_type, r_type: TYPE_CALCULATOR
		do
			create l_type.make
			create r_type.make
			e.left.accept (l_type)
			e.right.accept (r_type)
			if attached {BOOLEAN_TYPE} l_type.type as l and attached {BOOLEAN_TYPE} r_type.type as r then
				create {BOOLEAN_TYPE} type
			else
				create {UNKNOWN_TYPE} type
			end
		end

end
