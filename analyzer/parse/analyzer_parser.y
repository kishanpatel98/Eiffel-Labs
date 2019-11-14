--
--	grammar for simple calculator
--
%{
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

%}

-- the symbol `expr' is the root of the parse tree
%start	expr

-- these are tokens that appear as part of the grammar in addition to single characters
%token<STRING>	 	NUMBER -- an integer number
%token<STRING>	 	REAL -- a floating-point number
%token				EOL
%token				TK_PLUS
%token				TK_MINUS
%token				TK_TIMES
%token				TK_DIVIDE
%token				TK_EQUALS
%token				TK_NOT_EQUALS
%token				TK_GT
%token				TK_GTEQ
%token				TK_LT
%token				TK_LTEQ
%token				TK_IFF
%token				TK_AND
%token				TK_OR
%token				TK_IMPLIES
%token				TK_NOT
%token				TK_LPAREN
%token				TK_RPAREN

-- Convention: since plus and minus are specified earlier than times and divide,
-- plus and minus have lower precedence.
%left TK_IFF
%left TK_OR TK_IMPLIES
%left TK_AND
%right TK_NOT
%left TK_LT TK_LTEQ TK_GT TK_GTEQ TK_EQUALS TK_NOT_EQUALS
%left TK_PLUS TK_MINUS -- %left here specifies that operators are left-associative
%left TK_TIMES TK_DIVIDE

-- The non-terminal expr has the type EXPRESSION
-- The EXPRESSION class is defined separately by the user. 
%type<EXPRESSION> 				expr

%%

-- Start defining the CFG for the expressions.

expr : 
	NUMBER {
		create {VALUE_CONSTANT} $$.make (($1).to_real)
		expression := $$
	}
	|
	TK_MINUS NUMBER {
		$2.prepend("-")
		create {VALUE_CONSTANT} $$.make (($2).to_real)
		expression := $$
	}
	|
	REAL {
		create {VALUE_CONSTANT} $$.make (($1).to_real)
		expression := $$
	}
	|
	TK_MINUS REAL {
		$2.prepend("-")
		create {VALUE_CONSTANT} $$.make (($2).to_real)
		expression := $$
	}
	|
	expr TK_PLUS expr {
		create {ADDITION} $$.make ($1, $3)
		expression := $$
	}
	|	
	expr TK_MINUS expr {
		create {SUBTRACTION} $$.make ($1, $3)
		expression := $$
	}
	|
	expr TK_TIMES expr {
		create {MULTIPLICATION} $$.make ($1, $3)
		expression := $$
	}
	|	
	expr TK_DIVIDE expr {
		create {DIVISION} $$.make ($1, $3)
		expression := $$
	}
	|	
	expr TK_EQUALS expr {
		create {EQUALS} $$.make ($1, $3)
		expression := $$
	}
	|	
	expr TK_NOT_EQUALS expr {
		create {NOT_EQUALS} $$.make ($1, $3)
		expression := $$
	}
	|	
	expr TK_GT expr {
		create {GREATER_THAN} $$.make ($1, $3)
		expression := $$
	}
	|	
	expr TK_GTEQ expr {
		create {GREATER_THAN_OR_EQUALS} $$.make ($1, $3)
		expression := $$
	}
	|	
	expr TK_LT expr {
		create {LESS_THAN} $$.make ($1, $3)
		expression := $$
	}
	|	
	expr TK_LTEQ expr {
		create {LESS_THAN_OR_EQUALS} $$.make ($1, $3)
		expression := $$
	}
	|	
	expr TK_IFF expr {
		create {IFF} $$.make ($1, $3)
		expression := $$
	}
	|	
	expr TK_AND expr {
		create {CONJUNCTION} $$.make ($1, $3)
		expression := $$
	}
	|	
	expr TK_OR expr {
		create {DISJUNCTION} $$.make ($1, $3)
		expression := $$
	}
	|	
	expr TK_IMPLIES expr {
		create {IMPLICATION} $$.make ($1, $3)
		expression := $$
	}
	|	
	TK_NOT expr {
		create {NEGATION} $$.make ($2)
		expression := $$
	}
	|
	TK_LPAREN expr TK_RPAREN {
		$$ := $2
		expression := $$
	}
	;

%%

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