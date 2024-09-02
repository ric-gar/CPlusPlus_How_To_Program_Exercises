/*
File name: Exercise_4.17.cpp
Author: Ricardo Garcia
Date: 08/30/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.17 Page 152
Description: This program displays the largest of 10 numbers entered by the user.
*/

#include <iostream>

int main() {
	unsigned int counter{ 0 };
	int largest{ INT_MIN };

	// Loop 10 times
	while (counter < 10) {
		int number{ 0 };
		std::cout << "Enter an integer: ";
		std::cin >> number;

		// Check if the user input is the largest
		if (number > largest)
			largest = number;

		counter++;
	}

	// Print the largest number
	std::cout << "\nLargest number is " << largest << "\n";
	return 0;
}