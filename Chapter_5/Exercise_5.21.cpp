/*
File name: Exercise_5.21.cpp
Author: Ricardo Garcia
Date: 09/06/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.21 Page 207
Description: Display the four triangle patterns on page 206 side by side using only
			 cout << '*';
			 cout << ' ';
			 cout << '\n';
*/

#include <iostream>

int main() {

	// Print triangle in part a
	for (unsigned int counter{ 1 }; counter <= 10; ++counter) {

		// print triangle in part a
		for (unsigned int innerCounter{ 1 }; innerCounter <= counter; ++innerCounter) {
			std::cout << '*';
		}
		for (unsigned int innerCounter{ 1 }; innerCounter <= 10 - counter; ++innerCounter) {
			std::cout << ' ';
		}
		std::cout << ' ';

		// print triangle in part b
		for (unsigned int innerCounter{ 10 }; innerCounter >= counter; --innerCounter) {
			std::cout << '*';
		}
		for (unsigned int innerCounter{ 1 }; innerCounter < counter; ++innerCounter) {
			std::cout << ' ';
		}
		std::cout << ' ';

		// print triangle in part c
		for (unsigned int innerCounter{ 1 }; innerCounter < counter; ++innerCounter)
			std::cout << ' ';
		for (unsigned int innerCounter{ 10 }; innerCounter >= counter; --innerCounter)
			std::cout << '*';
		std::cout << ' ';

		// print trinagle in part d
		for (unsigned int innerCounter{ 10 }; innerCounter > counter; --innerCounter)
			std::cout << ' ';
		for (unsigned int innerCounter{ 1 }; innerCounter <= counter; ++innerCounter)
			std::cout << '*';

		std::cout << '\n';
	}

	return 0;
}