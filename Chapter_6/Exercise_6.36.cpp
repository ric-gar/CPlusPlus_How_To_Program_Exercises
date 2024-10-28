/*
File name: Exercise_6.36.cpp
Author: Ricardo Garcia
Date: 09/14/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.36 Page 277
Description: Recursive function that calculates exponentiation.
*/

#include <iostream>

int power(int, int);

int main() {
	
	std::cout << "power(2, 4) = " << power(2, 4) << '\n';
	std::cout << "power(3, 2) = " << power(3, 2) << '\n';
	std::cout << "power(3, 4) = " << power(3, 4) << '\n';
	std::cout << "power(2, 6) = " << power(2, 6) << '\n';

	return 0;
}

int power(int base, int exponent) {

	if (exponent == 1)
		return base;
	else
		return base * power(base, exponent - 1);
}