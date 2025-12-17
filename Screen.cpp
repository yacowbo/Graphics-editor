#include <iostream>
#include <vector>
#include "_Screen.h"

using namespace std;

_Screen::_Screen(int _X, int _Y, int _filler, vector<vector<int>> _Vec)  {
	_X = 5;
	_Y = 6;
	_filler = 1;
	_Vec = vector<vector<int>> (_X, vector<int>(_Y, _filler));
	return;
	}

/*_Screen(vector<vector<int>> vec(_X, vector<int>(_Y, _Filler))*/
