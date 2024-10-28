/*
File name: Exercise_5.16.cpp
Author: Ricardo Garcia
Date: 09/04/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.16 Page 206-207
Description: Display the bars of asterisks after reading five input numbers.
*/

#include <iostream>
#include <iomanip>

int main() {
	// user input variables
	unsigned int number_1{ 0 },
		number_2{ 0 },
		number_3{ 0 },
		number_4{ 0 },
		number_5{ 0 };

	// Prompt user for 5 integers and read input
	std::cout << "Enter five integers (between 1 and 30): ";
	std::cin >> number_1 >> number_2 >> number_3 >> number_4 >> number_5;

	std::cout << '\n';

	// Print asterisk for first input
	std::cout << std::right << std::setw(2) << number_1 << ": ";
	for (unsigned int counter{ 1 }; counter <= number_1; ++counter)
		std::cout << '*';
	
	std::cout << '\n';

	// Print asterisk for second input
	std::cout << std::setw(2) << number_2 << ": ";
	for (unsigned int counter{ 1 }; counter <= number_2; ++counter)
		std::cout << '*';
	
	std::cout << '\n';

	// Print asterisk for third input
	std::cout << std::setw(2) << number_3 << ": ";
	for (unsigned int counter{ 1 }; counter <= number_3; ++counter)
		std::cout << '*';
	
	std::cout << '\n';

	// Print asterisk for fourth input
	std::cout << std::setw(2) << number_4 << ": ";
	for (unsigned int counter{ 1 }; counter <= number_4; ++counter)
		std::cout << '*';
	
	std::cout << '\n';

	// Print asterisk for fifth input
	std::cout << std::setw(2) << number_5 << ": ";
	for (unsigned int counter{ 1 }; counter <= number_5; ++counter)
		std::cout << '*';

	std::cout << '\n'; return 0;
}