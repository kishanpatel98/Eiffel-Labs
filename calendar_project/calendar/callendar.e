note
	description: "[ R1-R6 ]"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CALLENDAR


create -- Declare list of possible features that can be used as constructors
	make
	


feature -- Attributes
	balance : INTEGER
	credit : INTEGER

feature -- Constructor
	make (a_credit : INTEGER)
		-- Initialize cct with credit for zero balance
		do
			balance := 0
			credit := a_credit
		ensure
			zero_balance:
				balance = 0
			credits_properly_set:
				credit = a_credit
		end


invariant
	credit_non_negative:
		credit >= 0

	balance_not_exceeding_credit:
		balance + credit >= 0
end
