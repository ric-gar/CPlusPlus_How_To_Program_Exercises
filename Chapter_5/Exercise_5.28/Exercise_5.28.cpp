/*
File name: Exercise_5.28.cpp
Author: Ricardo Garcia
Date: 09/07/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.28 Page 208
Description: Use iteration and switch statments to print the song "The Twelve Days of Christams."
*/

#include <iostream>

int main() {

	// Process the twelve days
	for (unsigned int day{ 1 }; day <= 12; ++day) {

		// Print the intro
		std::cout << "On the ";

		// Print the respective day
		switch (day) {
		case 1:
			std::cout << "first";
			break;
		case 2:
			std::cout << "second";
			break;
		case 3:
			std::cout << "third";
			break;
		case 4:
			std::cout << "fourth";
			break;
		case 5:
			std::cout << "fifth";
			break;
		case 6:
			std::cout << "sixth";
			break;
		case 7:
			std::cout << "seventh";
			break;
		case 8:
			std::cout << "eighth";
			break;
		case 9:
			std::cout << "ninth";
			break;
		case 10:
			std::cout << "tenth";
			break;
		case 11:
			std::cout << "eleventh";
			break;
		case 12:
			std::cout << "twelfth";
			break;
		default:
			std::cout << "\nError in the respective day switch.";
		}

		// Print the end of the first line
		std::cout << " day of Christmas my true love sent to me";

		// Switch case to handle the respective verse for the day
		switch (day) {
		case 12:
			std::cout << "\nTwelve drummers drumming,";
		case 11:
			std::cout << "\nEleven pipers piping,";
		case 10:
			std::cout << "\nTen lords a-leaping,";
		case 9:
			std::cout << "\nNine ladies dancing,";
		case 8:
			std::cout << "\nEight maids a-milking,";
		case 7:
			std::cout << "\nSeven swans a-swimming,";
		case 6:
			std::cout << "\nSix geese a-laying,";
		case 5:
			std::cout << "\nFive gold rings,";
		case 4:
			std::cout << "\nFour calling birds,";
		case 3:
			std::cout << "\nThree French hens,";
		case 2:
			std::cout << "\nTwo turtle doves,";
		case 1:
			if (day == 1)
				std::cout << "\nA partridge in a pear tree.\n\n";
			else
				std::cout << "\nAnd a partridge in a pear tree.\n\n";
			break;
		default:
			std::cout << "\nError: Incorrect switch case.";
		}
	}

	return 0;
}