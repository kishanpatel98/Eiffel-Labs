deferred class ANALYZER_SCANNER

inherit

	YY_COMPRESSED_SCANNER_SKELETON
		-- This class declares: last_token, last_integer, last_string_value
		-- text (the current string being matched by a rule)
		rename
			make as make_compressed_scanner_skeleton,
			reset as reset_compressed_scanner_skeleton
		end
		
	ANALYZER_TOKENS

feature -- Status report

	valid_start_condition (sc: INTEGER): BOOLEAN
			-- Is `sc' a valid start condition?
		do
			Result := (sc = INITIAL)
		end

feature {NONE} -- Implementation

	yy_build_tables
			-- Build scanner tables.
		do
			yy_nxt := yy_nxt_template
			yy_chk := yy_chk_template
			yy_base := yy_base_template
			yy_def := yy_def_template
			yy_ec := yy_ec_template
			yy_meta := yy_meta_template
			yy_accept := yy_accept_template
		end

	yy_execute_action (yy_act: INTEGER)
			-- Execute semantic action.
		do
			inspect yy_act
when 1 then
--|#line 47 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 47")
end
-- ignore whitespaces
when 2 then
--|#line 49 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 49")
end
 -- return an end-of-line token when the new line character is encountered
			last_token := EOL 
		
when 3 then
--|#line 53 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 53")
end
last_token := TK_EQUALS
when 4 then
--|#line 54 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 54")
end
last_token := TK_NOT_EQUALS
when 5 then
--|#line 55 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 55")
end
last_token := TK_PLUS
when 6 then
--|#line 56 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 56")
end
last_token := TK_MINUS
when 7 then
--|#line 57 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 57")
end
last_token := TK_TIMES
when 8 then
--|#line 58 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 58")
end
last_token := TK_DIVIDE
when 9 then
--|#line 59 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 59")
end
last_token := TK_GTEQ
when 10 then
--|#line 60 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 60")
end
last_token := TK_GT
when 11 then
--|#line 61 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 61")
end
last_token := TK_LTEQ
when 12 then
--|#line 62 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 62")
end
last_token := TK_LT
when 13 then
--|#line 63 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 63")
end
last_token := TK_AND
when 14 then
--|#line 64 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 64")
end
last_token := TK_OR
when 15 then
--|#line 65 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 65")
end
last_token := TK_IMPLIES
when 16 then
--|#line 66 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 66")
end
last_token := TK_IFF
when 17 then
--|#line 67 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 67")
end
last_token := TK_NOT
when 18 then
--|#line 68 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 68")
end
last_token := TK_LPAREN
when 19 then
--|#line 69 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 69")
end
last_token := TK_RPAREN
when 20 then
--|#line 71 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 71")
end
 -- return a digit token and store the integer value in last_integer_value, which the parser will use
			-- last_integer_value := text.to_integer
			-- We did not opt for the above because the string may
			-- go beyond the capacity of 64-bit integer, so 
			-- we store its string value and covert it into VALUE (at the .y file).
			last_string_value := text
			last_token := NUMBER
			-- NUMBER is a token name that we made up, and this
			-- should be declared and referenced in .y file.
		
when 21 then
--|#line 82 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 82")
end

		                 -- last_real_value := text.to_real
						 last_string_value := text -- keep the original string rep. for VALUE, if applicable
		                 last_token := REAL
        
when 22 then
--|#line 88 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 88")
end
  -- . here means any character not matched by the previous rules,
		   -- in which case we simply set last_token to be the code of character.
		   -- Since the parser will not refer to this character, it will be
		   -- considered as syntax error. 
			last_token := text_item (1).code
		
when 23 then
--|#line 0 "analyzer_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'analyzer_scanner.l' at line 0")
end
last_token := yyError_token
fatal_error ("scanner jammed")
			else
				last_token := yyError_token
				fatal_error ("fatal scanner internal error: no action found")
			end
		end

	yy_execute_eof_action (yy_sc: INTEGER)
			-- Execute EOF semantic action.
		do
			terminate
		end

feature {NONE} -- Table templates

	yy_nxt_template: SPECIAL [INTEGER]
			-- Template for `yy_nxt'
		once
			Result := yy_fixed_array (<<
			    0,    4,    5,    6,    7,    8,    9,   10,   11,   12,
			    4,   13,   14,   15,   16,   17,   18,   19,   20,    4,
			    4,   21,   21,   21,   21,   22,   31,   24,   23,   25,
			   21,   24,   21,   25,   33,   32,   31,   30,   29,   28,
			   27,   26,   34,    3,   34,   34,   34,   34,   34,   34,
			   34,   34,   34,   34,   34,   34,   34,   34,   34,   34,
			   34,   34,   34,   34, yy_Dummy>>)
		end

	yy_chk_template: SPECIAL [INTEGER]
			-- Template for `yy_chk'
		once
			Result := yy_fixed_array (<<
			    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    5,    7,    5,    7,   13,   31,   14,   13,   14,
			   21,   25,   21,   25,   30,   26,   24,   20,   19,   17,
			   16,   15,    3,   34,   34,   34,   34,   34,   34,   34,
			   34,   34,   34,   34,   34,   34,   34,   34,   34,   34,
			   34,   34,   34,   34, yy_Dummy>>)
		end

	yy_base_template: SPECIAL [INTEGER]
			-- Template for `yy_base'
		once
			Result := yy_fixed_array (<<
			    0,    0,    0,   42,   43,   19,   43,   20,   43,   43,
			   43,   43,   43,   11,   17,   27,   25,   25,   43,   27,
			   18,   28,   43,   43,   24,   21,   20,   43,   43,   43,
			   14,   14,   43,   43,   43, yy_Dummy>>)
		end

	yy_def_template: SPECIAL [INTEGER]
			-- Template for `yy_def'
		once
			Result := yy_fixed_array (<<
			    0,   34,    1,   34,   34,   34,   34,   34,   34,   34,
			   34,   34,   34,   34,   34,   34,   34,   34,   34,   34,
			   34,   34,   34,   34,   34,   34,   34,   34,   34,   34,
			   34,   34,   34,   34,    0, yy_Dummy>>)
		end

	yy_ec_template: SPECIAL [INTEGER]
			-- Template for `yy_ec'
		local
			an_array: ARRAY [INTEGER]
		once
			create an_array.make_filled (0, 0, 256)
			yy_ec_template_1 (an_array)
			yy_ec_template_2 (an_array)
			Result := yy_fixed_array (an_array)
		end

	yy_ec_template_1 (an_array: ARRAY [INTEGER])
			-- Fill chunk #1 of template for `yy_ec'.
		do
			yy_array_subcopy (an_array, <<
			    0,    1,    1,    1,    1,    1,    1,    1,    1,    2,
			    3,    1,    1,    4,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    2,    1,    1,    1,    1,    1,    1,    1,
			    5,    6,    7,    8,    1,    9,   10,   11,   12,   12,
			   12,   12,   12,   12,   12,   12,   12,   12,    1,    1,
			   13,   14,   15,   16,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,   17,    1,    1,    1,    1,    1,    1,    1,

			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			   18,   19,    1,    1,    1,    1,   20,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1, yy_Dummy>>,
			1, 200, 0)
		end

	yy_ec_template_2 (an_array: ARRAY [INTEGER])
			-- Fill chunk #2 of template for `yy_ec'.
		do
			yy_array_subcopy (an_array, <<
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1, yy_Dummy>>,
			1, 57, 200)
		end

	yy_meta_template: SPECIAL [INTEGER]
			-- Template for `yy_meta'
		once
			Result := yy_fixed_array (<<
			    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1, yy_Dummy>>)
		end

	yy_accept_template: SPECIAL [INTEGER]
			-- Template for `yy_accept'
		once
			Result := yy_fixed_array (<<
			    0,    0,    0,   24,   22,    1,    2,    1,   18,   19,
			    7,    5,    6,    8,   20,   12,    3,   10,    2,   22,
			   22,    1,    4,   13,    0,   20,   11,   15,    9,   14,
			    0,   21,   16,   17,    0, yy_Dummy>>)
		end

feature {NONE} -- Constants

	yyJam_base: INTEGER = 43
			-- Position in `yy_nxt'/`yy_chk' tables
			-- where default jam table starts

	yyJam_state: INTEGER = 34
			-- State id corresponding to jam state

	yyTemplate_mark: INTEGER = 35
			-- Mark between normal states and templates

	yyNull_equiv_class: INTEGER = 1
			-- Equivalence code for NULL character

	yyReject_used: BOOLEAN = false
			-- Is `reject' called?

	yyVariable_trail_context: BOOLEAN = false
			-- Is there a regular expression with
			-- both leading and trailing parts having
			-- variable length?

	yyReject_or_variable_trail_context: BOOLEAN = false
			-- Is `reject' called or is there a
			-- regular expression with both leading
			-- and trailing parts having variable length?

	yyNb_rules: INTEGER = 23
			-- Number of rules

	yyEnd_of_buffer: INTEGER = 24
			-- End of buffer rule code

	yyLine_used: BOOLEAN = false
			-- Are line and column numbers used?

	yyPosition_used: BOOLEAN = false
			-- Is `position' used?

	INITIAL: INTEGER = 0
			-- Start condition codes

feature -- User-defined features



feature {NONE} -- Initialization

	make 
		do
			make_compressed_scanner_skeleton
		end

feature -- reset

	reset 
		do
			reset_compressed_scanner_skeleton
		end

end
