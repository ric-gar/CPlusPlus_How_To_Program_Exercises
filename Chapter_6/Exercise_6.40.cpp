/*
File name: Exercise_6.40.cpp
Author: Ricardo Garcia
Date: 09/15/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.40 Page 278
Description: Modify the factorial function of Fig. 6.25 to display the local variable
			 and recursive call parameter.
*/

#include <iostream>
#include <iomanip>

unsigned long factorial(unsigned long); // function prototype

int main() {

    // calculate the factorials of 0 through 10
    for (unsigned int counter{ 0 }; counter <= 10; ++counter) {
        std::cout << counter << "! = " << factorial(counter) << "\n\n";
    }

    return 0;
}

// recursive definition of function factorial
unsigned long factorial(unsigned long number) {

    if (number <= 1) { // test for base case
        std::cout << "   factorial(" << number << ")" << " = 1" << "\n";
        return 1; // base cases: 0! = 1 and 1! = 1
    }
    else { // recursion step
        std::cout << "   factorial(" << number << ") = " << number << " * factorial(" << number - 1 << ")\n";
        return number * factorial(number - 1);
    }
}