/*
File name: Exercise_5.20.cpp
Author: Ricardo Garcia
Date: 09/05/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.20 Page 207
Description: Calculate Pythagorean triples in table format with sides no larger than 500.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

	// Print table header
	std::cout << std::setw(6) << "Side 1"
		<< std::setw(10) << "Side 2"
		<< std::setw(14) << "Hypotenuse" << '\n';
	
	for ( unsigned int side1{ 1 }; side1 <= 500; ++side1 ) {
		for ( unsigned int side2{ side1 }; side2 <= 500; ++side2 ) {
			for ( unsigned int hypotenuse{ 1 }; hypotenuse <= 500; ++hypotenuse ) {
				if (pow(side1, 2) + pow(side2, 2) == pow(hypotenuse, 2)) {
					// Print Pythagorean triple
					std::cout << std::setw(6) << side1
						<< std::setw(10) << side2
						<< std::setw(14) << hypotenuse << '\n';
				}
			}
		}
	}

	std::cout << '\n'; return 0;
}