note
	description: "Summary description for {BASIC_TESTS}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	BASIC_TESTS
inherit
	ES_TEST
		redefine
			setup
		end

create
	make

feature
	make
		do
			create parser.make
			add_boolean_case (agent test_01)
			add_boolean_case (agent test_02)
			add_boolean_case (agent test_03)
			add_boolean_case (agent test_04a)
			add_boolean_case (agent test_04b)
			add_boolean_case (agent test_05)
			add_boolean_case (agent test_06)
			add_boolean_case (agent test_07)
			add_boolean_case (agent test_08)
			add_boolean_case (agent test_09)
			add_boolean_case (agent test_10)
			add_boolean_case (agent test_11)
			add_boolean_case (agent test_12)
			add_boolean_case (agent test_13)
			add_boolean_case (agent test_14)
		end

feature
	parser: ANALYZER_PARSER

	setup
			-- Re-create the parser before executing each test feature.
		do
			parser.make
		end

	is_equal_within (expected, actual: REAL_64): BOOLEAN
		do
			Result := (expected - actual).abs <= 0.001
		end

feature -- Tests of pretty printer

	test_01: BOOLEAN
		local
			v: PRETTY_PRINTER
		do
			comment ("test_01: print 3")
			parser.parse_string ("3")
			-- parser.error_count = 0 means the given string is syntactically correct.
			Result := parser.error_count = 0
			check Result end

			create v.make
			-- parser.expression returns a composite object of static type EXPRESSION
			-- In this case, its dynamic type is VALUE_CONSTANT
			parser.expression.accept (v)
			Result := v.value ~ "3"
		end

	test_02: BOOLEAN
		local
			v: PRETTY_PRINTER
		do
			comment ("test_02: print ((3 + 4) * 45 >= 64) /\ (4 /= 34) \/ (not (5 = 65))")
			parser.parse_string ("((3 + 4) * 45 >= 64) /\ (4 /= 34) \/ (not (5 = 65))")
			Result := parser.error_count = 0
			check Result end

			create v.make
			-- parser.expression returns a composite object of static type EXPRESSION
			-- In this case, its dynamic type is DISJUNCTION
			parser.expression.accept (v)
			Result := v.value ~ "(((((3+4)*45)>=64)/\(4/=34))\/(not(5=65)))"
		end

feature -- Tests of evaluator

	test_03: BOOLEAN
		local
			v: EVALUATOR
		do
			comment ("t_03: 3.23 evaluates to 3.23")
			parser.parse_string ("3.23")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			-- v.value has the static type EXPRESSION_VALUE
			-- In this case, the given string should evaluate to a numerical value.
			-- So its dynamic type should be NUMERICAL_VALUE.
			-- Class NUMERICAL_VALUE has an attribute `value` of type REAL_64.
			-- To compare floating-point numbers, use `is_equal_within` that is given to you in class EVALUATOR.
			check attached {NUMERICAL_VALUE} v.value as number then
				Result := is_equal_within (3.23, number.value)
			end
		end

	test_04a: BOOLEAN
		local
			v: EVALUATOR
		do
			comment ("t_04a: (3.23 + 4) * 3 evaluates to 21.69")

			parser.parse_string ("(3.23 + 4) * 3")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			check attached {NUMERICAL_VALUE} v.value as number then
				Result := is_equal_within (21.69, number.value)
			end
		end

	test_04b: BOOLEAN
		local
			v: EVALUATOR
		do
			comment ("t_04b: (3.23 + 4) * 3 = 21.69 evaluates to true")

			parser.parse_string ("(3.23 + 4) * 3 = 21.69")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			check attached {BOOLEAN_VALUE} v.value as bool then
				Result := bool.value = true
			end
		end

feature -- Tests of type calculator

	test_05: BOOLEAN
		local
			v: TYPE_CALCULATOR
		do
			comment ("test_05: 3.23 has numerical type")

			parser.parse_string ("3.23")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			Result := attached {NUMERICAL_TYPE} v.type
		end

	test_06: BOOLEAN
		local
			v: TYPE_CALCULATOR
		do
			comment ("test_06: 3.23 + 4 has numerical type")

			parser.parse_string ("3.23 + 4")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			Result := attached {NUMERICAL_TYPE} v.type
		end

	test_07: BOOLEAN
		local
			v: TYPE_CALCULATOR
		do
			comment ("test_07: (3 < 4) + (23 >= 34) has unknown type")

			parser.parse_string ("(3 < 4) + (23 >= 34)")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			Result := attached {UNKNOWN_TYPE} v.type
		end

	test_08: BOOLEAN
		local
			v: TYPE_CALCULATOR
		do
			comment ("test_08: (3 < 4) => (23 >= 34) has boolean type")

			parser.parse_string ("(3 < 4) => (23 >= 34)")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			Result := attached {BOOLEAN_TYPE} v.type
		end

	test_09: BOOLEAN
		local
			v: TYPE_CALCULATOR
		do
			comment ("test_09: (3 < 4) <=> (23 >= 34) has boolean type")

			parser.parse_string ("(3 < 4) <=> (23 >= 34)")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			Result := attached {BOOLEAN_TYPE} v.type
		end

feature -- Tests of type checker

	test_10: BOOLEAN
		local
			v: TYPE_CHECKER
		do
			comment ("test_10: 3.23 is type correct")

			parser.parse_string ("3.23")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			Result := v.is_type_correct
		end

	test_11: BOOLEAN
		local
			v: TYPE_CHECKER
		do
			comment ("test_11: 3.23 + 4 is type correct")

			parser.parse_string ("3.23 + 4")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			Result := v.is_type_correct
		end

	test_12: BOOLEAN
		local
			v: TYPE_CHECKER
		do
			comment ("test_12: (3 < 4) + (23 >= 34) is not type correct")

			parser.parse_string ("(3 < 4) + (23 >= 34)")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			Result := not v.is_type_correct
		end

	test_13: BOOLEAN
		local
			v: TYPE_CHECKER
		do
			comment ("test_13: (3 < 4) => (23 >= 34) is type correct")

			parser.parse_string ("(3 < 4) => (23 >= 34)")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			Result := v.is_type_correct
		end

	test_14: BOOLEAN
		local
			v: TYPE_CHECKER
		do
			comment ("test_14: (3 < 4) <=> (23 >= 34) is type correct")

			parser.parse_string ("(3 < 4) <=> (23 >= 34)")
			Result := parser.error_count = 0
			check Result end

			create v.make
			parser.expression.accept (v)
			Result := v.is_type_correct
		end
end
