/*
File name: Exercise_2.23.cpp
Author: Ricardo Garcia
Date: 08/15/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 2.23 Page 70
Description: Read in five integers and output the smallest and largest integer
*/

#include <iostream>

int main() {
	int num1{ 0 };
	int num2{ 0 };
	int num3{ 0 };
	int num4{ 0 };
	int num5{ 0 };
	int largest{ 0 };
	int smallest{ 0 };
	// Prompt for five integers and read input
	std::cout << "Enter five integers: ";
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

	// Find the largest number
	// First number is the largest number
	if (num1 >= num2) {
		if (num1 >= num3) {
			if (num1 >= num4) {
				if (num1 >= num5) {
					largest = num1;
				}
			}
		}
	}
	// Second number is the largest number
	if (num2 >= num1) {
		if (num2 >= num3) {
			if (num2 >= num4) {
				if (num2 >= num5) {
					largest = num2;
				}
			}
		}
	}
	// Third number is the largest number
	if (num3 >= num1) {
		if (num3 >= num2) {
			if (num3 >= num4) {
				if (num3 >= num5) {
					largest = num3;
				}
			}
		}
	}
	// Fourth number is the largest number
	if (num4 >= num1) {
		if (num4 >= num2) {
			if (num4 >= num3) {
				if (num4 >= num5) {
					largest = num4;
				}
			}
		}
	}
	// Fifth number is the largest number
	if (num5 >= num1) {
		if (num5 >= num2) {
			if (num5 >= num3) {
				if (num5 >= num4) {
					largest = num5;
				}
			}
		}
	}
	std::cout << "Largest: " << largest << std::endl;

	// Find the smallest number
	// First number is the smallest
	if (num1 <= num2) {
		if (num1 <= num3) {
			if (num1 <= num4) {
				if (num1 <= num5)
					smallest = num1;
			}
		}
	}
	// Second number is the smallest
	if (num2 <= num1) {
		if (num2 <= num3) {
			if (num2 <= num4) {
				if (num2 <= num5)
					smallest = num2;
			}
		}
	}
	// Third number is the smallest
	if (num3 <= num1) {
		if (num3 <= num2) {
			if (num3 <= num4) {
				if (num3 <= num5)
					smallest = num3;
			}
		}
	}
	// Fourth number is the smallest
	if (num4 <= num1) {
		if (num4 <= num2) {
			if (num4 <= num3) {
				if (num4 <= num5)
					smallest = num4;
			}
		}
	}
	// Fifth number is the smallest
	if (num5 <= num1) {
		if (num5 <= num2) {
			if (num5 <= num3) {
				if (num5 <= num4)
					smallest = num5;
			}
		}
	}
	std::cout << "Smallest: " << smallest << std::endl;

	return 0;
}