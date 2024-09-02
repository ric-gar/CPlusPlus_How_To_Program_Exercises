/*
File name: Exercise_4.35b
Author: Ricardo Garcia
Date: 09/01/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.35 Part b Page 156
Description: Estimate the value of mathematical constant e to a desired accuracy entered by the user.
*/

#include <iostream>

int main() {

	// Prompt user for desired accuracy and read input
	std::cout << "Enter desired accuracy (number of terms): ";
	unsigned int numTerms;
	std::cin >> numTerms;

	// Initialize e constant variable to first term
	double eConstant{ 1 };

	// Loop until number of terms have been processed
	while (numTerms > 1) {

		// initialize factorial variables
		unsigned int factorialTerms{ numTerms - 1 };
		unsigned int factorialSum{ 1 };

		// Loop until factorial terms have been processed
		while (factorialTerms > 1) {

			// calculate factorial
			factorialSum *= factorialTerms;

			--factorialTerms; // terminates loop
		}

		// calculate e constant
		eConstant += 1.0 / factorialSum;

		--numTerms; // terminates loop
	}

	// Print result
	std::cout << "e constant: " << eConstant << "\n";

	return 0;
}