/*
File name: Exercise_4.29.cpp
Author: Ricardo Garcia
Date: 09/01/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.29 Page 155
Description: Print a checkerboard pattern using the three output statements
*/

#include <iostream>

int main() {

	unsigned int rowCounter{ 0 };

	// Process checkered board by row
	while (rowCounter < 8) {

		// Output space if row is odd
		if (rowCounter % 2 == 1)
			std::cout << ' ';

		unsigned int columnCounter{ 0 };

		// Process checkered board by column
		while (columnCounter < 8) {
			std::cout << "* ";

			columnCounter++;
		}

		std::cout << std::endl;

		rowCounter++;
	}

	return 0;
}