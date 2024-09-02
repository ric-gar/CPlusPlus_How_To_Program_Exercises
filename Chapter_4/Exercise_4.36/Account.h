/*
File name: Account.h
Author: Ricardo Garcia
Date: 09/01/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 4.36 Page 156
Description: Modify Exercise 3.9 to support double values instead of integer.
*/

#include <string>

class Account {
public:
    // Define constructor
    // initialize account name and account balance
    Account(std::string accountName, double initialBalance)
        : name{ accountName } {
        // validate initial balance isn't negative
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    // Deposit a positive integer value to the account balance
    void deposit(double depositAmount) {
        // validate the deposit amount isn't negative
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }

    // Withdraw from account balance
    void withdrawal(double withdrawalAmount) {
        // error message if withdrawal amount is invalid
        if (withdrawalAmount > balance) {
            std::cout << "Withdrawal amount exceeded account balance." << std::endl;
        }
        // withdraw if amount is valid
        if (withdrawalAmount <= balance) {
            balance = balance - withdrawalAmount;
        }
    }

    // return the current balance
    double getBalance() const {
        return balance;
    }

    // update the account name
    void setName(std::string accountName) {
        name = accountName;
    }

    // return the account name
    std::string getName() const {
        return name;
    }

private:
    std::string name;
    double balance{ 0 };
};