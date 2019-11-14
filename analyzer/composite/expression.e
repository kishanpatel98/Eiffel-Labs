note
	description: "Summary description for {EXPRESSION}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	EXPRESSION

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		deferred
		end

end
