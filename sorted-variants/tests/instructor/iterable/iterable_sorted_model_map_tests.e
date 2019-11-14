note
	description: "Testing sorted model map"
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ITERABLE_SORTED_MODEL_MAP_TESTS

inherit
	ITERABLE_SORTED_MAP_TESTS

create
	make

feature -- Query
	new_map: SORTED_MODEL_MAP[INTEGER, STRING]
			-- A new sorted model map
		do
			create Result.make_empty
		end
end
