
# Graphics Editor

A C++ screen and cursor management system demonstrating object-oriented design principles.

## Overview

This project provides `Screen` and `Cursor` classes for managing a 2D character-based display. It allows users to create screens with custom dimensions and filler characters, and position cursors within them.

## Features

- **Screen Management**: Create screens with specified dimensions and filler characters
- **Cursor Positioning**: Define cursor position (X, Y) and appearance
- **2D Matrix Display**: Generate and display character matrices
- **Getter/Setter Methods**: Easy property access and modification

## Project Structure

```
.
├── main.cpp           # Program entry point and user interaction
├── Screen.h/.cpp      # Screen class declaration and implementation
├── Cursor.h/.cpp      # Cursor class declaration and implementation
├── .vscode/
│   ├── launch.json    # Debug configuration
│   └── tasks.json     # Build configuration
└── README.md
```

## Requirements

- **Compiler**: g++-13 or later
- **Standard**: C++17
- **Debugger**: GDB

## Building & Running

**Build**:
```bash
g++-13 -fdiagnostics-color=always -g main.cpp Screen.cpp Cursor.cpp -o program
```

**Run**:
```bash
./program
```

**VS Code Debug**: Press `F5` to launch the debugger

## Usage Example

```cpp
Screen theScreen(5, 6, '#');  // Create 5x6 screen with '#' filler
Cursor theCursor(2, 3, '*');  // Create cursor at (2,3) with '*' symbol
```

## Author

Jordin Goerz  
GitHub: [yacowbo](https://github.com/yacowbo)  
Email: jordinrialey@gmail.com

## License

Copyright (c) 2025
