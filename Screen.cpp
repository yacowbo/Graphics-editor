#include <iostream>
#include <vector>
#include "Screen.h"

using namespace std;

Screen::Screen() {return;}

Screen::Screen(int _X, int _Y, int _filler) {
	_Vec = vector<vector<int>> (_X, vector<int>(_Y, _filler));
	this->_X = _X;
	this->_Y = _Y;
	this->_filler = _filler;
	return;
}

Screen::~Screen() {
	cout << "Screen destructor called." << endl;
	return;
}

vector<vector<int>> Screen::_Generate_Screen(int _X, int _Y, int _filler, vector<vector<int>> _Vec)  {
	_Vec = vector<vector<int>> (_X, vector<int>(_Y, _filler));
	return _Vec;
	}

void Screen::_get_X(int _X) {
	_X = this->_X;
	return;
}

void Screen::_get_Y(int _Y) {
	_Y = this->_Y;
	return;
}

void Screen::_get_filler(int _filler) {
	_filler = this->_filler;
	return;
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