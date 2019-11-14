﻿note
	generator: "EiffelBuild"
	date: "$Date: 2016-06-07 01:39:46 -0700 (Tue, 07 Jun 2016) $"
	revision: "$Revision: 98864 $"

class
	ETF_GUI

create
	make_and_launch
	
feature {NONE} -- Initialization

	make_and_launch
			-- Create, initialize and launch event loop.
		local
			application: EV_APPLICATION
		do
			create application
			user_create_interface_objects
			user_initialization
				-- The next instruction launches GUI message processing.
				-- It should be the last instruction of a creation procedure
				-- that initializes GUI objects. Any other processing should
				-- be done either by agents associated with GUI elements
				-- or in a separate processor.
			application.launch
				-- No code should appear here,
				-- otherwise GUI message processing will be stuck in SCOOP mode.
		end
		
feature {NONE} -- User Initialization

	user_create_interface_objects
			-- User object creation.
		do
				-- Create Window
			create main_window
		end

	user_initialization
			-- User object initialization.
		do
				-- Show Window
			main_window.show
		end

feature -- Access

	main_window: ETF_MAIN_WINDOW
			-- Application Main Window.	

end

