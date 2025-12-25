/**
 * @file Cursor.h
 * @author Jordin goerz (Github: yacowbo ; email: jordinrialey@gmail.com)
 * @brief this is the Cursor class header file
 * @version 0.1
 * @date 2025-12-23
 * 
 * @copyright Copyright (c) 2025
 * 
 * @description: This file contains the declaration of the Cursor class, which represents a cursor with x and y coordinates and a color attribute.
 * The class provides constructors, destructors, and getter and setter methods for its attributes.
 * 
 * @details The Cursor class encapsulates the properties of a cursor, allowing for easy manipulation and retrieval of its position and color.
 * 
 * @note This implementation adheres to the C++17 standard.
 */

#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Cursor {
  // member values
    private:
    // x and y coordinates
      int C_X;
      int C_Y;

    // color attribute
      char C_Pixel;

  // member functions
    public:
      // constructors and destructors
      Cursor(int x, int y, char color) : C_X(x), C_Y(y), C_Pixel(color) {} // Parameterized Constructor
      
      ~Cursor(); // default Destructor

      // getters
        int getX() const { return C_X; } // Getter for X coordinate
        
        int getY() const { return C_Y; } // Getter for Y coordinate
        
        char getColor() const { return C_Pixel; } // Getter for color
      
      // setters  
        void setX(int x) { C_X = x; } // Setter for X coordinate
        
        void setY(int y) { C_Y = y; } // Setter for Y coordinate
        
        void setColor(char color) { C_Pixel = color; } // Setter for color

      // friend functions
        void printCursorData(vector<vector<char>> C_position) const {} // print function, used to print the screen with the new cursor information
    
      };