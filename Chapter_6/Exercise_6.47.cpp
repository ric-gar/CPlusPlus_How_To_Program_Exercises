/*
File name: Exercise_6.47.cpp
Author: Ricardo Garcia
Date: 09/15/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.47 Page 279-280
Description: Modify the craps program of Fig. 6.9 to allow wagering.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

unsigned int rollDice(); // rolls dice, calculates and displays sum
void checkWager(unsigned int&, unsigned int); // check if wager exceeds bank balance


int main() {
    // scoped enumeration with constants that represent the game status 
    enum class Status { CONTINUE, WON, LOST }; // all caps in constants

    // randomize random number generator using current time
    srand(static_cast<unsigned int>(time(0)));

    Status gameStatus; // can be CONTINUE, WON or LOST
    unsigned int bankBalance{ 1000 }; // bank balance

    // while there is a bank balance
    while (bankBalance > 0) {

        // Prompt user to enter wager
        cout << "Bank balance: " << bankBalance
            << "\nEnter your wager : ";
        unsigned int wager{ 0 };
        cin >> wager;
        checkWager(wager, bankBalance); // check that the wager is appropriate

        // Print chatter
        if (wager == bankBalance)
            cout << "\nOh, you're going for broke, huh?\n";
        else if (wager < 100)
            cout << "\nAw cmon, take a chance!\n";

        unsigned int myPoint{ 0 }; // point if no win or loss on first roll
        unsigned int sumOfDice{ rollDice() }; // first roll of the dice

        // determine game status and point (if needed) based on first roll
        switch (sumOfDice) {
        case 7: // win with 7 on first roll
        case 11: // win with 11 on first roll           
            gameStatus = Status::WON;
            break;
        case 2: // lose with 2 on first roll
        case 3: // lose with 3 on first roll
        case 12: // lose with 12 on first roll             
            gameStatus = Status::LOST;
            break;
        default: // did not win or lose, so remember point
            gameStatus = Status::CONTINUE; // game is not over
            myPoint = sumOfDice; // remember the point
            cout << "Point is " << myPoint << endl;
            break; // optional at end of switch  
        }

        // while game is not complete
        while (Status::CONTINUE == gameStatus) { // not WON or LOST
            sumOfDice = rollDice(); // roll dice again

            // determine game status
            if (sumOfDice == myPoint) { // win by making point
                gameStatus = Status::WON;
            }
            else {
                if (sumOfDice == 7) { // lose by rolling 7 before point
                    gameStatus = Status::LOST;
                }
            }
        }

        // display won and increase bank balance
        if (Status::WON == gameStatus) {
            cout << "Player wins\n";
            bankBalance += wager; // add wager to bank balance

            // Print chatter for having more than $2000 bank balance
            if (2000 == bankBalance)
                cout << "\nYou're up big. Now's the time to cash in your chips!\n";
        }
        // display lost and decrease bank balance
        else {
            cout << "Player loses\n";
            bankBalance -= wager; // subtract wager to bank balance

            // Print chatter for $0 bank balance
            if (0 == bankBalance)
                cout << "Sorry. You busted!\n";
        }

        cout << "\n";
    }
}

// roll dice, calculate sum and display results
unsigned int rollDice() {
    int die1{ 1 + rand() % 6 }; // first die roll
    int die2{ 1 + rand() % 6 }; // second die roll
    int sum{ die1 + die2 }; // compute sum of die values

    // display results of this roll
    cout << "\nPlayer rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}

// check if wager exceeds bank balance
void checkWager(unsigned int& wager, unsigned int bankBalance) {

    // while invalid wager is entered
    while (wager > bankBalance) {

        // Prompt user to enter wager
        cout << "\nWager exceeds bank balance!"
            << "\nCurrent bank balance: " << bankBalance
            << "\nEnter a new wager: ";
        cin >> wager;
    }
}