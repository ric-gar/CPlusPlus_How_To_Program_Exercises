/*
File name: Exercise_2.16.cpp
Author: Ricardo Garcia
Date: 8/14/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 2.16 Page 69
Description: This program reads two numbers from the user and calculates the
             sum, product, difference, and quotient. 
*/

#include <iostream>

int main() {
	int num1{ 0 };
	int num2{ 0 };
	// Output prompt and read input
	std::cout << "Enter two numbers: ";
	std::cin >> num1 >> num2;

	// Calculate values and output them
	std::cout << "Sum = " << num1 + num2 << std::endl;
	std::cout << "Product = " << num1 * num2 << std::endl;
	std::cout << "Difference = " << num1 - num2 << std::endl;
	std::cout << "Quotient = " << num1 / num2 << std::endl;

	return 0;
}