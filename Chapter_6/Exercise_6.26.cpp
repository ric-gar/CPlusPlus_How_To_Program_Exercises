/*
File name: Exercise_6.26.cpp
Author: Ricardo Garcia
Date: 09/12/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.26 Page 275
Description: Convert celsius to fahrenheit from 0 to 100 and fahrenheit to celsius from 32 to 212.
*/

#include <iostream>
#include <iomanip>

double celsius(double);
double fahrenheit(double);

int main() {

	// Print table header for celsius to fahrenheit
	std::cout << std::fixed << std::right
		<< std::setw(10) << "Celsius" << '\t' << std::setw(10) << "Fahrenheit";

	// Loop from 1 to 100 celsius degrees
	for (unsigned int celsius{ 0 }; celsius <= 100; ++celsius) {
		
		// calculate celsius to fahrenheit
		std::cout << '\n' << std::setw(10) << celsius
			<< '\t' << std::setw(10) << std::setprecision(2) << fahrenheit(static_cast<double>(celsius));
	}

	// Print table header for fahrenheit to celsius
	std::cout << "\n\n" << std::setw(10) << "Fahrenheit" << '\t' << std::setw(10) << "Celsius";

	// Loop from 32 to 212 fahrenheit degrees
	for (unsigned int fahrenheit{ 32 }; fahrenheit <= 212; ++fahrenheit) {
		
		// calculate fahrenheit to celsius
		std::cout << '\n' << std::setw(10) << fahrenheit
			<< '\t' << std::setw(10) << std::setprecision(2) << celsius(static_cast<double>(fahrenheit));
	}

	return 0;
}

// Converts fahrenheit to celsius
double celsius(double fahrenheit) {
	return (fahrenheit - 32) / 1.8;
}

// Converts celsius to fahrenheit
double fahrenheit(double celsius) {
	return celsius * 1.8 + 32;
}