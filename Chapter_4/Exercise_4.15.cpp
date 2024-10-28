/*
File name: Exercise_4.15.cpp
Author: Ricardo Garcia
Date: 08/30/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.15 Page 151
Description: Calculate a salesperson's gross sales for the week.
*/

#include <iostream>
#include <iomanip>

int main() {
	// Prompt user to enter sales and read input (possible sentinel value)
	double sales{ 0 };
	std::cout << "Enter in sales in dollars (-1 to end): ";
	std::cin >> sales;

	// Loop until sentinel value is entered
	while (sales != -1) {

		// calculate salary
		double salary{ 200 + sales * 0.09 };
		std::cout << std::fixed << std::setprecision(2) << "Salary is: $" << salary;

		// Prompt user to enter sales and read input (possible sentinel value)
		std::cout << "\n\nEnter in sales in dollars (-1 to end): ";
		std::cin >> sales;
	}

	return 0;
}