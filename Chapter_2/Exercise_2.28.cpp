/*
File name: Exercise_2.28.cpp
Author: Ricardo Garcia
Date: 08/15/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 2.28 Page 71
Description: Read a 5-digit integer from the user and seperate each digit by a space. 
*/

#include <iostream>

int main() {
	int var{ 0 };
	
	// Print prompt and read input
	std::cout << "Enter a five-digit integer: ";
	std::cin >> var;

	// Output the 5-digit number seperated by a space
	std::cout << var / 10000 << "  "
		<< (var / 1000) % 10 << "  "
		<< (var / 100) % 10 << "  "
		<< (var / 10) % 10 << "  "
		<< var % 10;
	return 0;
}
