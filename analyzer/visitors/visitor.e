note
	description: "Summary description for {VISITOR}."
	author: "Jackie and You"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	VISITOR

feature -- binary expressions

	visit_addition (e: ADDITION)
		deferred
		end

	visit_conjunction (e: CONJUNCTION)
		deferred
		end

	visit_disjunction (e: DISJUNCTION)
		deferred
		end

	visit_division (e: DIVISION)
		deferred
		end

	visit_equals (e: EQUALS)
		deferred
		end

	visit_greater_than (e: GREATER_THAN)
		deferred
		end

	visit_greater_than_or_equals (e: GREATER_THAN_OR_EQUALS)
		deferred
		end

	visit_iff (e: IFF)
		deferred
		end

	visit_implication (e: IMPLICATION)
		deferred
		end

	visit_less_than (e: LESS_THAN)
		deferred
		end

	visit_less_than_or_equals (e: LESS_THAN_OR_EQUALS)
		deferred
		end

	visit_multiplication (e: MULTIPLICATION)
		deferred
		end

	visit_not_equals (e: NOT_EQUALS)
		deferred
		end

	visit_subtraction (e: SUBTRACTION)
		deferred
		end


feature -- unary expressions

	visit_negation (e: NEGATION)
		deferred
		end

feature -- expression

	visit_value_constant (e: VALUE_CONSTANT)
		deferred
		end


end
