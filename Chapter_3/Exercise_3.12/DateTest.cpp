/*
File name: DateTest.cpp
Author: Ricardo Garcia
Date: 08/16/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 3.12 Page 101
Description: Test the Date.h class functions.
*/

#include "Date.h"

int main() {
	Date date{ 1, 1, 1900 };
	
	// Output date
	std::cout << "Date: ";
	date.displayDate();

	// Prompt for new month and read input
	std::cout << "\n\nEnter new month: ";
	int dateMonth{ 0 };
	std::cin >> dateMonth;
	date.setMonth(dateMonth);
	// Output date
	std::cout << "New month is " << date.getMonth();

	// Prompt for new day and read input
	std::cout << "\n\nEnter new day: ";
	int dateDay{ 0 };
	std::cin >> dateDay;
	date.setDay(dateDay);
	// Output day
	std::cout << "New day is " << date.getDay();

	// Prompt for new year and read input
	std::cout << "\n\nEnter new year: ";
	int dateYear{ 0 };
	std::cin >> dateYear;
	date.setYear(dateYear);
	// Output year
	std::cout << "New year is " << date.getYear();

	// Output date
	std::cout << "\n\nDate: ";
	date.displayDate();

	std::cout << std::endl; return 0;
}