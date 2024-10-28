/*
File name: Exercise_4.35c.cpp
Author: Ricardo Garcia
Date: 09/01/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.35 Part c Page 156
Description: Calculate e^x with a desired accuracy entered by the user.
*/

#include <iostream>

int main() {

	// Prompt user for x and read input
	std::cout << "Enter x: ";
	unsigned int x;
	std::cin >> x;

	// Prompt user for accuracy and read input
	std::cout << "Enter desired accuracy (number of terms): ";
	unsigned int numTerms;
	std::cin >> numTerms;

	double ex{ 1 }; // initialize ex to first term

	// loop until desired accuracy
	while (numTerms > 1) {

		// initialize numerator variables
		unsigned int squaredTerms{ numTerms - 1 };
		unsigned int squaredSum{ 1 };

		// loop until numerator terms are calculted
		while (squaredTerms > 0) {

			squaredSum *= x; // calculate numerator (x^terms)

			--squaredTerms; // terminates loop
		}

		// Initialize denominator variables
		unsigned int factorialTerms{ numTerms - 1 };
		unsigned int factorialSum{ 1 };

		// loop until denominator terms are calculated
		while (factorialTerms > 1) {

			factorialSum *= factorialTerms; // calculate denominator (factorial)

			--factorialTerms; // terminates loop
		}

		ex += static_cast<double>(squaredSum) / factorialSum; // calculate e^x

		--numTerms; // terminates outer loop
	}

	// Print results
	std::cout << "e^x: " << ex << "\n";

	return 0;
}