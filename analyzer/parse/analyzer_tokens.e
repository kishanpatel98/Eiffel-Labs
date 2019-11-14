note

	description: "Parser token codes"
	generator: "geyacc version 4.1"

deferred class ANALYZER_TOKENS

inherit

	YY_PARSER_TOKENS

feature -- Last values

	last_detachable_any_value: detachable ANY
	last_string_value: STRING

feature -- Access

	token_name (a_token: INTEGER): STRING
			-- Name of token `a_token'
		do
			inspect a_token
			when 0 then
				Result := "EOF token"
			when -1 then
				Result := "Error token"
			when NUMBER then
				Result := "NUMBER"
			when REAL then
				Result := "REAL"
			when EOL then
				Result := "EOL"
			when TK_PLUS then
				Result := "TK_PLUS"
			when TK_MINUS then
				Result := "TK_MINUS"
			when TK_TIMES then
				Result := "TK_TIMES"
			when TK_DIVIDE then
				Result := "TK_DIVIDE"
			when TK_EQUALS then
				Result := "TK_EQUALS"
			when TK_NOT_EQUALS then
				Result := "TK_NOT_EQUALS"
			when TK_GT then
				Result := "TK_GT"
			when TK_GTEQ then
				Result := "TK_GTEQ"
			when TK_LT then
				Result := "TK_LT"
			when TK_LTEQ then
				Result := "TK_LTEQ"
			when TK_IFF then
				Result := "TK_IFF"
			when TK_AND then
				Result := "TK_AND"
			when TK_OR then
				Result := "TK_OR"
			when TK_IMPLIES then
				Result := "TK_IMPLIES"
			when TK_NOT then
				Result := "TK_NOT"
			when TK_LPAREN then
				Result := "TK_LPAREN"
			when TK_RPAREN then
				Result := "TK_RPAREN"
			else
				Result := yy_character_token_name (a_token)
			end
		end

feature -- Token codes

	NUMBER: INTEGER = 258
	REAL: INTEGER = 259
	EOL: INTEGER = 260
	TK_PLUS: INTEGER = 261
	TK_MINUS: INTEGER = 262
	TK_TIMES: INTEGER = 263
	TK_DIVIDE: INTEGER = 264
	TK_EQUALS: INTEGER = 265
	TK_NOT_EQUALS: INTEGER = 266
	TK_GT: INTEGER = 267
	TK_GTEQ: INTEGER = 268
	TK_LT: INTEGER = 269
	TK_LTEQ: INTEGER = 270
	TK_IFF: INTEGER = 271
	TK_AND: INTEGER = 272
	TK_OR: INTEGER = 273
	TK_IMPLIES: INTEGER = 274
	TK_NOT: INTEGER = 275
	TK_LPAREN: INTEGER = 276
	TK_RPAREN: INTEGER = 277

end
