/*
File name: Exercise_6.54.cpp
Author: Ricardo Garcia
Date: 09/15/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.54 Page 280
Description: Modify Fig. 6.9 to support C++ random-number generation.
*/

#include <iostream>
#include <cstdlib> // contains prototypes for functions srand and rand
#include <random>
#include <ctime> // contains prototype for function time
using namespace std;

unsigned int rollDice(); // rolls dice, calculates and displays sum

default_random_engine engine{ static_cast<unsigned int>(time(0)) };
uniform_int_distribution<int> randomInt{ 1, 6 };

int main() {
    // scoped enumeration with constants that represent the game status 
    enum class Status { CONTINUE, WON, LOST }; // all caps in constants

    unsigned int myPoint{ 0 }; // point if no win or loss on first roll
    Status gameStatus; // can be CONTINUE, WON or LOST
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

    // display won or lost message
    if (Status::WON == gameStatus) {
        cout << "Player wins" << endl;
    }
    else {
        cout << "Player loses" << endl;
    }
}

// roll dice, calculate sum and display results
unsigned int rollDice() {

    int die1{ randomInt(engine) }; // first die roll
    int die2{ randomInt(engine) }; // second die roll
    int sum{ die1 + die2 }; // compute sum of die values

    // display results of this roll
    cout << "Player rolled " << die1 << " + " << die2
        << " = " << sum << endl;
    return sum;
}