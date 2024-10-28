/*
File name: Exercise_4.18.cpp
Author: Ricardo Garcia
Date: 08/31/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.18 Page 152
Description: Print the table using tab escape sequences.
*/

#include <iostream>

int main() {
	unsigned int N{ 1 };

	// table header
	std::cout << "N" << "\t10*N" << "\t100*N" << "\t1000*N\n";

	// Iterate 5 times
	while (N <= 5) {
		// Print each table row
		std::cout << "\n" << N << "\t" << N * 10 << "\t" << N * 100 << "\t" << N * 1000;

		N++;
	}

	return 0;
}