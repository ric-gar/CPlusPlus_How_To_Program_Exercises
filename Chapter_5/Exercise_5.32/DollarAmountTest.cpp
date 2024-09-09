/*
File name: DollarAmountTest.cpp
Author: Ricardo Garcia
Date: 09/08/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.32 Page 209
Description: Test the banker's rounding for the addInterest member function.
*/

#include <iostream>
#include <iomanip>
#include "DollarAmount.h"

int main() {

    std::cout << "Enter integer interest rate and divisor. For example:\n"
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