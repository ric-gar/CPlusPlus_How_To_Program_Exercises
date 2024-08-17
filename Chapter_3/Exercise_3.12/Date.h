/*
File name: Date.h
Author: Ricardo Garcia
Date: 08/16/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 3.12 Page 101
Description: Date class with three data members, set/get functions, 
			 and display date function. 
*/

#include <iostream>

class Date {
public:
	// Constructor
	Date(int dateMonth, int dateDay, int dateYear)
		: day{ dateDay }, year{ dateYear }, month{ dateMonth } {
		// Validate month
		if (dateMonth < 1)
			month = 1;
		if (dateMonth > 12)
			month = 1;
	}

	// month set function
	void setMonth(int dateMonth) {
		month = dateMonth;
		// Validate month
		if (dateMonth < 1)
			month = 1;
		if (dateMonth > 12)
			month = 1;
	}

	// month get function
	int getMonth() const {
		return month;
	}

	// day set function
	void setDay(int dateDay) {
		day = dateDay;
	}

	// day get function
	int getDay() const{
		return day;
	}

	// year set function
	void setYear(int dateYear) {
		year = dateYear;
	}

	// year get function
	int getYear() const {
		return year;
	}

	// Output the date
	void displayDate() const{
		if (month < 10)
			std::cout << "0";
		std::cout << month << "/";
		if (day < 10)
			std::cout << "0";
		std::cout << day << "/" << year;
	}

private:
	int month{ 1 };
	int day{ 1 };
	int year{ 1 };
};