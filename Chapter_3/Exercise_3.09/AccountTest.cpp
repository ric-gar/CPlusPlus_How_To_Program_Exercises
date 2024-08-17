/*
File name: AccountTest.cpp
Author: Ricardo Garcia
Date: 08/16/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 3.09 Page 100 
Description: Modify Figure 3.9 to test the withdraw function. 
*/

#include <iostream>
#include "Account.h"

int main() 
{
	// Create Account objects
	Account account1{"Alice Smith", 50};
	Account account2{"Bob Smith", -7}; 

	// Output balances
	std::cout << account1.getName() << " balance: $" << account1.getBalance() << std::endl;
	std::cout << account2.getName() << " balance: $" << account2.getBalance();

	// Output deposit prompt and read user input
	std::cout << "\n\nEnter deposit amount for " << account1.getName() << ": ";
	int depositAmount{ 0 };
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
	int withdrawalAmount;
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