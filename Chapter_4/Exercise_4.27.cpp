/*
File name: Exercise_4.27.cpp
Author: Ricardo Garcia
Date: 09/01/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.27 Page 155
Description: Read a five-digit integer and determine if the number is a palindrome.
*/

#include <iostream>

int main() {

	// Prompt user to enter five-digit integer and read input
	std::cout << "Enter a five-digit integer: ";
	unsigned int fiveDigit;
	std::cin >> fiveDigit;

	// Check if number is a palindrome
	// if (first digit == last digit)
	if ( (fiveDigit / 10000) == (fiveDigit % 10) ) {
		// if (second digit == fourth digit)
		if (((fiveDigit / 1000) % 10) == ((fiveDigit % 100) / 10))
			std::cout << fiveDigit << " is a palindrome!";
		else
			std::cout << fiveDigit << " is not a palindrome!";
	} else
		std::cout << fiveDigit << " is not a palindrome!";
		
	std::cout << "\n"; return 0;
}