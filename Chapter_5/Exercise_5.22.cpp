/*
File name: Exercise_5.22.cpp
Author: Ricardo Garcia
Date: 09/07/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.22 Page 207
Description: Show that the De Morgan's laws expressions produce the same value.
*/

#include <iostream>

int main() {

	// Part a De Morgan's law example
	int x{ 1 }, y{ 2 };
	if ((!(x < 5) && !(y >= 7)) == !(x < 5 || y >= 7))
		std::cout << "Part a is true.";
	else
		std::cout << "Part a is false.";

	// Part b De Morgan's law example
	int a{ 1 }, b{ 2 }, g{ 3 };
	if ((!(a == b) || !(g != 5)) == (!(a == b && g != 5)))
		std::cout << "\nPart b is true.";
	else
		std::cout << "\nPart b is false.";

	// Part c De Morgan's law example
	if ((!((x <= 8) && (y > 4))) == (!(x <= 8) || !(y > 4)))
		std::cout << "\nPart c is true.";
	else
		std::cout << "\nPart c is false.";

	// Part d De Morgan's law example
	int i{ 5 }, j{ 10 };
	if ((!((i > 4) || (j <= 6))) == (!(i > 4) && !(j <= 6)))
		std::cout << "\nPart d is true.";
	else
		std::cout << "\nPart d is false.";

	std::cout << '\n'; return 0;
}