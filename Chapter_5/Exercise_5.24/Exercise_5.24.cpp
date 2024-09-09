/*
File name: Exercise_5.24.cpp
Author: Ricardo Garcia
Date: 09/07/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.24 Page 208
Description: Print an asterisk diamond with a size of an odd number in the range of 1 to 19.
*/

#include <iostream>

int main() {

	// Prompt user and read input
	std::cout << "Enter diamond size (odd number in the range of 1 to 19): ";
	int diamondSize{ 0 };
	std::cin >> diamondSize;

	// Check that value entered
	while (diamondSize % 2 == 0 || diamondSize < 1 || diamondSize > 19) {

		// Prompt user and read input
		std::cout << "\nError: Invalid number entered."
			<< "\nEnter diamond size (odd number in the range of 1 to 19: ";
		std::cin >> diamondSize;
	}

	std::cout << '\n';

	// Print top half of diamond
	for (unsigned int row{ 1 }; row <= (diamondSize / 2 + 1); ++row) {

		// Print spaces for each row
		for (unsigned int spaces{ row }; spaces < (diamondSize / 2 + 1); ++spaces)
			std::cout << ' ';

		// Print asterisks for each row
		for (unsigned int asterisk{ 1 }; asterisk <= (2 * row - 1); ++asterisk)
			std::cout << '*';

		std::cout << '\n';
	}

	// Print bottom half of diamond
	for (unsigned int row{ 1 }; row <= (diamondSize / 2); ++row) {
		
		// Print spacess for each row
		for (unsigned int spaces{ 1 }; spaces <= row; ++spaces)
			std::cout << ' ';

		// Print asterisks for each row
		for (unsigned int asterisk{ 1 }; asterisk <= (diamondSize - 2 * row); ++asterisk)
			std::cout << '*';

		std::cout << '\n';
	}

	std::cout << '\n'; return 0;
}