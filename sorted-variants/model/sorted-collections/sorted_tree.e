note
	description: "[
		{SORTED_TREE} is the parent of all the tree based ADT variants.
		It handles all the common logic and contracts of any tree based
		implementation.
	]"
	author: "Joshua Phillip"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SORTED_TREE[K -> COMPARABLE, V -> ANY]

inherit
	SORTED_ADT[K,V]

feature{NONE} -- parameters

	root: detachable NODE[K, V]
			-- root of the tree

feature{SORTED_MAP_DESIGN} -- constructors

	make_from_array(array: ARRAY[TUPLE[K,V]])
			-- creates a sorted tree from an unsorted `array'
		do
			across array as l_c loop
				extend (l_c.item)
			end
		end

	make_from_sorted_array(array: ARRAY[TUPLE[K,V]])
			-- creates a sorted tree from a sorted `array'
		do
			sorted_to_tree (to_pair_array(array))
		end

feature -- commands

	extend(a_item: TUPLE[key: K; value: V])
			-- extends tree to include `a_item'
		do
			extend_node(a_item, root)
		end

	remove(a_key: K)
			-- removes `a_item' from tree if it exists
		do
			if attached element(a_key) as n then
				remove_node(n)
			end
		end

	wipe_out
			-- removes all elements from tree
		do
			root := void
		end

	extend_from_array(other: ARRAY[TUPLE[K,V]])
			-- inserts elements of `other' into `Current'
			-- it is recomended to use regular extend for a few elements
		local
			util: UTIL[NODE[K,V]]
		do
			sorted_to_tree(util.mergesort (util.concatenate (as_array, to_pair_array(other))))
		end


feature -- queries

--	item alias "[]" (a_key: K): V
--			-- returns the value associated with `a_key'
--		do
--			check attached element(a_key) as el then
--				Result := el.value
--			end
--		end

	as_array: ARRAY[NODE[K,V]]
			-- array representation of tree
		do
			create Result.make_empty
			to_array(root, Result)
		end

	element(a_key: K): detachable NODE[K,V]
			-- returns node with associated `a_key' from tree
		do
			Result := find_element(a_key, root)
		end

	min: detachable NODE[K,V]
			-- returns minimum element in tree
		do
			if attached root as r then
				Result := find_smallest(r).item
			end
		end

	max: detachable NODE[K,V]
			-- returns maximum element in tree
		do
			if attached root as r then
				Result := find_largest(r).item
			end
		end

	is_empty: BOOLEAN
			-- returns whether the tree is empty
		do
			Result := not attached root
		end

feature{NONE} -- private commands

	remove_node(node: NODE[K,V])
			-- helper method to remove `node'
		deferred
		end

	extend_node(a_item: TUPLE[K,V]; node: detachable NODE[K,V])
			-- helper method to extend `node' with `a_item'
		deferred
		end

	sorted_to_tree(array: ARRAY[NODE[K,V]])
			-- method to conert `array' to a tree
		deferred
		end

feature{NONE} -- private queries

	to_array(node: detachable NODE[K,V]; arr: ARRAY[NODE[K,V]])
			-- recursive helper method to print tree in order
		do
			if attached node then
				to_array(node.left, arr)
				arr.force(node, arr.count + arr.lower)
				to_array(node.right, arr)
			end
		end

	sorted_to_tree_helper(arr: ARRAY[NODE[K,V]]; low, high, height: INTEGER): detachable NODE[K,V]
			-- recursive helper method for sorted_to_tree
		local
			mid: INTEGER
		do
			if high >= low then
				mid := low + (high - low) // 2
				Result := arr[mid]
				if height > 0 then
					Result.set_black
				end
				Result.left := sorted_to_tree_helper (arr, low, mid - 1, height - 1)
				Result.right := sorted_to_tree_helper (arr, mid + 1, high, height - 1)
			end
		end

	find_element(a_key: K; node: detachable NODE[K,V]): detachable NODE[K,V]
			-- recursive helper method to find element
		do
			if not attached node or else node.key ~ a_key then
				Result := node
			elseif node.key > a_key then
				Result := find_element(a_key, node.left)
			else
				Result := find_element(a_key, node.right)
			end
		end

	find_largest (node: NODE [K,V]): NODE [K,V]
			--finds the `node' with the largest element
		do
			if attached node.right as r then
				Result := find_largest (r)
			else
				Result := node
			end
		end

	find_smallest (node: NODE [K,V]): NODE [K,V]
			--finds the `node' with the smallest element
		do
			if attached node.left as l then
				Result := find_smallest (l)
			else
				Result := node
			end
		end

	black_path_length(cur_node, leaf_node: detachable NODE[K,V]; length: INTEGER): INTEGER
			-- a helper method that returns how many black `node' are in a path
		local
			len: INTEGER
		do
			if attached cur_node and attached leaf_node then
				if cur_node.is_black then
					len := length + 1
				end
				if cur_node.key ~ leaf_node.key then
					Result := len
				elseif leaf_node.key > cur_node.key  then
					Result := black_path_length(leaf_node, cur_node.left, len)
				else
					Result := black_path_length(leaf_node, cur_node.right, len)
				end
			end
		end

	count_path(a_node: NODE[K,V]): INTEGER
			-- returns how many black `a_node' are in a path
		do
			result := black_path_length(root, a_node, 0)
		end

	find_smallest_leaf: detachable NODE [K, V]
			-- a helper method to find the smallest key in a tree that is a leaf
		local
			smallest: NODE [K, V]
		do
			if attached root as r then
				smallest := find_smallest (r)
				if attached smallest.right as right then
					Result := find_smallest (right)
				else
					Result := smallest
				end
			end
		end


invariant
		items_increasing_order:
				-- ensures that every nodes left child is smaller and right child is greater if it exists
			across Current as c all
				(attached c.item.left as left implies c.item.key > left.key) and then
				(attached c.item.right as right implies c.item.key < right.key)
			end
		child_has_correct_parents:
				-- ensures that every nodes child pointer has its parent pointing back at it
			across Current as c all
				(attached c.item.left as left implies left.parent = c.item)	and then
				(attached c.item.right as right implies right.parent = c.item)
			end

end
