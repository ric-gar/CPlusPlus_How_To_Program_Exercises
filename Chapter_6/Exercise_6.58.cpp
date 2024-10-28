/*
File name: Exercise_6.58.cpp
Author: Ricardo Garcia
Date: 09/20/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.58 Page 281
Description: Modify Exercise 6.57 to support wrong and correct responses.
*/

#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime> // time

// Randomly generate two numbers in the range 1-9
// Multiply these two numbers and assign them to result
void generateQuestion(unsigned int& num1, unsigned int& num2, unsigned int& result) {

	num1 = 1 + rand() % 9;
	num2 = 1 + rand() % 9;
	result = num1 * num2;

	// Print Prompt
	std::cout << "Type the end-of-file indicator to terminate input:"
		<< "\n\tOn UNIX/Linux/Mac OS X type <Ctrl> d then press Enter"
		<< "\n\tOn Windows type <Ctrl> z then press Enter"
		<< "\nHow much is " << num1 << " times " << num2 << "? ";
}

int main() {

	srand(static_cast<unsigned int>(time(0))); // seed rand to computer time

	unsigned int num1{ 0 }; // First number to multiply
	unsigned int num2{ 0 }; // Second number to multiply
	unsigned int result{ 0 }; // Result of both numbers multiplied

	generateQuestion(num1, num2, result); // Randomly generate numbers for question

	unsigned int input{ 0 };

	// Loop until EOF indicator is entered
	while (std::cin >> input) {

		// Loop until correct guess is entered
		while (input != result) {

			// Print wrong guess response
			switch (1 + rand() % 4) {

			case 1:
				std::cout << "\nNo. Please try again.";
				break;
			case 2:
				std::cout << "\nWrong. Try once more.";
				break;
			case 3:
				std::cout << "\nDon't give up!";
				break;
			case 4:
				std::cout << "\nNo. Keep trying.";
				break;
			default:
				std::cout << "\nError. Entered default case for wrong guess response.";
				break;
			}

			// Prompt user to enter another guess
			std::cout << "\nHow much is " << num1 << " times " << num2 << "? ";
			std::cin >> input;
		}

		// Print correct guess response
		switch (1 + rand() % 4) {
		case 1:
			std::cout << "\nVery good!\n\n";
			break;
		case 2:
			std::cout << "\nExcellent!\n\n";
			break;
		case 3:
			std::cout << "\nNice work!\n\n";
			break;
		case 4:
			std::cout << "\nKeep up the good work!\n\n";
			break;
		default:
			std::cout << "\nError. Entered default case for correct guess response.\n\n";
		}

		generateQuestion(num1, num2, result); // Randomly generate numbers for question
	}

	return 0;
}