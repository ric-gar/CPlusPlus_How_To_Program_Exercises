/*
File name: DollarAmountTest.cpp
Author: Ricardo Garcia
Date: 09/08/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.33 Page 209
Description: Test DollarAmount supporting variables dollars and cents.
*/

#include <iostream>
#include <iomanip>
#include "DollarAmount.h"

int main() {

    DollarAmount account_1{ 12345 }; // initialize with one argument
    DollarAmount account_2{ 1337, 25 }; // initialize with two arguments

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
    std::cout << "\nApplying 11% interest rate to Account 2.\n";
    account_2.addInterest(11, 100);

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

    std::cout << "\nEnter integer interest rate and divisor. For example:\n"
        << "for     2%, enter:    2 100\n"
        << "for   2.3%, enter:   23 1000\n"
        << "for  2.37%, enter:  237 10000\n"
        << "for 2.375%, enter: 2375 100000\n> ";
    int rate; // whole-number interest rate
    int divisor; // divisor for rate 
    std::cin >> rate >> divisor;

    DollarAmount balance{ 1000, 00 }; // initial principal amount in pennies
    std::cout << "\nInitial balance: " << balance.toString() << std::endl;

    // display headers
    std::cout << "\nYear" << std::setw(20) << "Amount on deposit" << std::endl;

    // calculate amount on deposit for each of ten years
    for (unsigned int year{ 1 }; year <= 10; year++) {
        // increase balance by rate % (i.e., rate / divisor)
        balance.addInterest(rate, divisor);

        // display the year and the amount
        std::cout << std::setw(4) << year << std::setw(20) << balance.toString() << std::endl;
    }

	return 0;
}