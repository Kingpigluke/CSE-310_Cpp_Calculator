Simple C++ Console Calculator
A basic command‑line calculator written in C++ that performs addition, subtraction, multiplication, and division.
This version includes safe numeric input handling, operator validation, a loop for repeated calculations, a class‑based structure, and an STL vector to store calculation history.

Instructions for Build and Use
Steps to build and/or run the software
Open the project folder in Visual Studio Code.

Open a terminal inside VS Code (Terminal → New Terminal).

Compile the program using:

Code
g++ calculator.cpp -o calculator
Run the program:

Code
./calculator
(or calculator.exe on Windows)

Instructions for using the software
Enter the first number when prompted.

Enter an operator (+, -, *, or /).

Enter the second number.

The calculator displays the result.

You may choose to view your calculation history.

You may choose to perform another calculation.

Development Environment
To recreate the development environment, install:

Visual Studio Code (latest version)

C/C++ Extension for VS Code (Microsoft)

MinGW‑w64 or MSYS2 with g++ installed

C++17 or newer compiler

Useful Websites to Learn More
These websites were helpful during development:

cplusplus.com – C++ Standard Library Reference

GeeksforGeeks – C++ Tutorials (geeksforgeeks.org in Bing)

Stack Overflow – C++ Q&A

Future Work
Planned improvements and additions:

[ ] Add more operations (power, modulus, square root)

[ ] Add a menu‑based interface

[ ] Save calculation history to a file

[ ] Add colorized terminal output

[ ] Add unit tests for reliability
