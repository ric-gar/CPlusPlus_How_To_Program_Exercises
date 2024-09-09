/*
File name: Exercise_5.23.cpp
Author: Ricardo Garcia
Date: 09/07/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.23 Page 208
Description: Print a diamond asterisk using only asterisk, space, or new line character.
*/

#include <iostream>

int main() {

	// Print top half of diamond
	for (unsigned int row{ 1 }; row <= 5; ++row) {

		for (unsigned int spaces{ row }; spaces < 5; ++spaces)
			std::cout << ' ';

		for (unsigned int asterisk{ 1 }; asterisk <= (2 * row - 1); ++asterisk)
			std::cout << '*';

		std::cout << '\n';

	}

	// Print bottom half of diamond
	for (unsigned int row{ 1 }; row <= 4; ++row) {

		for (unsigned int spaces{ 1 }; spaces <= row; ++spaces)
			std::cout << ' ';

		for (unsigned int asterisk{ 1 }; asterisk <= (9 - 2 * row); asterisk++)
			std::cout << '*';

		std::cout << '\n';

	}
	
	std::cout << '\n'; return 0;
}