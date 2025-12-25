/**
 * @file Screen.cpp
 * @author Jordin Goerz (Github: yacowbo ; Email: jordinrialey@gmail.com)
 * @brief Implementation of the Screen class, which manages screen properties and matrix generation.
 * @version 0.1
 * @date 2025-12-23
 * 
 * @copyright Copyright (c) 2025
 * 
 * @description This file contains the implementation of the Screen class, which manages screen properties 
 * such as width (X), height (Y), and filler character. The class provides constructors, destructors, and methods 
 * to generate and display a 2D character matrix representing the screen.
 * 
 * @details The Screen class encapsulates the properties of a screen, allowing for creation and manipulation
 * of a 2D character matrix with specified dimensions. Methods are provided to retrieve and modify screen
 * dimensions and the filler character used for matrix initialization and display.
 * 
 * @note This implementation uses C++11 features (vector and standard library).
 */

#include <iostream>
#include <vector>
#include "Screen.h"
#include "Cursor.h"

using namespace std;

Screen::Screen() {
	cout << "Screen default constructor called." << endl;	
	return;
}

Screen::Screen(int S_X, int S_Y, char S_filler) {
	this->S_X = S_X;
	this->S_Y = S_Y;
	this->S_filler = S_filler;
	_Print_Screen();
	cout << "Screen parameterized constructor called." << endl;
	return;
}

Screen::~Screen() {
	cout << "Screen destructor called." << endl;
	return;
}

int Screen::_get_X() {
	int X;
	X = this-> S_X;
	return X;
}

int Screen::_get_Y() {
	int Y;
	Y = this-> S_Y;
	return Y;
}

char Screen::_get_filler() {
	char filler = '#';
	filler = this-> S_filler;
	return filler;
}

void Screen::_set_X(int _X) {
	this-> S_X = _X;
}

void Screen::_set_Y(int _Y) {
	this-> S_Y = _Y;
}

void Screen::_set_filler(char _filler) {
	this-> S_filler = _filler;
}

vector<vector<char>> Screen::_Print_Screen() {
	vector<vector<char>> _Matrix(S_X, vector<char>(S_Y, S_filler));
	for (int i = 0; i < S_X; i++) {
		for (int j = 0; j < S_Y; j++) {
			cout << _Matrix[i][j] << " ";
		}
		cout << endl;
	}
	return _Matrix;
}