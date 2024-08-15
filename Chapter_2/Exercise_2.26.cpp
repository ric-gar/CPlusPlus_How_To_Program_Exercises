/*
File name: Exercise_2.26.cpp
Author: Ricardo Garcia
Date: 08/15/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 2.26 Page 70
Description: Output a checkerboard pattern using 8 statements and 1 statement. 
*/

#include <iostream>

int main() {
	// Checkerboard in 8 statements
	std::cout << "* * * * * * * *" << std::endl;
	std::cout << " * * * * * * * *" << std::endl;
	std::cout << "* * * * * * * *" << std::endl;
	std::cout << " * * * * * * * *" << std::endl;
	std::cout << "* * * * * * * *" << std::endl;
	std::cout << " * * * * * * * *" << std::endl;
	std::cout << "* * * * * * * *" << std::endl;
	std::cout << " * * * * * * * *" << std::endl;

	std::cout << std::endl;

	// Checkerboard in 1 statement
	std::cout << "* * * * * * * *\n"
		<< " * * * * * * * *\n"
		<< "* * * * * * * *\n"
		<< " * * * * * * * *\n"
		<< "* * * * * * * *\n"
		<< " * * * * * * * *\n"
		<< "* * * * * * * *\n"
		<< " * * * * * * * *\n";

	return 0;
}