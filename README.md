#ADT based graphics designing program#

overview:
This program is designed to allow the user to create very basic pixel art designs, Using text based input within the consel, the user will be prompted to chose the length and width of the canvas they are working on and then they will be askked which color they would like to use colors are denoted by the first leter of the colors word itself are associated with a color the user will then use the paint/erase functions to color the desired design onto a matrix (ie: the canvas from befor) after the user is satisfied with there work they can then enter "save" which will save and reprint the design as a .md file, typing "save" again will update this file however if the user is completly satisfied with their design they may type "save and exit" to do so, alternativly if the user choses to they may type "exit" which will exit imediatly which will delete the any current design that hasn't be saved

program loop:
system generates a blank screen, and then prompts the user for a set of three numbers;

the 1st number is the _X coordinate,
the 2nd number is the _Y coordinate,
the 3rd number is the _color of the space which the _X and _Y coordinates point to

the screen function will then reprint the screen with the new colored space
	
the main function will then ask for another set of numbers

this will repeat until the user decides to save their progress or save and exit the program, this also allows for the user to make designs

needed member functions for the Screen class:
Screen()
Screen(int _X, int _Y, int _filler)
~Screen()
vector<vector<int>> _Generate_Screen(int X, int Y, int filler, vector<vector<int>> _Matrix)

needed member functions for the cursor class: