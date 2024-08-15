/*
File name: Exercise_2.18.cpp
Author: Ricardo Garcia
Date: 08/14/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 2.18 Page 69
Description: Take in two numbers as user input and print the largest number
             or that the numbers are equal. 
*/

#include <iostream>

int main() {
	int num1{ 0 };
	int num2{ 0 };

	// Prompt output and read input
	std::cout << "Enter two numbers: ";
	std::cin >> num1 >> num2;

	// Determine which number is bigger of if they are equal
	// and print the result
	if (num1 > num2)
		std::cout << num1 << " is larger.";
	if (num2 > num1)
		std::cout << num2 << " is larger.";
	if (num1 == num2)
		std::cout << "These numbers are equal.";

	return 0;
}