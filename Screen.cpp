#include <iostream>
#include <vector>
#include "Screen.h"

using namespace std;

Screen::Screen() {
	_X = 0;
	_Y = 0;
	_filler = 0;
	_Vec = vector<vector<int>> (_X, vector<int>(_Y, _filler));
	cout << "Screen constructor called." << endl;
	return;
}

Screen::~Screen() {
	cout << "Screen destructor called." << endl;
	return;
}

vector<vector<int>> Screen::_Print_Screen(int _X, int _Y, int _filler, vector<vector<int>> _Vec)  {
	_X = 0;
	_Y = 0;
	_filler = 0;
	_Vec = vector<vector<int>> (_X, vector<int>(_Y, _filler));
	return _Vec;
	}

void Screen::_Display_Screen(int _X, int _Y, int _filler, vector<vector<int>> _Vec) {
	for (int i = 0; i < _X; i++) {
		for (int j = 0; j < _Y; j++) {
			cout << _Vec[i][j] << " ";
		}
		cout << endl;
	}
}