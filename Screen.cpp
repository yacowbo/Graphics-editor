#include <iostream>
#include <vector>
#include "Screen.h"

using namespace std;

Screen::Screen() {return;}

Screen::Screen(int _X, int _Y, int _filler) {
	this->_X = _X;
	this->_Y = _Y;
	this->_filler = _filler;
	_Matrix = vector<vector<int>> (_X, vector<int>(_Y, _filler));
	_Generate_Screen(_X, _Y, _filler, _Matrix) << _Matrix;
	cout << "Screen constructor called." << endl;
	return;
}

Screen::~Screen() {
	cout << "Screen destructor called." << endl;
	return;
}

vector<vector<int>> Screen::_Generate_Screen(int X, int Y, int filler, vector<vector<int>>)  {
	_Matrix = vector<vector<int>> (X, vector<int>(Y, filler));
	return;
	}

int Screen::_get_X() {
	int X = 5;
	X = this->_X;
	return X;
}

int Screen::_get_Y() {
	int Y = 6;
	Y = this->_Y;
	return Y;
}

int Screen::_get_filler() {
	int filler = 1;
	filler = this->_filler;
	return filler;
}

void Screen::_set_X(int _X) {
	this->_X = _X;
}

void Screen::_set_Y(int _Y) {
	this->_Y = _Y;
}

void Screen::_set_filler(int _filler) {
	this->_filler = _filler;
}

/*
void Screen::_Print_Screen(int _X, int _Y, int _filler, vector<vector<int>> _Vec) {
	for (int i = 0; i < _X; i++) {
		for (int j = 0; j < _Y; j++) {
			cout << _Vec[i][j] << " ";
		}
		cout << endl;
	}
}*/