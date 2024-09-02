/*
File name: Exercise_4.19.cpp
Author: Ricardo Garcia
Date: 08/31/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.19 Page 152
Description: 
*/

#include <iostream>

int main() {

	int largest_1{ INT_MIN };
	int largest_2{ INT_MIN };
	unsigned int counter{ 0 };

	// Loop 10 times
	while (counter < 10) {

		// Prompt user to enter integer and read input
		int number{ 0 };
		std::cout << "Enter number: ";
		std::cin >> number;

		// Check if number > largest_1
		if (number >= largest_1) {
			largest_2 = largest_1;
			largest_1 = number;
		}
		else { // Check if number > larget_2
			if (number >= largest_2)
				largest_2 = number;
		}
		++counter;
	}

	// Print the two largest numbers
	std::cout << "\nThe two largest numbers are " << largest_1 << " and " << largest_2 << "\n";
}