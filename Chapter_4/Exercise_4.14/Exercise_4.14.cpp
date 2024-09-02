/*
File name: Exercise_4.14.cpp
Author: Ricardo Garcia
Date: 08/28/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.14 Page 150-151
Description: Calculate whether a department-store customer has exceeded their credit limit
			 on a charge account.
*/

#include <iostream>
#include <iomanip>

int main() {
	// Initialzie account number and prompt user for input
	int accountNumber{ 0 };
	std::cout << "Enter account number (or -1 to quit): ";
	std::cin >> accountNumber;

	while (accountNumber != -1) {
		// Initialize balance and prompt user for input
		double balance{ 0 };
		std::cout << "Enter beginning balance: ";
		std::cin >> balance;

		// Initialize total charges and prompt user for input
		double totalCharges{ 0 };
		std::cout << "Enter total charges: ";
		std::cin >> totalCharges;

		// Initialize total credits and prompt user for input
		double totalCredits{ 0 };
		std::cout << "Enter total credits: ";
		std::cin >> totalCredits;

		// Initialize credit limit and prompt user for input
		double creditLimit{ 0 };
		std::cout << "Enter credit limit: ";
		std::cin >> creditLimit;

		// Calculate balance and print results
		balance += totalCharges - totalCredits;
		std::cout << std::fixed << std::setprecision(2) << "New balance is " << balance;

		// Check if credit limit has been exceeded
		if (balance > creditLimit) {
			std::cout << "\nAccount:\t" << accountNumber;
			std::cout << "\nCredit Limit:\t" << creditLimit;
			std::cout << "\nBalance:\t" << balance;
			std::cout << "\nCredit Limit Exceeded.";
		}

		// Prompt user for input (possible sentintel value)
		std::cout << "\n\nEnter account number (or -1 to quit): ";
		std::cin >> accountNumber;
	}

	return 0;
}