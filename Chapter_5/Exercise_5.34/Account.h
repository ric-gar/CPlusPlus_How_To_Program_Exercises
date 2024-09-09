/*
File name: Account.h
Author: Ricardo Garcia
Date: 09/08/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.34 Page 209
Description: Upgrade Exercise 3.9 to support the class DollarAmount for balance.
*/

#include <string>
#include "DollarAmount.h"

class Account {
public:
    // Define constructor
    // initialize account name and account balance
    Account(std::string accountName, int64_t dollars, int64_t cents) 
        : name{accountName} {
        // validate initial balance isn't negative
        if ( ( dollars * 100 + cents ) > 0) {
            balance.add(DollarAmount{ dollars, cents });
        }
    }

    // Deposit a positive integer value to the account balance
    void deposit(int64_t dollars, int64_t cents) {
        // validate the deposit amount isn't negative
        if ((dollars * 100 + cents) > 0) {
            balance.add(DollarAmount{ dollars, cents });
        }
    }

    // Withdraw from account balance
    void withdrawal(int64_t dollars, int64_t cents) {
        // error message if withdrawal amount is invalid
        if ((dollars * 100 + cents) > (balance.getDollars() * 100 + balance.getCents()) ) {
            std::cout << "Withdrawal amount exceeded account balance.\n";
        }
        // withdraw if amount is valid
        if ((dollars * 100 + cents) <= (balance.getDollars() * 100 + balance.getCents())) {
            balance.subtract(DollarAmount{ dollars, cents });
        }
    }

    // return the current balance
    std::string getBalance() {
        return balance.toString();
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
    DollarAmount balance{ 0, 0 };
};