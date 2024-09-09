/*
File name: Exercise_5.29.cpp
Author: Ricardo Garcia
Date: 09/07/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.29 Page 208-209
Description: Modify Figure 5.6 with $24.00 principal and interest rate range from 5% to 10%.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

    // set floating-point number format
    std::cout << std::fixed << std::setprecision(2);

    for (unsigned int count{ 5 }; count <= 10; ++count) {

        double principal{ 24.00 }; // initial amount before interest
        double rate{ count / 100.0 }; // interest rate

        std::cout << "Initial principal: $" << principal << '\n';
        std::cout << "    Interest rate:   " << rate << '\n';

        // display headers
        std::cout << "\nYear" << std::setw(25) << "Amount on deposit" << '\n';

        // calculate amount on deposit from 1626 to 2024
        for (unsigned int year{ 1 }; year <= 398; year++) {
            // calculate amount on deposit at the end of the specified year
            double amount = principal * pow(1.0 + rate, year);

            // display the year and the amount
            std::cout << std::setw(4) << year << std::setw(25) << amount << '\n';
        }

        std::cout << "\n\n";
    }

	return 0;
}