/*
File name: Exercise_2.24.cpp
Author: Ricardo Garcia
Date: 08/15/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 2.24 Page 70
Description: Determine if the number entered is odd or even. 
*/

#include <iostream>

int main() {
	int num{ 0 };
	// Prompt user to enter a number and read input
	std::cout << "Enter an integer: ";
	std::cin >> num;

	// Number is even
	if (num % 2 == 0)
		std::cout << num << " is even" << std::endl;
	// Number is odd
	if (num % 2 == 1)
		std::cout << num << " is odd" << std::endl;

	return 0;
}