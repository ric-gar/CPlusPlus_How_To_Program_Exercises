/*
File name: Exercise_4.28.cpp
Author: Ricardo Garcia
Date: 09/01/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.28 Page 155
Description: Convert a binary number (from user input) and convert it to its decimal equivalent.
*/

#include <iostream>

int main() {

	// Prompt user to enter binary value and read input
	std::cout << "Enter a binary value: ";
	unsigned int binaryNum{ 0 };
	std::cin >> binaryNum;

	unsigned int decimalValue{ 0 }; // holds conversion from binary to decimal

	// Process the rightmost bit
	if (binaryNum % 10 == 1)
		decimalValue = 1;

	binaryNum /= 10; // remove the rightmost bit
	unsigned int powerOfTwo{ 2 }; // base 2 for binary

	// Process binary value
	while (binaryNum > 0) {

		// check if there is a 1 bit
		if (binaryNum % 10 == 1)
			decimalValue += powerOfTwo;

		binaryNum /= 10; // remove the rightmost bit
		powerOfTwo *= 2; // multiply by 2 for each digit
	}

	std::cout << "Decimal value: " << decimalValue << "\n";
	return 0;
}