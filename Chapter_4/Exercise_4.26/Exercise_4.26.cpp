/*
File name: Exercise_4.26.cpp
Author: Ricardo Garcia
Date: 08/31/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.26 Page 154-155
Description: Print a hollow square size out of asterisks and blanks.
*/

#include <iostream>

int main() {

	// Prompt user to enter the square size
	std::cout << "Enter the size of the square (1 - 20): ";
	unsigned int squareSize;
	std::cin >> squareSize;

	unsigned int rowCounter{ 1 };

	// loop rows
	while (rowCounter <= squareSize) {

		unsigned int columnCounter{ 1 };

		// loop columns
		while (columnCounter <= squareSize) {

			// first row is asterisks
			if (rowCounter == 1)
				std::cout << "*";
			// last row is asterisks
			else if (rowCounter == squareSize)
				std::cout << "*";
			// first column is asterisk
			else if (columnCounter == 1)
				std::cout << "*";
			// last column is asterisk
			else if (columnCounter == squareSize)
				std::cout << "*";
			// space between first and last column
			else
				std::cout << " ";
			columnCounter++;
		}

		std::cout << "\n";
		++rowCounter;
	}

	return 0;
}