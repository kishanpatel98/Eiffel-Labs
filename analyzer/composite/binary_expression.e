note
	description: "Summary description for {BINARY_EXPRESSION}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	BINARY_EXPRESSION

inherit
	EXPRESSION

	COMPOSITE[EXPRESSION]

feature -- Queries
	left: EXPRESSION
		do
			Result := children[children.lower]
		end

	right: EXPRESSION
		do
			Result := children[children.lower + 1]
		end

feature -- Commands
	make (l: EXPRESSION; r: EXPRESSION)
		do
			create children.make
			children.extend (l)
			children.extend (r)
		end

invariant
	binary_operands: children.count = 2
end
