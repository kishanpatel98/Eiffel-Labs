-- a simple calculator
class ANALYZER_PARSER 

inherit

	YY_PARSER_SKELETON
		rename
			make as make_parser_skeleton
		redefine
			report_error
		end
		
	ANALYZER_SCANNER
		rename
			make as make_scanner
		end

create 
	make


feature {NONE} -- Implementation

	yy_build_parser_tables
			-- Build parser tables.
		do
			yytranslate := yytranslate_template
			yyr1 := yyr1_template
			yytypes1 := yytypes1_template
			yytypes2 := yytypes2_template
			yydefact := yydefact_template
			yydefgoto := yydefgoto_template
			yypact := yypact_template
			yypgoto := yypgoto_template
			yytable := yytable_template
			yycheck := yycheck_template
		end

	yy_create_value_stacks
			-- Create value stacks.
		do
			create yyspecial_routines1
			yyvsc1 := yyInitial_yyvs_size
			yyvs1 := yyspecial_routines1.make (yyvsc1)
			create yyspecial_routines2
			yyvsc2 := yyInitial_yyvs_size
			yyvs2 := yyspecial_routines2.make (yyvsc2)
			create yyspecial_routines3
			yyvsc3 := yyInitial_yyvs_size
			yyvs3 := yyspecial_routines3.make (yyvsc3)
		end

	yy_init_value_stacks
			-- Initialize value stacks.
		do
			yyvsp1 := -1
			yyvsp2 := -1
			yyvsp3 := -1
		end

	yy_clear_value_stacks
			-- Clear objects in semantic value stacks so that
			-- they can be collected by the garbage collector.
		do
			yyvs1.keep_head (0)
			yyvs2.keep_head (0)
			yyvs3.keep_head (0)
		end

	yy_push_last_value (yychar1: INTEGER)
			-- Push semantic value associated with token `last_token'
			-- (with internal id `yychar1') on top of corresponding
			-- value stack.
		do
			inspect yytypes2.item (yychar1)
			when 1 then
				yyvsp1 := yyvsp1 + 1
				if yyvsp1 >= yyvsc1 then
					debug ("GEYACC")
						std.error.put_line ("Resize yyvs1")
					end
					yyvsc1 := yyvsc1 + yyInitial_yyvs_size
					yyvs1 := yyspecial_routines1.aliased_resized_area (yyvs1, yyvsc1)
				end
				yyspecial_routines1.force (yyvs1, last_detachable_any_value, yyvsp1)
			when 2 then
				yyvsp2 := yyvsp2 + 1
				if yyvsp2 >= yyvsc2 then
					debug ("GEYACC")
						std.error.put_line ("Resize yyvs2")
					end
					yyvsc2 := yyvsc2 + yyInitial_yyvs_size
					yyvs2 := yyspecial_routines2.aliased_resized_area (yyvs2, yyvsc2)
				end
				yyspecial_routines2.force (yyvs2, last_string_value, yyvsp2)
			else
				debug ("GEYACC")
					std.error.put_string ("Error in parser: not a token type: ")
					std.error.put_integer (yytypes2.item (yychar1))
					std.error.put_new_line
				end
				abort
			end
		end

	yy_push_error_value
			-- Push semantic value associated with token 'error'
			-- on top of corresponding value stack.
		local
			yyval1: detachable ANY
		do
			yyvsp1 := yyvsp1 + 1
			if yyvsp1 >= yyvsc1 then
				debug ("GEYACC")
					std.error.put_line ("Resize yyvs1")
				end
				yyvsc1 := yyvsc1 + yyInitial_yyvs_size
				yyvs1 := yyspecial_routines1.aliased_resized_area (yyvs1, yyvsc1)
			end
			yyspecial_routines1.force (yyvs1, yyval1, yyvsp1)
		end

	yy_pop_last_value (yystate: INTEGER)
			-- Pop semantic value from stack when in state `yystate'.
		local
			yy_type_id: INTEGER
		do
			yy_type_id := yytypes1.item (yystate)
			inspect yy_type_id
			when 1 then
				yyvsp1 := yyvsp1 - 1
			when 2 then
				yyvsp2 := yyvsp2 - 1
			when 3 then
				yyvsp3 := yyvsp3 - 1
			else
				debug ("GEYACC")
					std.error.put_string ("Error in parser: unknown type id: ")
					std.error.put_integer (yy_type_id)
					std.error.put_new_line
				end
				abort
			end
		end

	yy_run_geyacc
			-- You must run geyacc to regenerate this class.
		do
		end

feature {NONE} -- Semantic actions

	yy_do_action (yy_act: INTEGER)
			-- Execute semantic action.
		local
			yyval3: EXPRESSION
		do
				inspect yy_act
when 1 then
--|#line 70 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 70")
end

		create {VALUE_CONSTANT} yyval3.make ((yyvs2.item (yyvsp2)).to_real)
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 1
	yyvsp3 := yyvsp3 + 1
	yyvsp2 := yyvsp2 -1
	if yyvsp3 >= yyvsc3 then
		debug ("GEYACC")
			std.error.put_line ("Resize yyvs3")
		end
		yyvsc3 := yyvsc3 + yyInitial_yyvs_size
		yyvs3 := yyspecial_routines3.aliased_resized_area (yyvs3, yyvsc3)
	end
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 2 then
--|#line 75 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 75")
end

		yyvs2.item (yyvsp2).prepend("-")
		create {VALUE_CONSTANT} yyval3.make ((yyvs2.item (yyvsp2)).to_real)
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 2
	yyvsp3 := yyvsp3 + 1
	yyvsp1 := yyvsp1 -1
	yyvsp2 := yyvsp2 -1
	if yyvsp3 >= yyvsc3 then
		debug ("GEYACC")
			std.error.put_line ("Resize yyvs3")
		end
		yyvsc3 := yyvsc3 + yyInitial_yyvs_size
		yyvs3 := yyspecial_routines3.aliased_resized_area (yyvs3, yyvsc3)
	end
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 3 then
--|#line 81 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 81")
end

		create {VALUE_CONSTANT} yyval3.make ((yyvs2.item (yyvsp2)).to_real)
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 1
	yyvsp3 := yyvsp3 + 1
	yyvsp2 := yyvsp2 -1
	if yyvsp3 >= yyvsc3 then
		debug ("GEYACC")
			std.error.put_line ("Resize yyvs3")
		end
		yyvsc3 := yyvsc3 + yyInitial_yyvs_size
		yyvs3 := yyspecial_routines3.aliased_resized_area (yyvs3, yyvsc3)
	end
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 4 then
--|#line 86 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 86")
end

		yyvs2.item (yyvsp2).prepend("-")
		create {VALUE_CONSTANT} yyval3.make ((yyvs2.item (yyvsp2)).to_real)
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 2
	yyvsp3 := yyvsp3 + 1
	yyvsp1 := yyvsp1 -1
	yyvsp2 := yyvsp2 -1
	if yyvsp3 >= yyvsc3 then
		debug ("GEYACC")
			std.error.put_line ("Resize yyvs3")
		end
		yyvsc3 := yyvsc3 + yyInitial_yyvs_size
		yyvs3 := yyspecial_routines3.aliased_resized_area (yyvs3, yyvsc3)
	end
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 5 then
--|#line 92 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 92")
end

		create {ADDITION} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 6 then
--|#line 97 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 97")
end

		create {SUBTRACTION} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 7 then
--|#line 102 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 102")
end

		create {MULTIPLICATION} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 8 then
--|#line 107 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 107")
end

		create {DIVISION} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 9 then
--|#line 112 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 112")
end

		create {EQUALS} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 10 then
--|#line 117 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 117")
end

		create {NOT_EQUALS} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 11 then
--|#line 122 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 122")
end

		create {GREATER_THAN} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 12 then
--|#line 127 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 127")
end

		create {GREATER_THAN_OR_EQUALS} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 13 then
--|#line 132 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 132")
end

		create {LESS_THAN} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 14 then
--|#line 137 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 137")
end

		create {LESS_THAN_OR_EQUALS} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 15 then
--|#line 142 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 142")
end

		create {IFF} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 16 then
--|#line 147 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 147")
end

		create {CONJUNCTION} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 17 then
--|#line 152 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 152")
end

		create {DISJUNCTION} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 18 then
--|#line 157 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 157")
end

		create {IMPLICATION} yyval3.make (yyvs3.item (yyvsp3 - 1), yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp3 := yyvsp3 -1
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 19 then
--|#line 162 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 162")
end

		create {NEGATION} yyval3.make (yyvs3.item (yyvsp3))
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 2
	yyvsp1 := yyvsp1 -1
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
when 20 then
--|#line 167 "analyzer_parser.y"
debug ("GEYACC")
	std.error.put_line ("Executing parser user-code from file 'analyzer_parser.y' at line 167")
end

		yyval3 := yyvs3.item (yyvsp3)
		expression := yyval3
	
if yy_parsing_status >= yyContinue then
	yyssp := yyssp - 3
	yyvsp1 := yyvsp1 -2
	yyspecial_routines3.force (yyvs3, yyval3, yyvsp3)
end
				else
					debug ("GEYACC")
						std.error.put_string ("Error in parser: unknown rule id: ")
						std.error.put_integer (yy_act)
						std.error.put_new_line
					end
					abort
				end
		end

	yy_do_error_action (yy_act: INTEGER)
			-- Execute error action.
		do
			inspect yy_act
			when 39 then
					-- End-of-file expected action.
				report_eof_expected_error
			else
					-- Default action.
				report_error ("parse error")
			end
		end

feature {NONE} -- Table templates

	yytranslate_template: SPECIAL [INTEGER]
			-- Template for `yytranslate'
		local
			an_array: ARRAY [INTEGER]
		once
			create an_array.make_filled (0, 0, 277)
			yytranslate_template_1 (an_array)
			yytranslate_template_2 (an_array)
			Result := yyfixed_array (an_array)
		end

	yytranslate_template_1 (an_array: ARRAY [INTEGER])
			-- Fill chunk #1 of template for `yytranslate'.
		do
			yyarray_subcopy (an_array, <<
			    0,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,

			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2, yyDummy>>,
			1, 200, 0)
		end

	yytranslate_template_2 (an_array: ARRAY [INTEGER])
			-- Fill chunk #2 of template for `yytranslate'.
		do
			yyarray_subcopy (an_array, <<
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
			    2,    2,    2,    2,    2,    2,    1,    2,    3,    4,
			    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,
			   15,   16,   17,   18,   19,   20,   21,   22, yyDummy>>,
			1, 78, 200)
		end

	yyr1_template: SPECIAL [INTEGER]
			-- Template for `yyr1'
		once
			Result := yyfixed_array (<<
			    0,   23,   23,   23,   23,   23,   23,   23,   23,   23,
			   23,   23,   23,   23,   23,   23,   23,   23,   23,   23,
			   23, yyDummy>>)
		end

	yytypes1_template: SPECIAL [INTEGER]
			-- Template for `yytypes1'
		once
			Result := yyfixed_array (<<
			    3,    1,    1,    1,    2,    2,    3,    3,    3,    2,
			    2,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    3,    3,    3,    3,
			    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
			    1,    1, yyDummy>>)
		end

	yytypes2_template: SPECIAL [INTEGER]
			-- Template for `yytypes2'
		once
			Result := yyfixed_array (<<
			    1,    1,    1,    2,    2,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1, yyDummy>>)
		end

	yydefact_template: SPECIAL [INTEGER]
			-- Template for `yydefact'
		once
			Result := yyfixed_array (<<
			    0,    0,    0,    0,    3,    1,    0,    0,   19,    4,
			    2,    0,    0,    0,    0,    0,    0,    0,    0,    0,
			    0,    0,    0,    0,    0,   20,   18,   17,   16,   15,
			   14,   13,   12,   11,   10,    9,    8,    7,    6,    5,
			    0,    0, yyDummy>>)
		end

	yydefgoto_template: SPECIAL [INTEGER]
			-- Template for `yydefgoto'
		once
			Result := yyfixed_array (<<
			    6, yyDummy>>)
		end

	yypact_template: SPECIAL [INTEGER]
			-- Template for `yypact'
		once
			Result := yyfixed_array (<<
			   41,   41,   41,    5, -32768, -32768,   24,   57,   88, -32768,
			 -32768,   41,   41,   41,   41,   41,   41,   41,   41,   41,
			   41,   41,   41,   41,   41, -32768,   43,   43,   88,   74,
			   -4,   -4,   -4,   -4,   -4,   -4, -32768, -32768,   -2,   -2,
			   25, -32768, yyDummy>>)
		end

	yypgoto_template: SPECIAL [INTEGER]
			-- Template for `yypgoto'
		once
			Result := yyfixed_array (<<
			   -1, yyDummy>>)
		end

	yytable_template: SPECIAL [INTEGER]
			-- Template for `yytable'
		once
			Result := yyfixed_array (<<
			    7,    8,   24,   23,   22,   21,   22,   21,   10,    9,
			   26,   27,   28,   29,   30,   31,   32,   33,   34,   35,
			   36,   37,   38,   39,   40,   41,    0,    0,    0,    0,
			   24,   23,   22,   21,   20,   19,   18,   17,   16,   15,
			   14,   13,   12,   11,    5,    4,    0,    0,    3,   24,
			   23,   22,   21,   20,   19,   18,   17,   16,   15,    0,
			   13,    2,    1,   24,   23,   22,   21,   20,   19,   18,
			   17,   16,   15,   14,   13,   12,   11,    0,    0,   25,
			   24,   23,   22,   21,   20,   19,   18,   17,   16,   15,
			    0,   13,   12,   11,   24,   23,   22,   21,   20,   19,

			   18,   17,   16,   15, yyDummy>>)
		end

	yycheck_template: SPECIAL [INTEGER]
			-- Template for `yycheck'
		once
			Result := yyfixed_array (<<
			    1,    2,    6,    7,    8,    9,    8,    9,    3,    4,
			   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,
			   21,   22,   23,   24,    0,    0,   -1,   -1,   -1,   -1,
			    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,
			   16,   17,   18,   19,    3,    4,   -1,   -1,    7,    6,
			    7,    8,    9,   10,   11,   12,   13,   14,   15,   -1,
			   17,   20,   21,    6,    7,    8,    9,   10,   11,   12,
			   13,   14,   15,   16,   17,   18,   19,   -1,   -1,   22,
			    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,
			   -1,   17,   18,   19,    6,    7,    8,    9,   10,   11,

			   12,   13,   14,   15, yyDummy>>)
		end

feature {NONE} -- Semantic value stacks

	yyvs1: SPECIAL [detachable ANY]
			-- Stack for semantic values of type detachable ANY

	yyvsc1: INTEGER
			-- Capacity of semantic value stack `yyvs1'

	yyvsp1: INTEGER
			-- Top of semantic value stack `yyvs1'

	yyspecial_routines1: KL_SPECIAL_ROUTINES [detachable ANY]
			-- Routines that ought to be in SPECIAL [detachable ANY]

	yyvs2: SPECIAL [STRING]
			-- Stack for semantic values of type STRING

	yyvsc2: INTEGER
			-- Capacity of semantic value stack `yyvs2'

	yyvsp2: INTEGER
			-- Top of semantic value stack `yyvs2'

	yyspecial_routines2: KL_SPECIAL_ROUTINES [STRING]
			-- Routines that ought to be in SPECIAL [STRING]

	yyvs3: SPECIAL [EXPRESSION]
			-- Stack for semantic values of type EXPRESSION

	yyvsc3: INTEGER
			-- Capacity of semantic value stack `yyvs3'

	yyvsp3: INTEGER
			-- Top of semantic value stack `yyvs3'

	yyspecial_routines3: KL_SPECIAL_ROUTINES [EXPRESSION]
			-- Routines that ought to be in SPECIAL [EXPRESSION]

feature {NONE} -- Constants

	yyFinal: INTEGER = 41
			-- Termination state id

	yyFlag: INTEGER = -32768
			-- Most negative INTEGER

	yyNtbase: INTEGER = 23
			-- Number of tokens

	yyLast: INTEGER = 103
			-- Upper bound of `yytable' and `yycheck'

	yyMax_token: INTEGER = 277
			-- Maximum token id
			-- (upper bound of `yytranslate'.)

	yyNsyms: INTEGER = 24
			-- Number of symbols
			-- (terminal and nonterminal)

feature -- User-defined features



feature -- create

	make
			-- Create a new calculator
		do
			-- expression is initialized to a default "0" for void safety
			-- this initial expression is guaranteed to be replaced.
			create {VALUE_CONSTANT} expression.make (0) 
			create last_error.make_empty 
			create last_string_value.make_empty
			make_parser_skeleton
			make_scanner
		end
		
feature -- Queries
	expression: EXPRESSION
	last_error : STRING
	
feature -- parsing
	report_error(a_message: STRING)
		do
			last_error := a_message + " (Line " + line.out + ", " + "Column " + column.out + ")" 
		end

	parse_string(str :STRING)
			-- parse the text of this given string
		local
			buf : YY_BUFFER
		do
			create buf.make(str)
			
			reset
			set_input_buffer(buf)
			parse
		end

	parse_file(filename:STRING)
			-- parse the text of the given input file
		local
			a_file: KL_TEXT_INPUT_FILE
		do
			create a_file.make (filename)
			a_file.open_read
			
			if a_file.is_open_read then
				reset
				set_input_buffer (new_file_buffer (a_file))
				parse
				a_file.close
			else
				std.error.put_string ("calculator: cannot read %'"+filename+"%'%N")
			end
		end
	
end
