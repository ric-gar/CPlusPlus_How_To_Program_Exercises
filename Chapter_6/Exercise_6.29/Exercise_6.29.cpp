/*
File name: Exercise_6.29.cpp
Author: Ricardo Garcia
Date: 09/12/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.29 Page 276
Description: Find the number of primes from 2 to 10,000.
*/

#include <iostream>
#include <cmath>

bool isPrime(int);

int main() {

	std::cout << "Prime numbers:"; // header

	// Check if the first 10,000 numbers are prime
	for (unsigned int count{ 2 }; count <= 10'000; ++count) {
		
		// Print number if it is prime
		if (isPrime(count))
			std::cout << '\n' << count;
	}

	return 0;
}

// Determine if a number is prime
bool isPrime(int number) {
	
	// Loop from 2 to number
	for (unsigned int count{ 2 }; count <= static_cast<int>(sqrt(number)); ++count) {
		
		// return false if number is not prime
		if (number % count == 0)
			return false;
	}

	// number is prime return true
	return true;
}