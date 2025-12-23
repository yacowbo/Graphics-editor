#ifndef Screen_H
#define Screen_H

#include <iostream>
#include <vector>

using namespace std;
class Screen {

	private:
// member variables
	int _X; // _X coordinate.
	int _Y; // _Y coordinate.
	/* int _color; */
	int _filler; // filler value for the screen, should be set to all 1's.
	
	public:
// constructors - destructors
	// defualt constructor
	Screen();

	Screen(int _X, int _Y, int _filler);

	// basic destructor
	~Screen();

// accessors
	// function for creating the screen matrix
	vector<vector<int>> _Generate_Screen(int X, int Y, int filler, vector<vector<int>>);

// getters
	// function to get the _X coordinate
	int _get_X();

	// function to get the _Y coordinate
	int _get_Y();

	// function to get the _filler value
	int _get_filler();

// setters
	// function to set the _X coordinate
	void _set_X(int _X);

	// function to set the _Y coordinate
	void _set_Y(int _Y);

	// function to set the _filler value
	void _set_filler(int _filler);
};
#endif