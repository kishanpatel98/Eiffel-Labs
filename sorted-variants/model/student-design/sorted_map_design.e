note
	description: "Summary description for {SORTED_MAP_DESIGN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SORTED_MAP_DESIGN [K -> COMPARABLE, V -> ANY]

inherit
	SORTED_MAP_ADT [K, V]

feature -- attributes
	implementation: SORTED_ADT [K, V]
			-- inefficient but abstract implementation of sorted map
		deferred
		end

feature{NONE} -- constructors

	make_empty
			-- creates a sorted map without any elements
		do
			implementation.make_empty
		end
end
