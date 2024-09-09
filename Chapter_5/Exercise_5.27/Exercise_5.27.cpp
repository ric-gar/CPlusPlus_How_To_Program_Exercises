/*
File name: Exercise_5.27.cpp
Author: Ricardo Garcia
Date: 09/07/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.27 Page 208
Description: Remove the continue statement from the program in Fig. 5.14.
*/

#include <iostream>

int main() {

    for (unsigned int count{ 1 }; count <= 10; count += (count != 4 ? 1 : 2 ) )
        std::cout << count << ' ';

    std::cout << "\nUsed continue to skip printing 5\n";

	std::cout << '\n'; return 0;
}