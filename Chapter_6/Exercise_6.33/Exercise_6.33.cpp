/*
File name: Exercise_6.33.cpp
Author: Ricardo Garcia
Date: 09/13/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.33 Page 276
Description: Simulate coin tossing and print the results.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int flip();

int main() {
	
	srand(static_cast<unsigned int>(time(0))); // seed srand to machine time

	unsigned int tails{ 0 };
	unsigned int heads{ 0 };

	// Loop 100 times
	for (unsigned int i{ 0 }; i < 100; i++) {
		
		int result{ flip() }; // flip coin

		// results is tails
		if (result == 0) {
			tails++;
			std::cout << "Tails\n";
		}
		// result is heads
		else if (result == 1) {
			heads++;
			std::cout << "Heads\n";
		}
		// Error message
		else
			std::cout << "\nError: flip() generated a result other than 0 or 1";
	}

	// Print total results
	std::cout << "\nTotal Tails: " << tails
		<< "\nTotal Heads: " << heads;

	return 0;
}

// return 0 or 1
int flip() {
	return rand() % 2;
}