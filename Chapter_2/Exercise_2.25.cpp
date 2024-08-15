/*
File name: Exercise_2.25.cpp
Author: Ricardo Garcia
Date: 08/15/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 2.25 Page 70
Description: Read two integers from the user and determine if the first number
			 is a multiple of the second. 
*/

#include <iostream>

int main() {
	int num1{ 0 };
	int num2{ 0 };

	// Prompt user to enter two numbers and read input
	std::cout << "Enter two numbers: ";
	std::cin >> num1 >> num2;

	// First number is a multiple of the second number
	if (num2 % num1 == 0)
		std::cout << num1 << " is a multiple of " << num2 << std::endl;
	// First number is not a multiple of the second number
	if (num2 % num1 != 0)
		std::cout << num1 << " is not a multiple of " << num2 << std::endl;

	return 0;
}