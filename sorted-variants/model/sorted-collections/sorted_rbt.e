note
	description: "[
		{SORTED_RBT} is a concrete implementation of {SORTED_ADT}
		that inherits much of its logic from {SORTED_TREE}. It handles
		all the RBT specific logic itself.
	]"
	author: "Joshua Phillip"
	date: "$Date$"
	revision: "$Revision$"
class
	SORTED_RBT[K -> COMPARABLE, V -> ANY]

inherit
	SORTED_TREE[K, V]

create
	make_empty, make_from_array, make_from_sorted_array

feature{NONE} -- implementation commands

	extend_node(a_item: TUPLE[key: K; val: V]; a_root: detachable NODE[K,V])
			-- helper method to extend `node' with `a_item'
		do
			if not attached a_root then
				create root.make_black(a_item)
			elseif a_root.key > a_item.key then
				if attached a_root.left as left then
					extend_node(a_item, left)
				else
					a_root.left := a_item
					if attached a_root.left as left then
						insert_balance(left)
					end
				end
			elseif a_root.key < a_item.key then
				if attached a_root.right as right then
					extend_node(a_item, right)
				else
					a_root.right := a_item
					if attached a_root.right as right then
						insert_balance(right)
					end
				end
			end
		end

	remove_node(a_node: NODE[K,V])
			-- helper method to remove `node'
		local
			largest: NODE[K,V]
			l_item: TUPLE[K,V]
		do
			if attached a_node.left as left and then attached a_node.right then
				largest := find_largest(left)
				l_item := largest.item
				remove_node(largest)
				a_node.item := l_item
			elseif attached a_node.left as left then
				if not a_node.is_black = left.is_black then
					a_node.set_black
				else
					a_node.set_double_black
				end
				a_node.replace_node(left)
				if a_node.is_double_black then
					remove_balance(a_node)
				end
			elseif attached a_node.right as right then
				if not a_node.is_black = right.is_black then
					a_node.set_black
				else
					a_node.set_double_black
				end
				a_node.replace_node(right)
				if a_node.is_double_black then
					remove_balance(a_node)
				end
			elseif attached a_node.parent as parent then
				if a_node.is_black then
					a_node.set_double_black
				end
				a_node.set_node (void)
				if a_node.is_double_black and then attached parent.right as right then
					remove_balance(right)
				end
			else
				wipe_out
			end
		end


	sorted_to_tree(array: ARRAY[NODE[K,V]])
				-- method to conert `array' to a tree
		do
			root := sorted_to_tree_helper(array, array.lower, array.upper, ((create {DOUBLE_MATH}).log_2(array.count.to_double)).floor)
		end

feature{NONE} -- balancing commands

	insert_balance(a_node: NODE [K, V])
			-- rebalances subtree around `a_node' after node has been inserted
			-- naming convention:
				--p is parent, g is grandparent, gg is great-grandparent,
				--u is unclde, s is sibling, o is outer-child, i is inner-child
		do
			if attached a_node.parent as p and then attached p.parent as gp and then not p.is_black then
				if attached p.sibling as u and then u.is_red then
						-- uncle is red
						-- double rotation may be needed
					p.set_black
					u.set_black
					if attached gp.parent as gg then
						gp.set_red
						if gg.is_red then
							insert_balance(gp)
						end
					end
				elseif a_node = p.outer_child then
						-- left left or right right
						-- double rotation may be needed
					rotate(p)
					p.set_black
					if attached gp.parent as gg then
						gp.set_red
						if gg.is_red then
							insert_balance(gp)
						end
					end
				else
						-- left right or right left
						-- only one rotation needed
					rotate(a_node)
					insert_balance(p)
				end
			end
		end

	remove_balance(a_node: NODE [K, V])
			-- rebalances subtree around `a_node' after node has been removed
			-- naming convention:
				--p is parent, g is grandparent, gg is great-grandparent,
				--u is unclde, s is sibling, o is outer-child, i is inner-child
		do
			if attached a_node.parent as p then
				if attached a_node.sibling as s then
					if s.is_black then
						if attached s.inner_child as i and then i.is_red then
								-- left left or right right
							rotate(s)
							i.set_black
							a_node.set_black
						elseif attached s.outer_child as o and then o.is_red then
								-- left right or right left
							rotate(o)
							o.set_black
							s.set_red
							remove_balance(a_node)
						elseif p.is_black then
								-- both children back
							s.set_red
							p.set_double_black
							remove_balance(p)
						else
							s.set_red
							p.set_black
						end
					else
						rotate(s)
						p.set_red
						s.set_black
						remove_balance(a_node)
					end
				else
					rotate(a_node)
					a_node.set_black
					p.set_red
					if attached p.parent as gp and then attached p.inner_child as i then
						i.set_red
						p.set_black
					end
				end
			else
				a_node.set_black
			end
		end

	rotate(node: NODE[K,V])
			-- calls correct rotate procedure based on node position
		do
			if attached node.parent as p then
				if p.right = node then
					rotate_left(node, p)
				else
					rotate_right(node, p)
				end
			end
		end

	rotate_right(c, p: NODE[K,V])
			-- performs a right rotation on two nodes
		do
			if attached p.parent as g then
				if g.left = p then
					g.left := c
				else
					g.right := c
				end
			else
				root := c
				c.parent := void
			end
			p.left := c.right
			c.right := p
		end

	rotate_left(c, p: NODE[K,V])
			-- performs a left rotation on two nodes
		do
			if attached p.parent as g then
				if g.left = p then
					g.left := c
				else
					g.right := c
				end
			else
				root := c
				c.parent := void
			end
			p.right := c.left
			c.left := p
		end

invariant
	root_is_black:
			-- ensures that the root of the tree is lack
		attached root as r
			implies r.is_black or else r.is_double_black
	no_succesive_red_nodes:
			-- ensures that no consecutive nodes along any path are red
		across current as c all
	 		c.item.is_red implies
	 			((attached c.item.left as left) implies not left.is_red) and then
	 			((attached c.item.right as right) implies not right.is_red)
	 	end
	path_to_leaf_same_length:
			-- ensures that the path to every nleaf has the same number of black nodes
		across current as c all
			c.item.is_leaf and then (attached find_smallest_leaf as small)
			 	implies count_path(c.item) = count_path(small)
		end

end
