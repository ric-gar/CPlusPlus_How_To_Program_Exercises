/*
File name: Exercise_5.25.cpp
Author: Ricardo Garcia
Date: 09/07/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.25 Page 208
Description: Remove the break statement from the application in Fig. 5.13.
*/

#include <iostream>

int main() {

	unsigned int count;

	for (count = 1; count != 5 && count <= 10; ++count)
		std::cout << count << ' ';

	std::cout << "\nBroke ut of loop at count = " << count << "\n\n";
	
	return 0;
}