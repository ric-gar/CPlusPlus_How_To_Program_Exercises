/*
File name: Exercise_6.14.cpp
Author: Ricardo Garcia
Date: 09/11/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.14 Page 273
Description: Round a number to nearest integer, tenth, hundredth, and thousandths.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

// functin prototypes
double roundToInteger(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);

int main() {

	// Prompt user for input
	std::cout << "Type the end-of-file indicator to terminate input:"
		<< "\n   On UNIX/Linux/Mac OS X type <Ctrl> d then press Enter"
		<< "\n   On Windows type <Ctrl> z then press Enter"
		<< "\nEnter a number to round: ";
	double x;

	// Loop until EOF is entered
	while (std::cin >> x) {

		// Round the number
		std::cout << std::fixed << "\nOriginal number: " << x
			<< "\nRound to nearest integer: " << roundToInteger(x)
			<< "\nRound to nearest tenth: " << std::setprecision(1) << roundToTenths(x)
			<< "\nRound to nearest hundredths: " << std::setprecision(2) << roundToHundredths(x)
			<< "\nRound to nearest thousandths: " << std::setprecision(3) << roundToThousandths(x);

		// Prompt user for input
		std::cout << "\n\nType the end-of-file indicator to terminate input:"
			<< "\n   On UNIX/Linux/Mac OS X type <Ctrl> d then press Enter"
			<< "\n   On Windows type <Ctrl> z then press Enter"
			<< "\nEnter a number to round: ";
	}
	return 0;
}

// Rounds to nearest integer
double roundToInteger(double number) {
	return floor(number + 0.5);
}

// Rounds to nearest tenth decimal place
double roundToTenths(double number) {
	return floor(number * 10 + 0.5) / 10;
}

// Rounds to nearest hundredth decimal place
double roundToHundredths(double number) {
	return floor(number * 100 + 0.5) / 100;
}

// Rounds to nearest thousandths place
double roundToThousandths(double number) {
	return floor(number * 1000 + 0.5) / 1000;
}