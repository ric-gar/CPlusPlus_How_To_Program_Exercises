/*
File name: Exercise_6.37.cpp
Author: Ricardo Garcia
Date: 09/14/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.37 Page 277
Description: Iterative solution of Fibonacci series.
*/

#include <iostream>

unsigned long fibonacci(unsigned long);

int main() {
	
	for (unsigned int count{ 0 }; count <= 10; count++) {
		std::cout << "fibonacci(" << count << ") = " << fibonacci(count) << '\n';
	}
	return 0;
}

unsigned long fibonacci(unsigned long number) {

	// Return number for base cases n = 0 or n = 1
	if (number == 0 || number == 1)
		return number;

	// Calculate fibonacci
	else {

		unsigned long nMinus1{ 1 }; // f(n - 1)
		unsigned long nMinus2{ 0 }; // f(n - 2)
		unsigned long fibNum{ 0 }; // f(n)
		
		// loop from 2 to f(number)
		for (unsigned int n{ 2 }; n <= number; n++) {
			
			// calculate f(n)
			fibNum = nMinus1 + nMinus2;
			nMinus2 = nMinus1; // update f(n-2)
			nMinus1 = fibNum; // update f(n - 1)
		}
		
		return fibNum; // return fibonacci number
	}
}