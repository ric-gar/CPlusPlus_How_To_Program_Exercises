/*
File name: Exercise_4.35a
Author: Ricardo Garcia
Date: 09/01/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.35 Part a Page 156
Description: Calculate the factorial of a nonnegative integer value.
*/

#include <iostream>

int main() {

	// Prompt user to enter value and read input
	std::cout << "Enter nonnegative value: ";
	unsigned int userInput;
	std::cin >> userInput;

	unsigned int factorialSum{ 1 };

	// loop from n(n-1)(n-2) to (2)(1)
	while (userInput > 1) {

		// calculate factorial
		factorialSum *= userInput;
		--userInput; // decrement to terminate loop
	}

	// Print result
	std::cout << "Factorial: " << factorialSum << "\n";
	return 0;
}