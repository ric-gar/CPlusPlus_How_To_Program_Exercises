/*
File name: Exercise_5.13.cpp
Author: Ricardo Garcia
Date: 09/04/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.13 Page 206
Description: Calculate factorials of 1 through 20 and display them in
			 tabular format.
*/

#include <iostream>
#include <iomanip>

int main() {

	std::cout << std::right << std::setw(4) << "n!"
		<< " | "
		<< std::setw(20) << "Result";

	std::cout << "\n----------------------------";

	long long factorial{ 1 };

	for (unsigned int n{ 1 }; n <= 20; n++) {
		factorial *= n;
		std::cout << "\n" << std::setw(3) << n << "!"
			<< " | "
			<< std::setw(20) << factorial;
	}

	std::cout << '\n'; return 0;
}