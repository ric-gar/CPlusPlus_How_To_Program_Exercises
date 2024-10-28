/*
File name: Exercise_5.17.cpp
Author: Ricardo Garcia
Date: 09/04/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.17 Page 207
Description: Calculate and display the total retail value of all products sold.
*/

#include <iostream>
#include <iomanip>

int main() {

	// fixed precision for two decimal places
	std::cout << std::fixed << std::setprecision(2);

	unsigned int productNum{ 0 }, // product number entered by user
		quantitySold{ 0 }, // quantity sold entered by user
		quantity1{ 0 }, // quantity for product 1
		quantity2{ 0 }, // quantity for product 2
		quantity3{ 0 }, // quantity for product 3
		quantity4{ 0 }, // quantity for product 4
		quantity5{ 0 }; // quantity for product 5
	double finalResult{ 0 }; // final total result

	// Print prompt
	std::cout << "Product 1: $2.98\n"
		<< "Product 2: $4.50\n"
		<< "Product 3: $9.98\n"
		<< "Product 4: $4.49\n"
		<< "Product 5: $6.87\n"
		<< "Type the end-of-file indicator to terminate input:\n"
		<< "\tOn UNIX/Linux/Mac OS X type <Ctrl> d then press Enter.\n"
		<< "\tOn Windows type <Ctrl> z then press Enter.\n"
		<< "Enter the product number and quantity sold: ";
	
	// terminate when EOF is entered
	// read input and give value to productNum and quantitySold
	while (std::cin >> productNum >> quantitySold) {

		// Process product numbers
		switch (productNum) {
		case 1: // Process product 1
			finalResult += quantitySold * 2.98;
			quantity1 += quantitySold;
			std::cout << "Product 1 sold " << quantitySold << " times for $" << quantitySold * 2.98;
			break;
		
		case 2: // Process product 2
			finalResult += quantitySold * 4.50;
			quantity2 += quantitySold;
			std::cout << "Product 2 sold " << quantitySold << " times for $" << quantitySold * 4.50;
			break;
		
		case 3: // Process product 3
			finalResult += quantitySold * 9.98;
			quantity3 += quantitySold;
			std::cout << "Product 3 sold " << quantitySold << " times for $" << quantitySold * 9.98;
			break;
		
		case 4: // Process product 4
			finalResult += quantitySold * 4.49;
			quantity4 += quantitySold;
			std::cout << "Product 4 sold " << quantitySold << " times for $" << quantitySold * 4.49;
			break;
		
		case 5: // Process product 5
			finalResult += quantitySold * 6.87;
			quantity5 += quantitySold;
			std::cout << "Product 5 sold " << quantitySold << " times for $" << quantitySold * 6.87;
			break;
		
		default: // Process error message
			std::cout << "Error: Incorrect product number value entered";
		}

		// Print prompt
		std::cout << "\n\n\nProduct 1: $2.98\n"
			<< "Product 2: $4.50\n"
			<< "Product 3: $9.98\n"
			<< "Product 4: $4.49\n"
			<< "Product 5: $6.87\n"
			<< "Type the end-of-file indicator to terminate input:\n"
			<< "\tOn UNIX/Linux/Mac OS X type <Ctrl> d then press Enter.\n"
			<< "\tOn Windows type <Ctrl> z then press Enter.\n"
			<< "Enter the product number and quantity sold: ";
	}

	// Print total final sales
	std::cout << "\n\nProduct 1 sold " << quantity1 << " times for $" << quantity1 * 2.98;
	std::cout << "\nProduct 2 sold " << quantity2 << " times for $" << quantity2 * 4.50;
	std::cout << "\nProduct 3 sold " << quantity3 << " times for $" << quantity3 * 9.98;
	std::cout << "\nProduct 4 sold " << quantity4 << " times for $" << quantity4 * 4.49;
	std::cout << "\nProduct 5 sold " << quantity5 << " times for $" << quantity5 * 6.87;
	std::cout << "\nTotal sales: $" << finalResult;

	std::cout << '\n'; return 0;
}