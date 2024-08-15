/*
File name: Exercise_2.17.cpp
Author: Ricardo Garcia
Date: 08/14/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 2.17 Part a-c Page 69
Description: Print the numbers 1 through 4 seperated by a space and on a single line.
*/

#include <iostream> 

int main() {
	// Part a
	std::cout << "1 2 3 4\n" ;
	// Part b
	std::cout << "1 " << "2 " << "3 " << "4\n";
	// Part c
	std::cout << "1 ";
	std::cout << "2 ";
	std::cout << "3 ";
	std::cout << "4 ";

	return 0;
}