/*
File name: Account.h
Author: Ricardo Garcia
Date: 08/16/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 3.09 Page 100
Description: Modify Figure 3.8 to support a withdrawal function. 
*/
#include <string>

class Account {
public:
    // Define constructor
    // initialize account name and account balance
    Account(std::string accountName, int initialBalance) 
        : name{accountName} {
        // validate initial balance isn't negative
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    // Deposit a positive integer value to the account balance
    void deposit(int depositAmount) {
        // validate the deposit amount isn't negative
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }

    // Withdraw from account balance
    void withdrawal(int withdrawalAmount) {
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
    int getBalance() const {
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
    int balance{0};
};