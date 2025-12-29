/**
 * @file Cursor.cpp
 * @author yacowbo (GitHub: yacowbo ; email: jordinrialey@gmail.com)
 * @brief this is the Cursor class implementation file
 * @version 0.1
 * @date 2025-12-22
 * 
 * @copyright Copyright (c) 2025
 * 
 * @description: This file contains the implementation of the Cursor class, which represents a cursor with x and y coordinates and a color attribute.
 * The class provides constructors, destructors, and getter and setter methods for its attributes.
 * 
 * @details The Cursor class encapsulates the properties of a cursor, allowing for easy manipulation and retrieval of its position and color.
 * 
 * @note This implementation adheres to the C++17 standard.
 */

#include <iostream>
#include <vector>
#include <cstring>
#include "Cursor.h"

using namespace std;

Cursor::~Cursor() {
	cout << "Cursor destructor called." << endl;
}