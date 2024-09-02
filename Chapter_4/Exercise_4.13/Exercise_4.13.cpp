/*
File name: Exercise_4.13.cpp
Author: Ricardo Garcia
Date: 08/28/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.13 Page 150
Description: Input miles driven and gallons used. Calculate the MPG and total MPG.
			 Print the results.
*/

#include <iostream>
#include <iomanip>
#include <climits>

int main() {
	// Prompt user to enter miles driven (possible sentinel value)
	int miles{ 0 };
	std::cout << "Enter miles driven (-1 to quit): ";
	std::cin >> miles;

	// initialize total miles and total gallons
	unsigned int totalMiles{ 0 };
	unsigned int totalGallons{ 0 };

	while (miles != -1) {
		// check if overflow occurs
		if (miles > UINT_MAX - totalMiles)
			std::cout << "Error: Arithmetic overflow. Results are unpredictable.\n";
		// calculate total miles
		totalMiles += miles;

		// Prompt user to enter gallons used
		unsigned int gallons{ 0 };
		std::cout << "Enter gallons used: ";
		std::cin >> gallons;

		// check if overflow occurs 
		if (gallons > UINT_MAX - totalGallons)
			std::cout << "Error: Arithmetic overflow. Results are unpredictable.\n";
		// calculate total gallons
		totalGallons += gallons;

		// calculate MPG/total MPG and print results
		std::cout << std::fixed; // precision to six decimal digits
		std::cout << "MPG this trip: " << static_cast<double>(miles) / gallons;
		std::cout << "\nTotal MPG: " << static_cast<double>(totalMiles) / totalGallons;

		// Prompt user to enter miles driven (possible sentinel value)
		std::cout << "\n\nEnter miles driven (-1 to quit): ";
		std::cin >> miles;
	}
	return 0;
}