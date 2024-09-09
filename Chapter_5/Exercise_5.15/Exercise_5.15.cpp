/*
File name: Exercise_5.15.cpp
Author: Ricardo Garcia
Date: 09/04/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.15 Page 206
Description: Display the four triangle patterns on page 206 using only
			 cout << '*';
			 cout << ' ';
			 cout << '\n';
*/

#include <iostream>

int main() {

	// Print triangle in part a
	for (unsigned int counter{ 1 }; counter <= 10; ++counter) {
		for (unsigned int innerCounter{ 1 }; innerCounter <= counter; ++innerCounter)
			std::cout << '*';
		std::cout << '\n';
	}

	std::cout << '\n';

	// Print triangle in part b
	for (unsigned int counter{ 1 }; counter <= 10; ++counter) {
		for (unsigned int innerCounter{ 10 }; innerCounter >= counter; --innerCounter)
			std::cout << '*';
		std::cout << '\n';
	}

	std::cout << '\n';

	// Print triangle in part c
	for (unsigned int counter{ 1 }; counter <= 10; ++counter) {
		for (unsigned int innerCounter{ 1 }; innerCounter < counter; ++innerCounter)
			std::cout << ' ';
		for (unsigned int innerCounter{ 10 }; innerCounter >= counter; --innerCounter)
			std::cout << '*';
		std::cout << '\n';
	}

	std::cout << '\n';

	// Print triangle in part d
	for (unsigned int counter{ 1 }; counter <= 10; ++counter) {
		for (unsigned int innerCounter{ 10 }; innerCounter > counter; --innerCounter)
			std::cout << ' ';
		for (unsigned int innerCounter{ 1 }; innerCounter <= counter; ++innerCounter)
			std::cout << '*';
		std::cout << '\n';
	}


	std::cout << '\n'; return 0;
}