/*
File name: Exercise_5.11.cpp
Author: Ricardo Garcia
Date: 09/04/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.11 Page 206
Description: Find the smallest integer entered with the first number entered
			 indicates how many numbers will be entered.
*/

#include <iostream>

int main() {

	// Prompt user and read input
	std::cout << "First, enter how many integers you will enter followed by the integers."
		<< "For example, to enter three numbers: 3 -1 -5 10"
		<< "\nEnter: ";
	int numIntegers{ 0 }; // number of integers that will be entered
	std::cin >> numIntegers;

	unsigned int counter{ 0 }; // counter for while loop
	int smallest{ INT_MAX }; // largest maximum int value
	int someInt{ 0 }; // accepts integer values entered

	// Loop until the number of integers have been entered
	while (counter < numIntegers) {

		// the integer values entered
		std::cin >> someInt;

		// check if the integer is the smallest value
		if (someInt < smallest)
			smallest = someInt;

		counter++; // terminates while loop
	}

	// Print the smallest number
	std::cout << "Smallest value: " << smallest;

	std::cout << '\n'; return 0;
}