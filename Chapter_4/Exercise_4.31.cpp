/*
File name: Exercise_4.31.cpp
Author: Ricardo Garcia
Date: 09/01/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.31 Page 155
Description: Using the radius, calculate the diameter, circumference, and area of a circle.
*/

#include <iostream>

int main() {

	std::cout << "Enter the radius of a circle: ";
	double radius{ 0 };
	std::cin >> radius;

	std::cout << "Diameter: " << 2 * radius << "\n";
	std::cout << "Circumference: " << 2 * 3.14159 * radius << "\n";
	std::cout << "Area: " << 3.14159 * radius * radius << "\n";

	return 0;
}