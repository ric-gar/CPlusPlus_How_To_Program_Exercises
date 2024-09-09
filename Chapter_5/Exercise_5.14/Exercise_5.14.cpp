/*
File name: Exercise_5.14.cpp
Author: Ricardo Garcia
Date: 09/04/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.14 Page 206
Description: Modify Fig. 5.6 to support interest rates of 5-10% and uses a for loop.
*/

#include <iostream>
#include <iomanip>

int main() {

    // set floating-point number format
    std::cout << std::fixed << std::setprecision(2);

    // calculate interest rate from 5-10%
    for (unsigned int counter{ 5 }; counter <= 10; ++counter) {

        double principal{ 1000.00 }; // initial amount before interest
        double rate{ counter / 100.0 }; // interest rate

        std::cout << "Initial principal: " << principal << '\n';
        std::cout << "    Interest rate:    " << rate << '\n';

        // display headers
        std::cout << "\nYear" << std::setw(20) << "Amount on deposit" << '\n';

        // calculate amount on deposit for each of ten years
        for (unsigned int year{ 1 }; year <= 10; year++) {
            // calculate amount on deposit at the end of the specified year
            double amount = principal * pow(1.0 + rate, year);

            // display the year and the amount
            std::cout << std::setw(4) << year << std::setw(20) << amount << '\n';
        }

        std::cout << "\n\n";
    }

	std::cout << '\n'; return 0;
}