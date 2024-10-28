/*
File name: Exercise_6.39.cpp
Author: Ricardo Garcia
Date: 10/28/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.39 Page 278
Description: Iterative version of Towers of Hanoi
*/

#include <iostream>
#include <string>

// Move a top disk from peg1 to peg2 and print the move to console.
void movePegs(unsigned int& peg1, unsigned int& peg2, const char peg1Char, const char peg2Char, const unsigned int moveCounter) {

	// if peg isn't empty, then move top disk
	if (peg2 > 0) {
		peg2 = peg2 * 10 + peg1 % 10;
	}
	// else peg is empty
	else {
		peg2 = peg1 % 10;
	}

	peg1 = peg1 / 10; // remove moved disk from peg1

	// print the move
	std::cout << "Move " << moveCounter << ": " << peg1Char << " -> " << peg2Char << '\n';
}
int main() {
	
	// prompt user to enter the number of disks to solve
	std::cout << "Enter number of disks: ";
	unsigned int numDisks;
	std::cin >> numDisks;

	std::string parity; // parity for total starting disks

	// determine if the initial disks is even or odd
	if (0 == numDisks % 2) {
		parity = "even";
	}
	else {
		parity = "odd";
	}

	// initial disks for peg1
	unsigned int peg1{ numDisks };
	for (unsigned int i{ numDisks - 1 }; i > 0; --i) {
		peg1 = peg1 * 10 + i;
	}

	unsigned int solvedPeg{ peg1 }; // copy of initial peg1

	unsigned int peg2{ 0 };
	unsigned int peg3{ 0 };

	unsigned int moveCounter{ 1 };

	// loop until all pegs have been moved to peg3 in the correct order
	while (peg3 != solvedPeg) {

		// if the current move number is odd
		// Move the smallest disk one peg to the right if parity is even.
		// Move the smallest disk one peg to the left if parity is odd.
		if (1 == moveCounter % 2) {

			if (parity == "even" && 1 == peg1 % 10) {

				movePegs(peg1, peg2, '1', '2', moveCounter);
			}
			else if (parity == "even" && 1 == peg2 % 10) {
				
				movePegs(peg2, peg3, '2', '3', moveCounter);
			}
			else if (parity == "even" && 1 == peg3 % 10) {

				movePegs(peg3, peg1, '3', '1', moveCounter);
			}
			else if (parity == "odd" && 1 == peg1 % 10) {

				movePegs(peg1, peg3, '1', '3', moveCounter);
			}
			else if (parity == "odd" && 1 == peg2 % 10) {

				movePegs(peg2, peg1, '2', '1', moveCounter);
			}
			else if (parity == "odd" && 1 == peg3 % 10) {

				movePegs(peg3, peg2, '3', '2', moveCounter);
			}
			else {
				std::cout << "Error in innermost if/else of 1 == moveCounter % 2\n";
			}

		} // end of outer if

		// if the current move number is even.
		// Move the second smallest disk to another peg depending on
		// the total disks parity and individual disk parity.
		else if (0 == moveCounter % 2) {

			// find top disk for all three pegs
			unsigned int peg1TopDisk{ peg1 < 10 ? peg1 : peg1 % 10 };
			unsigned int peg2TopDisk{ peg2 < 10 ? peg2 : peg2 % 10 };
			unsigned int peg3TopDisk{ peg3 < 10 ? peg3 : peg3 % 10 };

			char pegToMove{ NULL };
			unsigned int topDiskNum{ 0 };

			// if/else to find the second smallest disk of the three pegs.
			// One of the pegs has no current disks moved to it.
			if ((1 == peg2TopDisk && 0 == peg3TopDisk) || (1 == peg3TopDisk && 0 == peg2TopDisk)) {

				pegToMove = '1';
				topDiskNum = peg1TopDisk;
			}
			else if ((1 == peg1TopDisk && 0 == peg3TopDisk) || (1 == peg3TopDisk && 0 == peg1TopDisk)) {

				pegToMove = '2';
				topDiskNum = peg2TopDisk;
			}
			else if ((1 == peg1TopDisk && 0 == peg2TopDisk) || (1 == peg2TopDisk && 0 == peg1TopDisk)) {

				pegToMove = '3';
				topDiskNum = peg3TopDisk;
			}
			else if ((1 == peg2TopDisk && peg1TopDisk < peg3TopDisk) || (1 == peg3TopDisk && peg1TopDisk < peg2TopDisk)) {

				pegToMove = '1';
				topDiskNum = peg1TopDisk;
			}
			else if ((1 == peg1TopDisk && peg2TopDisk < peg3TopDisk) || (1 == peg3TopDisk && peg2TopDisk < peg1TopDisk)) {

				pegToMove = '2';
				topDiskNum = peg2TopDisk;
			}
			else if ((1 == peg1TopDisk && peg3TopDisk < peg2TopDisk) || (1 == peg2TopDisk && peg3TopDisk < peg1TopDisk) ) {

				pegToMove = '3';
				topDiskNum = peg3TopDisk;
			}
			else {
				std::cout << "Error finding disk to move if/else statement\n";
			}

			// if/else to move the disks depending on the parity of total disks
			// and disk to be moved.
			if (('1' == pegToMove && parity == "even" && 1 == topDiskNum % 2)
				|| ('1' == pegToMove && parity == "odd" && 0 == topDiskNum % 2)){

				movePegs(peg1, peg2, '1', '2', moveCounter);
			}
			else if (('1' == pegToMove && parity == "odd" && 1 == topDiskNum % 2)
				|| ('1' == pegToMove && parity == "even" && 0 == topDiskNum % 2)) {

				movePegs(peg1, peg3, '1', '3', moveCounter);
			}
			else if (('2' == pegToMove && parity == "even" && 1 == topDiskNum % 2)
				|| ('2' == pegToMove && parity == "odd" && 0 == topDiskNum % 2)){

				movePegs(peg2, peg3, '2', '3', moveCounter);
			}
			else if (('2' == pegToMove && parity == "odd" && 1 == topDiskNum % 2)
				|| ('2' == pegToMove && parity == "even" && 0 == topDiskNum % 2)) {

				movePegs(peg2, peg1, '2', '1', moveCounter);
			}
			else if (('3' == pegToMove && parity == "even" && 1 == topDiskNum % 2)
				|| ('3' == pegToMove && parity == "odd" && 0 == topDiskNum % 2)) {

				movePegs(peg3, peg1, '3', '1', moveCounter);
			}
			else if (('3' == pegToMove && parity == "odd" && 1 == topDiskNum % 2)
				|| ('3' == pegToMove && parity == "even" && 0 == topDiskNum % 2)) {

				movePegs(peg3, peg2, '3', '2', moveCounter);
			}
			else {
				std::cout << "Error in innermost if/else of 0 == moveCounter % 2\n";
			}

		}// end of outer of else if
		else {
			std::cout << "Error in outer if/else statement\n";
		}

		++moveCounter;
	}
	return 0;
}