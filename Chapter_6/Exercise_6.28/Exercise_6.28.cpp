/*
File name: Exercise_6.28.cpp
Author: Ricardo Garcia
Date: 09/12/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.28 Page 275
Description: Determine if a number is a perfect number.
*/

#include <iostream>
#include <iomanip>

void isPerfect(int);

int main() {

	std::cout << "Perfect Numbers";

	// find the perfer numbers from 1 to 1000
	for (unsigned int number{ 2 }; number <= 1000; ++number) {
		isPerfect(number);
	}

	return 0;
}

// Function that checks if a number is a perfect number
void isPerfect(int number) {

	int divisorSum{ 1 };

	// find the divisors
	for (unsigned int divisor{ 2 }; divisor < number; ++divisor) {

		// calculate divisors
		if (number % divisor == 0)
			divisorSum += divisor;
	}

	// check if number is a perfect number
	if (divisorSum == number) {

		// print the first divisor
		std::cout << '\n' << std::setw(3) << std::right << number << " = 1";

		// Print the rest of the divisors
		for (unsigned int divisor{ 2 }; divisor < number; ++divisor) {
			if (number % divisor == 0)
				std::cout << " + " << divisor;
		}
	}
	
	return;
}