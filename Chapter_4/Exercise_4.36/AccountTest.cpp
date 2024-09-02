/*
File name: AccountTest.cpp
Author: Ricardo Garcia
Date: 09/01/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.36 Page 156
Description: Modify Exercise 3.9 to support double values instead of integer.
*/

#include <iostream>
#include <iomanip>
#include "Account.h"

int main()
{
	// Create Account objects
	Account account1{ "Alice Smith", 50.0 };
	Account account2{ "Bob Smith", -7.0 };

	std::cout << std::fixed << std::setprecision(2);

	// Output balances
	std::cout << account1.getName() << " balance: $" << account1.getBalance() << std::endl;
	std::cout << account2.getName() << " balance: $" << account2.getBalance();

	// Output deposit prompt and read user input
	std::cout << "\n\nEnter deposit amount for " << account1.getName() << ": ";
	double depositAmount{ 0 };
	std::cin >> depositAmount;
	account1.deposit(depositAmount); // deposit input to account

	// Output balances
	std::cout << account1.getName() << " balance: $" << account1.getBalance() << std::endl;
	std::cout << account2.getName() << " balance: $" << account2.getBalance();

	// Output deposit prompt and read user input
	std::cout << "\n\nEnter deposit amount for " << account2.getName() << ": ";
	std::cin >> depositAmount;
	account2.deposit(depositAmount); // deposit input to account

	// Output balances
	std::cout << account1.getName() << " balance: $" << account1.getBalance() << std::endl;
	std::cout << account2.getName() << " balance: $" << account2.getBalance();

	// Output withdrawal prompt and read user input
	std::cout << "\n\nEnter withdrawal amount for " << account1.getName() << ": ";
	double withdrawalAmount;
	std::cin >> withdrawalAmount;
	account1.withdrawal(withdrawalAmount); // withdraw from account

	// Output balances
	std::cout << account1.getName() << " balance: $" << account1.getBalance() << std::endl;
	std::cout << account2.getName() << " balance: $" << account2.getBalance();

	// Output withdrawal prompt and read user input
	std::cout << "\n\nEnter withdrawal amount for " << account2.getName() << ": ";
	std::cin >> withdrawalAmount;
	account2.withdrawal(withdrawalAmount); // withdraw from account

	// Output balances
	std::cout << account1.getName() << " balance: $" << account1.getBalance() << std::endl;
	std::cout << account2.getName() << " balance: $" << account2.getBalance() << std::endl;

	return 0;
}