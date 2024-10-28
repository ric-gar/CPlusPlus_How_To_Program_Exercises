/*
File name: Exercise_6.27.cpp
Author: Ricardo Garcia
Date: 09/12/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.27 Page 275
Description: Find the smallest of three floating-point numbers.
*/

#include <iostream>

double smallest(double, double, double);

int main() {

	double num1{ 0 }; // first floating-point number
	double num2{ 0 }; // second floating-point number
	double num3{ 0 }; // third floating-point number

	// Prompt user for first floating-point number
	std::cout << "Enter the first floating-point number: ";
	std::cin >> num1;

	// Prompt user for second floating-point number
	std::cout << "Enter the second floating-point number: ";
	std::cin >> num2;

	// Prompt user for third floating-point number
	std::cout << "Enter the third floating-point number: ";
	std::cin >> num3;

	// Print the smallest number
	std::cout << "The smallest number is: " << smallest(num1, num2, num3) << '\n';
	
	return 0;
}

// calculate the smallest of three floating-point numbers
double smallest(double num1, double num2, double num3) {

	// first number is the smallest
	if (num1 <= num2 && num1 <= num3)
		return num1;
	// second number is the smallest
	else if (num2 <= num1 && num2 <= num3)
		return num2;
	// third number is the smallest
	else if (num3 <= num1 && num3 <= num2)
		return num3;
	// Error
	else {
		std::cout << "\nError in smallest(double, double, double)";
		return 0;
	}
}