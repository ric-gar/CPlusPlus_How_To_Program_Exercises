/*
File name: DollarAmountTest.cpp
Author: Ricardo Garcia
Date: 09/08/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.31 Page 209
Description: Test the divide member function in DollarAmount.h.
*/

#include <iostream>
#include "DollarAmount.h"

int main() {

	DollarAmount account_1{ 12345 }; // initialize with one argument
	DollarAmount account_2{ 1337, 25 }; // initialize with two arguments

	// Print account values
	std::cout << "Account 1: $" << account_1.toString() << '\n';
	std::cout << "Account 2: $" << account_2.toString() << '\n';

	// Divide Account 1 by 7
	std::cout << "\nDivide Account 1 by 7.\n";
	account_1.divide(7);

	// Print account values
	std::cout << "Account 1: $" << account_1.toString() << '\n';
	std::cout << "Account 2: $" << account_2.toString() << '\n';

	// Divide Account 2 by 8
	std::cout << "\nDivide Account 2 by 8.\n";
	account_2.divide(8);

	// Print account values
	std::cout << "Account 1: $" << account_1.toString() << '\n';
	std::cout << "Account 2: $" << account_2.toString() << '\n';

	return 0;
}