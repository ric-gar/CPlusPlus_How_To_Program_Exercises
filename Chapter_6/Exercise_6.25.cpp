/*
File name: Exercise_6.25.cpp
Author: Ricardo Garcia
Date: 09/11/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.25 Page 275
Description: Calculate the number of seconds since the clock "struck 12."
*/

#include <iostream>

// Calculate the number of seconds since 12:00:00
int numOfSeconds(int hours, int minutes, int seconds) {

	// Time between 12:00:00 and 12:59:59
	if (hours == 12)
		return (minutes * 60) + seconds;
	// Process all other times
	else
		return (hours * 60 * 60) + (minutes * 60) + seconds;
}

int main() {

	// initialize variables for first time
	int hours1{ 12 };
	int minutes1{ 30 };
	int seconds1{ 15 };
	// calculate seconds
	int time1{ numOfSeconds(hours1, minutes1, seconds1) };
	// Print result
	std::cout << "Number of seconds for " << hours1 << ":" << minutes1 << ":" << seconds1 << " is " << time1;

	// initialize variales for second time
	int hours2{ 7 };
	int minutes2{ 27 };
	int seconds2{ 59 };
	// calculate seconds
	int time2{ numOfSeconds(hours2, minutes2, seconds2) };
	// Print result
	std::cout << "\nNumber of seconds for " << hours2 << ":" << minutes2 << ":" << seconds2 << " is " << time2;

	// Calculate seconds between the two times
	std::cout << "\nSeconds between the two: " << time2 - time1 << '\n';

	return 0;
}