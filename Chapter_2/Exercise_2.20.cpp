/*
File name: Exercise_2.20.cpp
Author: Ricardo Garcia
Date: 08/15/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 2.20 Page 70
Description: This program calculates a circle's diameter, circumference, and area. 
*/

#include <iostream>

int main() {
	int radius{ 0 };
	
	// Prompt user to enter radius and read input
	std::cout << "Enter the circle's radius: ";
	std::cin >> radius;
	
	// Calculate diameter, circumference, and radius
	std::cout << "Circle's diameter: " << radius * 2 << std::endl;
	std::cout << "Circle's circumference: " << 2 * 3.14159 * radius << std::endl;
	std::cout << "Circle's radius: " << 3.14159 * radius * radius << std::endl;

	return 0;
}