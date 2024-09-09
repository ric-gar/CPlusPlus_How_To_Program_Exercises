/*
File name: Exercise_5.12.cpp
Author: Ricardo Garcia
Date: 09/04/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.12 Page 206
Description: Calculate the produce of the odd integers from 1 to 15.
*/

#include <iostream>

int main() {

	unsigned int product{ 1 }; // product sum

	// loop from 1 to 15
	for (unsigned int integer{ 1 }; integer <= 15; integer += 2)
		product *= integer; // calculate product

	// Print result
	std::cout << "Product is: " << product;

	return 0;
}