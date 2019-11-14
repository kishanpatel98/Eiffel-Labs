note
	description: "Summary description for {PRINTER}."
	author: "Jackie and You"
	date: "$Date$"
	revision: "$Revision$"

class
	PRETTY_PRINTER

inherit
	VISITOR

create
	make

feature -- Status
	value: STRING

feature -- Constructor
	make
		do
			create value.make_empty
		end

feature -- Given to You: Commands for visiting composite structure

	visit_binary_expression (e: BINARY_EXPRESSION; op: STRING)
		local
			l_printer, r_printer: PRETTY_PRINTER
		do
			create l_printer.make
			create r_printer.make
			e.left.accept (l_printer)
			e.right.accept (r_printer)
			value.append ("(")
			value.append (l_printer.value)
			value.append (op)
			value.append (r_printer.value)
			value.append (")")
		end

	visit_unary_expression (e: UNARY_EXPRESSION; op: STRING)
		local
			e_printer: PRETTY_PRINTER
		do
			create e_printer.make
			e.expr.accept (e_printer)
			value.append ("(")
			value.append (op)
			value.append (e_printer.value)
			value.append (")")
		end

feature -- Commands for visiting composite structure
	visit_value_constant (e: VALUE_CONSTANT)
		do
			value.append (e.value.out)
		end

	visit_addition (e: ADDITION)
		do
			visit_binary_expression (e, "+")
		end

	visit_subtraction (e: SUBTRACTION)
		do
			visit_binary_expression (e, "-")
		end

	visit_multiplication (e: MULTIPLICATION)
		do
			visit_binary_expression (e, "*")
		end

	visit_division (e: DIVISION)
		do
			visit_binary_expression (e, "/")
		end

	visit_equals (e: EQUALS)
		do
			visit_binary_expression (e, "=")
		end

	visit_not_equals (e: NOT_EQUALS)
		do
			visit_binary_expression (e, "/=")
		end

	visit_greater_than (e: GREATER_THAN)
		do
			visit_binary_expression (e, ">")
		end

	visit_greater_than_or_equals (e: GREATER_THAN_OR_EQUALS)
		do
			visit_binary_expression (e, ">=")
		end

	visit_less_than (e: LESS_THAN)
		do
			visit_binary_expression (e, "<")
		end

	visit_less_than_or_equals (e: LESS_THAN_OR_EQUALS)
		do
			visit_binary_expression (e, "<=")
		end

	visit_conjunction (e: CONJUNCTION)
		do
			visit_binary_expression (e, "/\")
		end

	visit_disjunction (e: DISJUNCTION)
		do
			visit_binary_expression (e, "\/")
		end

	visit_implication (e: IMPLICATION)
		do
			visit_binary_expression (e, "=>")
		end

	visit_iff (e: IFF)
		do
			visit_binary_expression (e, "<=>")
		end

	visit_negation (e: NEGATION)
		do
			visit_unary_expression (e, "not")
		end

end
