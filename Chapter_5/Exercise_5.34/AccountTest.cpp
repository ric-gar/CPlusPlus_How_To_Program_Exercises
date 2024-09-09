/*
Author: Ricardo Garcia
File name: AccountTest.cpp
Date: 09/08/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.34 Page 209
Description: Test the Account.h changes supporting the DollarAmount.h class.
*/

#include <iostream>
#include "Account.h"

int main() {
	// Create Account objects
	Account account1{ "Alice Smith", 1337, 45 };
	Account account2{ "Bob Smith", 246, 80 };

	// Output balances
	std::cout << account1.getName() << " balance: $" << account1.getBalance() << '\n';
	std::cout << account2.getName() << " balance: $" << account2.getBalance();

	// Output deposit prompt and read user input
	std::cout << "\n\nEnter dollars to deposit  for " << account1.getName() << ": ";
	int64_t dollars{ 0 };
	std::cin >> dollars;
	std::cout << "Enter cents to deposit for " << account1.getName() << ": ";
	int64_t cents{ 0 };
	std::cin >> cents;
	account1.deposit(dollars, cents); // deposit input to account

	// Output balances
	std::cout << account1.getName() << " balance: $" << account1.getBalance() << '\n';
	std::cout << account2.getName() << " balance: $" << account2.getBalance();

	// Output deposit prompt and read user input
	std::cout << "\n\nEnter deposit amount for " << account2.getName() << ": ";
	std::cin >> dollars;
	std::cout << "Enter cents to deposit for " << account2.getName() << ": ";
	std::cin >> cents;
	account2.deposit(dollars, cents); // deposit input to account

	// Output balances
	std::cout << account1.getName() << " balance: $" << account1.getBalance() << '\n';
	std::cout << account2.getName() << " balance: $" << account2.getBalance();

	// Output withdrawal prompt and read user input
	std::cout << "\n\nEnter dollars to withdrawal for " << account1.getName() << ": ";
	std::cin >> dollars;
	std::cout << "Enter cents to withdrawal for " << account1.getName() << ": ";
	std::cin >> cents;
	account1.withdrawal(dollars, cents); // withdraw from account

	// Output balances
	std::cout << account1.getName() << " balance: $" << account1.getBalance() << '\n';
	std::cout << account2.getName() << " balance: $" << account2.getBalance();

	// Output withdrawal prompt and read user input
	std::cout << "\n\nEnter dollars to withdrawal for " << account2.getName() << ": ";
	std::cin >> dollars;
	std::cout << "Enter cents to withdrawal for " << account2.getName() << ": ";
	std::cin >> cents;
	account2.withdrawal(dollars, cents); // withdraw from account

	// Output balances
	std::cout << account1.getName() << " balance: $" << account1.getBalance() << '\n';
	std::cout << account2.getName() << " balance: $" << account2.getBalance() << '\n';

	return 0;
}