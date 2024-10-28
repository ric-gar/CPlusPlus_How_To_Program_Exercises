/*
File name: Exercise_6.45.cpp
Author: Ricardo Garcia
Date: 09/14/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.45 Page 279
Description: Test as many of the math library functions in Fig. 6.2 in table format.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

	// ceil(x)
	std::cout << std::right << std::setw(5) << "x" << std::setw(13) << "ceil(x)" << '\n';
	for (int x{ -40 }; x <= 40; x += 3) {
		std::cout << std::setw(5) << (x / 10.0) << std::setw(12) << ceil(x / 10.0) << '\n';
	}
	std::cout << "\n\n";

	// cos(x)
	std::cout << std::setw(5) << "x" << std::setw(13) << "cos(x)" << '\n';
	for (int x{ -40 }; x <= 40; x += 3) {
		std::cout << std::setw(5) << (x / 10.0) << std::setw(12) << cos(x / 10.0) << '\n';
	}
	std::cout << "\n\n";

	// exp(x)
	std::cout << std::setw(5) << "x" << std::setw(13) << "exp(x)" << '\n';
	for (int x{ -40 }; x <= 40; x += 3) {
		std::cout << std::setw(5) << (x / 10.0) << std::setw(12) << exp(x / 10.0) << '\n';
	}
	std::cout << "\n\n";

	// fabs(x)
	std::cout << std::setw(5) << "x" << std::setw(13) << "fabs(x)" << '\n';
	for (int x{ -40 }; x <= 40; x += 3) {
		std::cout << std::setw(5) << (x / 10.0) << std::setw(12) << fabs(x / 10.0) << '\n';
	}
	std::cout << "\n\n";

	// floor(x)
	std::cout << std::setw(5) << "x" << std::setw(13) << "floor(x)" << '\n';
	for (int x{ -40 }; x <= 40; x += 3) {
		std::cout << std::setw(5) << (x / 10.0) << std::setw(12) << floor(x / 10.0) << '\n';
	}
	std::cout << "\n\n";

	// fmod(x)
	std::cout << std::setw(5) << "x" << std::setw(5) << "y" << std::setw(13) << "fmod(x, y)" << '\n';
	for (int x{ 0 }, y{ 100 }; x <= 100; x += 3, y -= 2) {
		std::cout << std::setw(5) << (x / 10.0) 
			<< std::setw(5) << (y / 10.0) << std::setw(12) << fmod(x / 10.0, y / 10.0) << '\n';
	}
	std::cout << "\n\n";

	// log(x)
	std::cout << std::setw(5) << "x" << std::setw(13) << "log(x)" << '\n';
	for (int x{ 0 }; x <= 100; x += 3) {
		std::cout << std::setw(5) << (x / 10.0) << std::setw(12) << log(x / 10.0) << '\n';
	}
	std::cout << "\n\n";

	// log10(x)
	std::cout << std::setw(5) << "x" << std::setw(13) << "log10(x)" << '\n';
	for (int x{ 0 }; x <= 100; x += 3) {
		std::cout << std::setw(5) << (x / 10.0) << std::setw(12) << log10(x / 10.0) << '\n';
	}
	std::cout << "\n\n";

	// pow(x)
	std::cout << std::setw(5) << "x" << std::setw(5) << "y" << std::setw(13) << "pow(x, y)" << '\n';
	for (int x{ 0 }, y{ 100 }; x <= 100; x += 3, y -= 2) {
		std::cout << std::setw(5) << (x / 10.0)
			<< std::setw(5) << (y / 10.0) << std::setw(12) << pow(x / 10.0, y / 10.0) << '\n';
	}
	std::cout << "\n\n";

	// sin(x)
	std::cout << std::setw(5) << "x" << std::setw(13) << "sin(x)" << '\n';
	for (int x{ -40 }; x <= 40; x += 3) {
		std::cout << std::setw(5) << (x / 10.0) << std::setw(12) << sin(x / 10.0) << '\n';
	}
	std::cout << "\n\n";

	// sqrt(x)
	std::cout << std::setw(5) << "x" << std::setw(13) << "sqrt(x)" << '\n';
	for (int x{ -2 }; x <= 40; x += 2) {
		std::cout << std::setw(5) << (x / 10.0) << std::setw(12) << sqrt(x / 10.0) << '\n';
	}
	std::cout << "\n\n";

	// tan(x)
	std::cout << std::setw(5) << "x" << std::setw(13) << "tan(x)" << '\n';
	for (int x{ -40 }; x <= 40; x += 2) {
		std::cout << std::setw(5) << (x / 10.0) << std::setw(12) << tan(x / 10.0) << '\n';
	}
	std::cout << "\n\n";

	return 0;
}