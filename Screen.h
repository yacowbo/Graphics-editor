/**
 * @file Screen.h
 * @author Jordin Goerz (Github: yacowbo ; Email: jordinrialey@gmail.com)
 * @brief Header file for the Screen class, which manages screen properties and matrix generation.
 * @version 0.1
 * @date 2025-12-23
 * 
 * @copyright Copyright (c) 2025
 * 
 * @description This file contains the declaration of the Screen class, which manages screen properties (width, height, filler character).
 * The class provides constructors, destructors, and methods to generate and display a 2D matrix representing the screen.
 * 
 * @details The Screen class creates a 2D character matrix with user-specified dimensions and fills it with a specified character.
 * Methods are provided to retrieve and modify screen dimensions and the filler character used for matrix generation and display.
 *
 * @note This implementation uses C++11 features (vector and standard library).
 */
#ifndef Screen_H
#define Screen_H

#include <iostream>
#include <vector>

using namespace std;
class Screen {

	private:
// Member variables
	int S_X;           // X coordinate
	int S_Y;           // Y coordinate
	char S_filler;    // Filler character for screen rendering

	public:
// Constructors - Destructors
	// Default constructor - initializes screen with default values
	Screen();

	// Parameterized constructor - initializes screen with specified dimensions and filler
	Screen(int S_X, int S_Y, char S_filler);

	// Destructor - cleans up screen resources
	~Screen();

// Getters
	// Returns the X coordinate of the screen
	int _get_X();

	// Returns the Y coordinate of the screen
	int _get_Y();

	// Returns the filler character used for rendering
	char _get_filler();

// Setters
	// Sets the X coordinate of the screen
	void _set_X(int _X);

	// Sets the Y coordinate of the screen
	void _set_Y(int _Y);

	// Sets the filler character for screen rendering
	void _set_filler(char _filler);

// Matrix display function
	// Generates and displays a 2D matrix with specified dimensions filled with the filler character
	vector<vector<char>> _Print_Screen();
};
#endif