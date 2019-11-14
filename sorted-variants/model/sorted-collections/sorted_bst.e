note
	description: "[
		{SORTED_BST} is a concrete implementation of {SORTED_ADT}
		that inherits much of its logic from {SORTED_TREE}. It handles
		all the BST specific logic itself.
	]"
	author: "Joshua Phillip"
	date: "$Date$"
	revision: "$Revision$"

class
	SORTED_BST[K -> COMPARABLE, V -> ANY]

inherit

	SORTED_TREE[K, V]

create
	make_empty, make_from_array, make_from_sorted_array

feature{NONE} -- implementation commands

	extend_node(a_item: TUPLE[key: K; val:V]; a_node: detachable NODE[K, V])
			-- helper method to extend `node' with `a_item'

		do
			if not attached a_node then
				root := a_item
			elseif a_node.key > a_item.key then
				if attached a_node.left as left then
					extend_node(a_item, left)
				else
					a_node.left := a_item
				end
			else
				if attached a_node.right as right then
					extend_node(a_item, right)
				else
					a_node.right := a_item
				end
			end
		end

	remove_node(a_node: NODE[K,V])
			-- helper method to remove `node'
		local
			largest: NODE[K,V]
			l_item: TUPLE[K,V]
		do
			if attached a_node.left as left and attached a_node.right then
				largest := find_largest(left)
				l_item := largest.item
				remove_node(largest)
				a_node.item := l_item
			elseif attached a_node.left as left then
				a_node.replace_node (left)
			elseif attached a_node.right as right then
				a_node.replace_node (right)
			elseif root /~ a_node then
				a_node.set_node(void)
			else
				wipe_out
			end
		end

	sorted_to_tree(array: ARRAY[NODE[K,V]])
			-- method to conert `array' to a tree
		do
			root := sorted_to_tree_helper(array, array.lower, array.upper, 0)
		end

end
