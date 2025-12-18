#include <iostream>
#include <vector>
#include "Screen.h"
#include "Screen.cpp"

using namespace std;

int main() {
	cout << "This is a small program designed to help me practice my programming skills." << endl;
	cout << "This prgram allows you to make a digital display using very basic graphics." << endl;
	
	cout << "?instructions?" << endl; //TODO: implament proper instructions for the user
	Screen myScreen(5, 6, 1);

	int number;
	cout << "press 0 to leave." << endl;
	cin >> number;
	while (number != 0) {
		if (number == 0) {
			break;
		} else {
			cout << "invalid input, please, press 0 to leave." << endl;
			cin >> number;
		}
	}
	return 0;
}
