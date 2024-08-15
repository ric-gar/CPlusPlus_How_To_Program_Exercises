/*
File name: Exercise_2.27.cpp
Author: Ricardo Garcia
Date: 08/15/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 2.27 Page 70-71
Description: Read a single character from user and output the integer value
			 of the entered character. 
*/

#include <iostream>

int main() {
	char var;
	
	// Print prompt and read input
	std::cout << "Enter a single character: ";
	std::cin >> var;
	
	// Print integer value of the character
	std::cout << "Integer value of the character: " << static_cast<int>(var) << std::endl;

	return 0;
}