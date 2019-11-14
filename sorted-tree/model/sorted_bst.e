note
	description: "[
		{SORTED_BST} is a concrete implementation of sorted tree. It
		inherits all of {SORTED_TREE}'s features and contracts and
		implements its deferred features.
		
		You must implement to specifications/tests
		wherever you see
			-- TO DO --
			check False end
	]"
	author: "Oppong Michael"
	date: "$Date$"
	revision: "$Revision$"

class
	SORTED_BST[K -> COMPARABLE, V -> ANY]

inherit
	SORTED_TREE_ADT[K,V]

create
	make_empty

feature{NONE} -- private commands

	extend_node(a_item: TUPLE[key:K; val:V]; a_node: NODE[K,V])
			-- helper method to extend `node' with `a_item'

		local
			new: NODE[K,V]
		do
			-- TO DO --done

			new := create {NODE[K,V]}.make (a_item)

			if new > a_node  then
				if attached a_node.right as r then
					extend_node(a_item, r)
				else
					a_node.set_right(new)
				end
			end



			if new < a_node  then
				if attached a_node.left as l then
					extend_node(a_item, l)
				else
					a_node.set_left(new)
				end

			end



		end

	remove_node(a_node: NODE[K,V]) --EDIT THE CODEEEEEEEEEE IMPORTANT DO IT DO NOT FORGET@#$%^&*
  -- helper method to remove `node'
		 local
		 temp:NODE[K,V]
		 do
			  if a_node = root and a_node.is_leaf then
			  	Current.wipe_out
			  end

			  if a_node.is_leaf then
			  	a_node.make_void
			  end

			  if attached a_node.right  as ar  and a_node.left=Void then
			     a_node.replace_node (ar)
			  end
			  if attached a_node.left  as al and a_node.right=Void then
			     a_node.replace_node (al)
			  end
			  if attached a_node.right as ar and attached a_node.left  as al then
			   temp:=current.find_smallest (ar)
			   a_node.set_item(temp.item)

			   if attached temp.right as tr and attached temp.parent as tp then
			    tp.set_right (tr)
			    temp.make_void

			    else
			    temp.make_void
			   end
			  end
			 end

		end
