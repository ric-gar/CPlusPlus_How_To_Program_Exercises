/*
File name: Exercise_5.19.cpp
Author: Ricardo Garcia
Date: 09/05/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.19 Page 207
Description: Calculate the value of pi, using the infinite series formula, in tabular format,
			 and up to 200,000 terms.
*/

#include <iostream>
#include <iomanip>

int main() {

	// set decimal accuracy to 15 decimal places
	std::cout << std::fixed << std::setprecision(15);

	double pi{ 0 }; // holds calculated infinite series

	// Print table header
	std::cout << std::setw(6) << "Term #"
		<< std::setw(20) << "pi Approximation" << '\n';

	// loop the 200,000 terms for the infinite series
	for (unsigned int term{ 1 }, denominator{ 1 }; term <= 200000; ++term, denominator += 2) {

		// Print term number
		std::cout << std::setw(6) << term;

		// check if term is even or odd
		if (term % 2 == 1)
			pi += 4.0 / denominator;
		else
			pi -= 4.0 / denominator;

		// Print pi approximated
		std::cout << std::setw(20) << pi << '\n';
	}

	std::cout << '\n'; return 0;
}