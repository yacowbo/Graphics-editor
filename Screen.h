#include <vector>
#include <iostream>

using namespace std;

class Screen {
	private:
	vector<vector<int>> _Vec;
	int _X;
	int _Y;
	/* int _color; */
	int _filler;
	
	public:
// constructors - destructors
	// basic constructor
	Screen();

	// basic destructor
	~Screen();

	// mutators, this should allow the constructors to allocate space to the screen matrix and draw it with a filler value
	vector<vector<int>> _Print_Screen(int _X, int _Y, int _filler, vector<vector<int>> _Vec);
	
	// accessor to display the screen matrix
	void _Display_Screen(int _X, int _Y, int _filler, vector<vector<int>> _Vec);
/*
// accessors - and mutators
	// checks for the color of the space in the matrix by checking for the integer value associated with the x and y position of the space in the matrix
	_CheckColor();
	
	// basic mutators, used to update the 
	_Change color();*/
};