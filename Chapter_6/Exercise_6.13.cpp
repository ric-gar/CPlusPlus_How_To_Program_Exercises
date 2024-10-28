/*
File name: Exercise_6.13.cpp
Author: Ricardo Garcia
Date: 09/11/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.13 Page 273
Description: Rounds a floating-point number to the nearest integer.
*/

#include <iostream>
#include <cmath>

int main() {

	// Prompt user for input
	std::cout << "Type the end-of-file indicator to terminate input:"
		<< "\n   On UNIX/Linux/Mac OS X type <Ctrl> d then press Enter"
		<< "\n   On Windows type <Ctrl> z then press Enter"
		<< "\nEnter a number to round: ";
	double x;

	// Loop until EOF is entered
	while (std::cin >> x) {

		// Print the rounding
		std::cout << x << " rounds to " << floor(x + 0.5);

		// Prompt user for input
		std::cout << "\n\nType the end-of-file indicator to terminate input:"
			<< "\n   On UNIX/Linux/Mac OS X type <Ctrl> d then press Enter"
			<< "\n   On Windows type <Ctrl> z then press Enter"
			<< "\nEnter a number to round: ";
	}

	return 0;
}