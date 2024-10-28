/*
File name: Exercise_6.34.cpp
Author: Ricardo Garcia
Date: 09/13/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.34 Page 276
Description: Guess a randomized number between 1 and 1000.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

void checkGuess(int&);
void checkPlayAgain(char&);

int main() {

	char playAgain{ 'y' };

	// Loop until user enters 'n'
	while (playAgain == 'y') {

		// declare randomized number from 1 to 1000
		srand(static_cast<unsigned int>(time(0)));
		int number{ 1 + rand() % 1000 };

		// Prompt user to guess number and read input
		std::cout << "I have a number betwen 1 and 1000."
			<< "\nCan you guess my number?"
			<< "\nPlease type your first guess. ";
		int guess;
		std::cin >> guess;
		checkGuess(guess); // check that number is in range

		// loop until number is guessed
		while (guess != number) {

			// guess is too low
			if (guess < number)
				std::cout << "\nToo low. Try again.";
			// guess is too high
			else if (guess > number)
				std::cout << "\nToo high. Try again.";
			// error message
			else
				std::cout << "\nError: if (guess < number) else if (guess > number)";

			// prompt user to guess number and read input
			std::cout << "\nI have a number between 1 and 1000."
				<< "\nCan you guess my number?"
				<< "\nPlease type your guess. ";
			std::cin >> guess;
			checkGuess(guess); // check that number is in range
		}

		// Print that number has been guessed and prompt to play again
		std::cout << "\nExcellent! You guessed the number!"
			<< "\nWould you like to play again (y or n)? ";
		std::cin >> playAgain;
		checkPlayAgain(playAgain); // check that 'y' or 'n' is entered

		std::cout << '\n';
	}

	return 0;
}

// Check that guess is between 1 and 1000
void checkGuess(int& guess) {

	// loop until guess is in range
	while (guess < 1 || guess > 1000) {

		// Error message and prompt to enter again
		std::cout << "\nError: Invalid guess entered."
			<< "\nI have a number betwen 1 and 1000."
			<< "\nCan you guess my number?"
			<< "\nPlease type your guess. ";
		std::cin >> guess;
	}

}

// Check that 'y' or 'n' is entered for play again variable
void checkPlayAgain(char& playAgain) {

	// loop until 'y' or 'n' is entered
	while (playAgain != 'y' && playAgain != 'n') {

		// Error message and prompt to enter again
		std::cout << "\nError: Invalid play again character entered."
			<< "\nWould you like to play again (y or n)? ";
		std::cin >> playAgain;
	}
}