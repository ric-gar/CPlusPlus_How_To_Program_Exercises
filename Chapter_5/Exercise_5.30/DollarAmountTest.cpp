/*
File name: DollarAmountTest.cpp
Author: Ricardo Garcia
Date: 09/08/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.30 Page 209
Description: Modify Figure 5.8 to support a constructor that takes in two parameters.
			 First parameter: dollars. Second parameter: cents.
*/

#include <iostream>
#include "DollarAmount.h"

int main() {

	DollarAmount account_1 { 12345 }; // initialize with one argument
	DollarAmount account_2 { 1337, 25 }; // initialize with two arguments

	// Print account values
	std::cout << "Account 1: $" << account_1.toString() << '\n';
	std::cout << "Account 2: $" << account_2.toString() << '\n';

	// Subtract member function
	std::cout << "\nSubtracting Account 1 from Account 2.\n";
	account_2.subtract(account_1);

	// Print account values
	std::cout << "Account 1: $" << account_1.toString() << '\n';
	std::cout << "Account 2: $" << account_2.toString() << '\n';

	// Add member function
	std::cout << "\nAdding $100.00 to Account 1.\n";
	account_1.add(DollarAmount{ 100, 0 });

	// Print account values
	std::cout << "Account 1: $" << account_1.toString() << '\n';
	std::cout << "Account 2: $" << account_2.toString() << '\n';

	// Interest member function
	std::cout << "\nApplying 10% interest rate to Account 2.\n";
	account_2.addInterest(10, 100);

	// Print account values
	std::cout << "Account 1: $" << account_1.toString() << '\n';
	std::cout << "Account 2: $" << account_2.toString() << '\n';

	return 0;
}