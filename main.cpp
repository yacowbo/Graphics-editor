#include <iostream>
#include <vector>
#include "_Screen.h"
#include "_Screen.cpp"

using namespace std;

int main(_Screen) {
	cout << "This is a small program designed to help me practice my programming skills." << endl;
	cout << "This prgram allows you to make a digital display using very basic graphics." << endl;
	
	cout << "?instructions?" << endl; //TODO: implament proper instructions for the user

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
