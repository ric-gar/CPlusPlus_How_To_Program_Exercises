/*
File name: Exercise_4.20.cpp
Author: Ricardo Garcia
Date: 08/31/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.20 Page 152
Description: Modify Fig. 4.14 to validate the user input is a 1 or 2.
*/

#include <iostream>

int main() {
    unsigned int passes{ 0 };
    unsigned int failures{ 0 };
    unsigned int studentCounter{ 1 };

    // process 10 students using counter-controlled loop
    while (studentCounter <= 10) {

        // prompt user for input and obtain value from user
        std::cout << "Enter result (1 = pass, 2 = fail): ";
        int result{ 0 };
        std::cin >> result;

        // if...else is nested in the while statement
        if (result == 1) {
            passes++;
            studentCounter++;
        }
        else if (result == 2) {
            failures++;
            studentCounter++;
        }
        else {
            std::cout << "Error: Incorrect result entered.\n";
        }
    }

    // termination phase; prepare and display results
    std::cout << "Passed: " << passes << "\nFailed: " << failures << "\n";

    // determine whether more than 8 students passed
    if (passes > 8) {
        std::cout << "Bonus to instructor!" << "\n";
    }

	return 0;
}