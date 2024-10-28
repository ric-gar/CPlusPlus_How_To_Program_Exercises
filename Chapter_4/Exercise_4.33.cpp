/*
File name: Exercise_4.33.cpp
Author: Ricardo Garcia
Date: 09/01/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.33 Page 155
Description: Determine if three nonzero values can represent the sides of a triangle.
*/

#include <iostream>

int main() {

	// Prompt user to enter first value and read input
	std::cout << "Enter first nonzero double: ";
	double firstEntry;
	std::cin >> firstEntry;

	// Prompt user to enter second value and read input
	std::cout << "Enter second nonzero double: ";
	double secondEntry;
	std::cin >> secondEntry;

	// Prompt user to enter third value and read input
	std::cout << "Enter third nonzero double: ";
	double thirdEntry;
	std::cin >> thirdEntry;

	bool isTriangle{ false };

	// Check if the sides represent a triangle
	if (firstEntry + secondEntry > thirdEntry) {
		if (firstEntry + thirdEntry > secondEntry) {
			if (secondEntry + thirdEntry > firstEntry)
				isTriangle = true;
		}
	}

	// Print if the sides do or don't represent a triangle
	if (isTriangle)
		std::cout << "\nThese sides represent a triangle\n";
	else
		std::cout << "\nThese sides don't represent a triangle\n";
	
	return 0;
}