/*
File name: Exercise_2.29.cpp
Author: Ricardo Garcia
Date: 08/15/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 2.29 Page 71
Description: Output the squared and cubed values of integers 1-10 in a table format. 
*/

#include <iostream>

int main() {
	std::cout << "integer" << "\tsquare" << "\tcube\n"
		<< "0 \t0 \t0\n"
		<< "1 \t1 \t1\n"
		<< "2 \t4 \t8\n"
		<< "3 \t9 \t27\n"
		<< "4 \t16 \t64\n"
		<< "5 \t25 \t125\n"
		<< "6 \t36 \t216\n"
		<< "7 \t49 \t343\n"
		<< "8 \t64 \t512\n"
		<< "9 \t81 \t729\n"
		<< "10 \t100 \t1000\n";
	return 0;
}