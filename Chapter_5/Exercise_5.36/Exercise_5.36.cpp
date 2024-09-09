/*
File name: Exercise_5.36.cpp
Author: Ricardo Garcia
Date: 09/08/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.36 Page 209
Description: Check precision accuracy of 123.02
*/

#include <iostream>
#include <iomanip>

int main() {

	double value{ 123.02 };

	for (unsigned int count{ 1 }; count <= 20; ++count)
		std::cout << std::fixed << std::setprecision(count) << "Precision " << std::setw(2) << count << ": " << value << '\n';

	return 0;
}