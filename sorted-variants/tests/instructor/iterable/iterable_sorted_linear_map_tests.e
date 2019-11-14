note
	description: "Testing sorted linear map"
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ITERABLE_SORTED_LINEAR_MAP_TESTS

inherit
	ITERABLE_SORTED_MAP_TESTS

create
	make

feature -- Query
	new_map: SORTED_LINEAR_MAP[INTEGER, STRING]
			-- A new sorted linear map
		do
			create Result.make_empty
		end
end
