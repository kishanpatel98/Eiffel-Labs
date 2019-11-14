note
	description: "Summary description for {UNARY_EXPRESSION}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	UNARY_EXPRESSION

inherit
	EXPRESSION

	COMPOSITE[EXPRESSION]

feature -- Queries
	expr: EXPRESSION
		do
			Result := children[children.lower]
		end

feature -- Commands
	make (e: EXPRESSION)
		do
			create children.make
			children.extend (e)
		end

invariant
	unary_operands: children.count = 1
end
