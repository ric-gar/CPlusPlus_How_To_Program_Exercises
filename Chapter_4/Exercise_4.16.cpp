/*
File name: Exercise_4.16.cpp
Author: Ricardo Garcia
Date: 08/30/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.16 Page 151-152
Description: Calculate the salary of an employee for hourly and overtime pay.
*/

#include <iostream>
#include <iomanip>

int main() {
	// Prompt user to hours worked and read input (possible sentinel value)
	int hoursWorked{ 0 };
	std::cout << "Enter hours worked (-1 to end): ";
	std::cin >> hoursWorked;

	// Loop until sentinel value is entered
	while (hoursWorked != -1) {

		// Prompt user to enter hourly rate and read input
		double hourlyRate;
		std::cout << "Enter hourly rate of employee ($00.00): ";
		std::cin >> hourlyRate;

		// Calculate salary using conditional operator and print result
		std::cout << "Salary is $" << std::fixed << std::setprecision(2)
			<< (hoursWorked <= 40 
				? hoursWorked * hourlyRate
				: (hourlyRate * 40) + (hourlyRate * 1.5 * (hoursWorked - 40)) );

		// Prompt user to hours worked and read input (possible sentinel value)
		std::cout << "\n\nEnter hours worked (-1 to end): ";
		std::cin >> hoursWorked;
	}
	return 0;
}