#include <vector>
#include <iostream>

using namespace std;

class Screen {
	private:
	vector<vector<int>> _Vec; // 2D vector to represent the screen, called _Vec.
	int _X; // _X coordinate.
	int _Y; // _Y coordinate.
	/* int _color; */
	int _filler; // filler value for the screen, should be set to all 1's.
	
	public:
// constructors - destructors
	// defualt constructor
	Screen();

	// specific screen constructor
	Screen(int _X, int _Y, int _filler);
	// basic destructor
	~Screen();

// accessors
	// function for creating the screen matrix
	vector<vector<int>> _Generate_Screen(int _X, int _Y, int _filler, vector<vector<int>> _Vec);

	// function to get the _X coordinate
	void _get_X(int _X);

	// function to get the _Y coordinate
	void _get_Y(int _Y);

	// function to get the _filler value
	void _get_filler(int _filler);
/*
// mutators
	// Function for printing the screen matrix
	void _Print_Screen(int _X, int _Y, int _filler, vector<vector<int>> _Vec);
	
	// function to set the _X coordinate
	void _set_X(int _X);

	// function to set the _Y coordinate
	void _set_Y(int _Y);

	// function to set the _filler value
	void _set_filler(int _filler);
*/
} myScreen;