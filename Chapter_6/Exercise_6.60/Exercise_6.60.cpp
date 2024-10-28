/*
File name: Exercise_6.60.cpp
Author: Ricardo Garcia
Date: 09/20/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.60 Page 281
Description: Modify Exercise 6.59 to support difficulty levels 1 - 4.
*/

#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime> // time
#include <iomanip> // setprecision

// Randomly generate two numbers in the range 1-9
// Multiply these two numbers and assign them to result
void generateQuestion(unsigned int& num1, unsigned int& num2, unsigned int& result, unsigned int difficulty) {

	unsigned int scalingFactor{ 0 }; // scaling factor for rand function

	// calculat the scaling factor
	for (unsigned int exponent{ 0 }; exponent < difficulty; ++exponent)
		scalingFactor = scalingFactor * 10 + 9;

	// randomly generate two numbers
	num1 = 1 + rand() % scalingFactor;
	num2 = 1 + rand() % scalingFactor;
	result = num1 * num2; // answer for question

	// Print Prompt
	std::cout << "Type the end-of-file indicator to terminate input:"
		<< "\n\tOn UNIX/Linux/Mac OS X type <Ctrl> d then press Enter"
		<< "\n\tOn Windows type <Ctrl> z then press Enter"
		<< "\nHow much is " << num1 << " times " << num2 << "? ";
}

// Print difficulty prompt
void printDifficultyPrompt() {

	std::cout << "Level 1 handles numbers in the range of 1-9"
		<< "\nLevel 2 handles numbers in the range of 1-99"
		<< "\nLevel 3 handles numbers in the range of 1-999"
		<< "\nLevel 4 handles numbers in the range of 1-9999"
		<< "\nEnter difficulty level (1 - 4): ";
}

// Choose a difficulty level from 1 to 4
void chooseDifficulty(unsigned int& difficulty) {

	// Prompt user for difficulty and read input
	printDifficultyPrompt();
	std::cin >> difficulty;

	// Loop if value entered is out of range
	while (difficulty < 1 || difficulty > 4) {

		// Print error message, prompt for difficulty, and read input
		std::cout << "\nError. Enter a value in the range from 1 to 4.\n";
		printDifficultyPrompt();
		std::cin >> difficulty;
	}
}

int main() {

	srand(static_cast<unsigned int>(time(0))); // seed rand to computer time

	unsigned int num1{ 0 }; // First number to multiply
	unsigned int num2{ 0 }; // Second number to multiply
	unsigned int result{ 0 }; // Result of both numbers multiplied
	unsigned int difficulty{ 0 }; // Difficulty level for problems

	chooseDifficulty(difficulty); // Difficult level from 1 to 4
	std::cout << '\n';
	generateQuestion(num1, num2, result, difficulty); // Randomly generate numbers for question

	unsigned int guess{ 0 }; // user guess
	unsigned int questions{ 0 }; // number of questions
	unsigned int incorrectGuess{ 0 }; // number of wrong guesses
	unsigned int correctGuess{ 0 }; // number of right guesses

	// Loop until EOF indicator is entered
	while (std::cin >> guess) {

		// Loop until correct guess is entered
		while (guess != result) {

			++incorrectGuess; // track number of wrong guesses

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
			std::cin >> guess;
		}

		++correctGuess; // track number of right guesses

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

		++questions; // track the number of questions

		// Calculate percentage after 10 questions
		if (10 == questions) {

			// calculate percentage score
			double score{ static_cast<double>(correctGuess) / (correctGuess + incorrectGuess) * 100 };

			// Print percentage score
			std::cout << std::fixed << std::setprecision(2);
			std::cout << "Score after 10 questions: " << score << "%";

			// Print student needs help if score is less than 75%
			if (static_cast<int>(score) < 75)
				std::cout << "\nPlease ask your teacher for extra help.\n";
			else // Print that student is ready for the next level
				std::cout << "\nCongratulations, you are ready to go to the next level!\n";

			questions = correctGuess = incorrectGuess = difficulty = 0; // reset variables
			system("pause"); system("cls"); // reset screen

			chooseDifficulty(difficulty); // select difficulty level from 1 to 4
			std::cout << '\n';
		}

		generateQuestion(num1, num2, result, difficulty); // Randomly generate numbers for question
	}

	return 0;
}