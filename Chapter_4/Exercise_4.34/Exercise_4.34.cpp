/*
File name: Exercise_4.33.cpp
Author: Ricardo Garcia
Date: 09/01/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.33 Page 156
Description: Determine if three nonzero integers are the sides of a right triangle
*/

#include <iostream>

int main() {

	// Prompt user to enter first nonzero integer and read input
	std::cout << "Enter first nonzero integer: ";
	int firstInt;
	std::cin >> firstInt;

	// Prompt user to enter second nonzero integer and read input
	std::cout << "Enter second nonzero integer: ";
	int secondInt;
	std::cin >> secondInt;

	// Prompt user to enter third nonzero integer and read input
	std::cout << "Enter third nonzero integer: ";
	int thirdInt;
	std::cin >> thirdInt;

	bool isRightTriangle;

	// check if the sides represent a right triangle using Pythagorean theorem
	if (firstInt * firstInt + secondInt * secondInt == thirdInt * thirdInt)
		isRightTriangle = true;
	else if (firstInt * firstInt + thirdInt * thirdInt == secondInt)
		isRightTriangle = true;
	else if (secondInt * secondInt + thirdInt * thirdInt == firstInt * firstInt)
		isRightTriangle = true;
	else
		isRightTriangle = false;

	// Print if the sides represent a triangle
	if (isRightTriangle)
		std::cout << "The sides represent a right triangle.\n";
	else
		std::cout << "The sides don't represent a right triangle\n";

	return 0;
}