/**
 * @file main.cpp
 * @author Jordin goerz (Github: yacowbo ; Email: jordinrialey@gmail.com)
 * @brief Main file for the Screen class demonstration.
 * @version 0.1
 * @date 2025-12-23
 *
 * @copyright Copyright (c) 2025
 * @description This is the main file for a simple C++ program that demonstrates the usage of the Screen class.
 * The program initializes a Screen object and provides basic user interaction to exit the program.
 * 
 * @details The program begins by displaying introductory messages to the user, explaining its purpose.
 * It then creates an instance of the Screen class with specified dimensions and filler value.
 * The user is prompted to press '0' to exit the program, with input validation to
 * ensure correct input.
 * 
 * @note This implementation adheres to the C++17 standard. 
 */

#include <iostream>
#include <vector>
#include "Screen.h"
#include "Cursor.h"
#include <cstring>
#include <iomanip>

using namespace std;

string intro = "Welcome to the Screen Demo Program!\n"
               "This program demonstrates the usage of the Screen class.\n"
               "You can create a screen with specific dimensions and a filler value.\n"
               "Press '0' to exit the program.";

int main() {
	cout << intro << endl; //TODO: implement proper instructions for the user
	Screen theScreen(5, 6, '#');
	cout << "Screen created with dimensions 5x6 and filler '#'" << endl;
	cout << "Please, enter your cursor information, starting with the X coordinate."
	<< endl;
	int cursorX;
	cin >> cursorX;
	cout << "Now, please enter your information for the Y coordinate."
	<< endl;
	int cursorY;
	cin >> cursorY;
	cout << "" << endl;
	Cursor theCursor(cursorX, cursorY, '*');
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
