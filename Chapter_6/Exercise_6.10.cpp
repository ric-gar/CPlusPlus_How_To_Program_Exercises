/*
File name: Exercise_6.10.cpp
Author: Ricardo Garcia
Date: 09/11/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.10 Page 270
Description: Prompt user for the radius and print the volume of the sphere.
*/

#include <iostream>
#include <cmath>

inline double sphereVolume(double);

int main() {

	std::cout << "Enter the radius: ";
	double radius;
	std::cin >> radius;

	std::cout << "Volume: " << sphereVolume(radius) << '\n';

	return 0;
}

inline double sphereVolume(double radius) {

	return 4.0 / 3.0 * 3.14159 * pow(radius, 3);
}