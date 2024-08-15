/*
File name: Exercise_2.19.cpp
Author: Ricardo Garcia
Date: 08/14/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 2.19 Page 69
Description: Read three different integer numbers and calculate the sum, average, product,
			 smallest number, and largest number. 
*/

#include <iostream>

int main() {
	int num1{ 0 };
	int num2{ 0 };
	int num3{ 0 };
	int smallest{ 0 };
	int largest{ 0 };
	
	// Output prompt and read input
	std::cout << "Input three different integers: ";
	std::cin >> num1 >> num2 >> num3;

	// Calculate sum, average, and product
	std::cout << "Sum is " << num1 + num2 + num3 << std::endl;
	std::cout << "Average is " << (num1 + num2 + num3) / 3 << std::endl;
	std::cout << "Product is " << (num1 * num2 * num3) << std::endl;
	
	// Find the smallest number
	if (num1 <= num2) {
		if (num1 <= num3)
			smallest = num1;
	}
	if (num2 <= num1) {
		if (num2 <= num3)
			smallest = num2;
	}
	if (num3 <= num1) {
		if (num3 <= num2)
			smallest = num3;
	}
	std::cout << "Smallest is " << smallest << std::endl;
	
	// Find the largest number
	if (num1 >= num2) {
		if (num1 >= num3)
			largest = num1;
	}
	if (num2 >= num1) {
		if (num2 >= num3)
			largest = num2;
	}
	if (num3 >= num1) {
		if (num3 >= num2)
			largest = num3;
	}
	std::cout << "Largest is " << largest << std::endl;
	
	return 0;
}