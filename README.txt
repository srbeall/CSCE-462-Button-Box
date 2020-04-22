
	This is the README file for the program generator. It contains the
	information required for it to correctly generate a compilable .ino 
	file for the programmable button box.
	
	THE PROGRAM GENERATOR EXECUTABLE IS CURRENTLY ONLY TESTED ON WINDOWS
	THE SOURCE CODE FOR THE GENERATOR IS INCLUDED, AS WELL AS A COMMENTED,
	STRIPPED DOWN VERSION OF THE .INO FILE FOR THE ACTUAL PROGRAM
	
	Instructions for editing of presets:
	1.	Teensyduino and Arduino are REQUIRED if there is desire to change
		presets. Details on how to install can be found here:
			https://www.pjrc.com/teensy/td_download.html
	2.	Edit the preset files found in the "presets" folders. There are more
		details on how to do this further down.
	3.	Run the executable "GenerateButtonBoxProg.exe"
		(this should create the file "buttonbox.ino" in the same folder
	4.  Open the file "buttonbox.ino" in Arduino
	5.	If you haven't already done so, plug in the button box
	6.	The following steps are found in the "Tools" menu in Arduino
		a.	select "Board" and then select "Teensy 3.2 / 3.1"
		b.	select "USB Type" and then select "Keyboard"
		c.	select "CPU Speed" and then select "48 MHz" 
			(this can be increased later if experiencing performance issues)
		d.	select "Keyboard Layout" and then select "US English"
	7.	Click the check icon in the top left of the Arduino window to compile
		and verify the file.
	8.	If it fails to compile, return to step 2 and double check the presets
	9.	If it compiles, press the right arrow icon next to the check icon in
		step 7. This should open a small window telling you to press a button.
	10.	Press the button on the rear of the box next to the microUSB port. The
		red LED on the front panel should blink once.
	11. If this doesn't work, try these steps:
		a.	click the green circle on the small window that says auto
			(you want the circle to go dark, if it went light just click again)
		b. 	click the icon with the downward curving arrow
		c.	when it says "Download Complete", click the icon with the right
			arrow
		d.	after a second or two it should say "Reboot OK", and then the text
			saying to push the button should return.
		e.	this should fix it
	12.	At this point, the box should be ready to go. The button at the top 
		right next to the LED can be used to cycle through the presets. The LED
		will flash a number of times equal to the preset number.
	13. If any errors are encountered, try to reprogram using step 11 first,
		and if errors persist return to step 2.
	
	The button box numbering layout is shown here: 
	|TOP OF FRONT PANEL|
	|16  19  9  6  3  0|
	|17  20 22  7  4  1|
	|18  21 23  8  5  2|
	--------------------
	(Yes it looks strange, but it is based on pin number)
	
	Button 0 is reserved for changing the preset
	Presets cycle through in ascending order
	There are 5 presets available
	By default preset 1 contains some common and some less common multi-key
	binds, for example ctrl-alt-delete, ctrl-c, ctrl-v, etc, in no particular
	order
	By default preset 2 contains some "unique" keybinds that can be use for 
	addition inputs in a game or similar. All of these are semi-random 
	combinations of 3 letters.
	By default presets 3, 4 and 5 are "blank".
	Preset files are named "presetX.txt" where 'X' is the preset
	number starting at '1', and are located in the "presets" folder
	
	The only things that should be altered are the "values" which are the
	second word on each .
	
	The format of a preset file should not be altered as the ordering and
	spacing is critical for the generator to write the file correctly. Any 
	formatting errors can and will cause the program to written incorrectly
	There should be exactly 153 lines in each preset file. There should be an
	empty line after each BUTTON block, making each block a total of 9 lines
	long
	
	There is an example preset file in the resources folder. This file is the
	same as the default for preset 1
	
	The Modifier value is one or more modifier key names seperated by 
	the '|' symbol. Example for one:
		Modifier MODIFIERKEY_SHIFT
	and for two:
		Modifier MODIFIERKEY_CTRL | MODIFIERKEY_ALT
	If a Modifier key is not needed, replace its value with '0', Example:
		Modifier 0
		
	Each Key value is exactly one normal key name. Here are some examples:
		Key1 KEY_DELETE
		Key2 KEY_Q
	For any Keys that are not needed, replace its value with '0', Example:
		Key3 0	
	
	A list of normal key values and modifier key values can be found in 
	"resources\keylist.txt" or at https://www.pjrc.com/teensy/td_keyboard.html

	The source code for the generator can be found in the "source" folder, and
	a commented, basic version of the acutal program can be found in the 
	"USBpbb" folder