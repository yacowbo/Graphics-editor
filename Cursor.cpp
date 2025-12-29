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

#pragma once

#include <iostream>
#include <vector>
#include <cstring>
#include "Cursor.h"

using namespace std;

class Cursor {
    private:
      int C_X;
      int C_Y;
      char C_color;

    public:
        Cursor(); // default Constructor

        ~Cursor(); // Destructor

    // Parameterized Constructor
        Cursor(int x, int y, char color) : C_X(x), C_Y(y), C_color(color) {
            vector<vector<char>> C_position(x, vector<char>(y, color));
        }
    // getters
        int getX() const { return C_X; } // Getter for X coordinate
        
        int getY() const { return C_Y; } // Getter for Y coordinate
        
        char getColor() const { return C_color; } // Getter for color

    // setters
        void setX(int x) { // Setter for X coordinate
            askCursorX() << x;
            C_X = x;
        };
        
        void setY(int y) { C_Y = y; } // Setter for Y coordinate
        
        void setColor(char color) { C_color = color; } // Setter for color

    // friend functions
        int askCursorX() const {
            cout << "Please enter the X coordinate for the cursor: ";
            int x;
            cin >> x;
            return x;
        }

        int askCursorY() const {
            cout << "Please enter the Y coordinate for the cursor: ";
            int y;
            cin >> y;
            return y;
        }
    };