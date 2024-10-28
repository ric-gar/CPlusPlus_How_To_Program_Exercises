/*
File name: Exercise_6.12.cpp
Author: Ricardo Garcia
Date: 09/11/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.12 Page 273
Description: Calculate the garage charges to park for up to a 24-hour period.
			 $20.00 for the first three hours,
			 $5.00 per hour after,
			 and a maximum $50.00 for a 24-hour period.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

double calculateCharges(double); // calculate charges for hours parked

int main() {

	double totalHours{ 0 }; // total hours for three cars
	double totalCharges{ 0 }; // total charges for three cars

	// Prompt user to enter hours for three cars and read input
	std::cout << "Enter the hours parked for each car separated by a space.\n";
	double hours_1{ 0 };
	double hours_2{ 0 };
	double hours_3{ 0 };
	std::cin >> hours_1 >> hours_2 >> hours_3;

	// Calculate total hours for all three cars
	totalHours = hours_1 + hours_2 + hours_3;

	std::cout << std::fixed << std::right << "\nCar\tHours\tCharge"; // tab header
	// Print car 1 charges
	std::cout << "\n1\t" << std::setprecision(1) << std::setw(5) << hours_1 
		<< '\t' << std::setprecision(2) << std::setw(6) << calculateCharges(hours_1);
	totalCharges += calculateCharges(hours_1);
	// Print car 2 charges
	std::cout << "\n2\t" << std::setprecision(1) << std::setw(5) << hours_2 
		<< '\t' << std::setprecision(2) << std::setw(6) << calculateCharges(hours_2);
	totalCharges += calculateCharges(hours_2);
	// Print car 3 charges
	std::cout << "\n3\t" << std::setprecision(1) << std::setw(5) << hours_3 
		<< '\t' << std::setprecision(2) << std::setw(6) << calculateCharges(hours_3);
	totalCharges += calculateCharges(hours_3);
	// Print total charges
	std::cout << "\nTOTAL\t" << std::setprecision(1) << std::setw(5) << totalHours 
		<< '\t' << std::setprecision(2) << std::setw(6) << totalCharges << '\n';

	return 0;
}

// calculate charges for hours parked
double calculateCharges(double hours) {

	// convert hours from double to int
	int roundHours{ static_cast<int>(ceil(hours)) };

	if (roundHours == 0) // no parked hours
		return 0;
	// $20 for less than three hours parked
	else if (roundHours > 0 && roundHours <= 3)
		return 20;
	// calculate hours between 3-8 hours
	else if (roundHours > 3 && roundHours <= 8)
		return 20 + (static_cast<int>(ceil(hours)) - 3) * 5;
	// $50 for hours between 8-24
	else if (roundHours > 8)
		return 50;
	// Error message: Out of bounds
	else {
		std::cout << "\nError in calculcatedHours()";
		return 0;
	}

}