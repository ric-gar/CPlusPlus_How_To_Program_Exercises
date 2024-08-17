/*
File name: InvoiceTest.cpp
Author: Ricardo Garcia
Date: 08/16/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 3.10 Page 100
Description: Define an invoice test program that utilizes all the invoice.h functions. 
*/

#include <iostream> 
#include "invoice.h"

int main() {
	Invoice invoice{ "12345", "Cars", -5, -10 };
	
	// Output invoice information
	std::cout << "Invoice"
		<< "\nItem: " << invoice.getPartDescription()
		<< "\nItem Number: " << invoice.getPartNumber()
		<< "\nQuantity: " << invoice.getQuantity()
		<< "\nPrice: " << invoice.getPrice();

	// Prompt user to enter new item name and read input
	std::cout << "\n\nEnter new item name: ";
	std::string invoiceName;
	std::getline(std::cin, invoiceName);
	invoice.setPartDescription(invoiceName);

	// Output invoice information
	std::cout << "\nInvoice"
		<< "\nItem: " << invoice.getPartDescription()
		<< "\nItem Number: " << invoice.getPartNumber()
		<< "\nQuantity: " << invoice.getQuantity()
		<< "\nPrice: " << invoice.getPrice();

	// Prompt user to enter new item number and read input
	std::cout << "\n\nEnter new part number: ";
	std::string invoicePartNumber;
	std::getline(std::cin, invoicePartNumber);
	invoice.setPartNumber(invoicePartNumber);

	// Output invoice information
	std::cout << "\nInvoice"
		<< "\nItem: " << invoice.getPartDescription()
		<< "\nItem Number: " << invoice.getPartNumber()
		<< "\nQuantity: " << invoice.getQuantity()
		<< "\nPrice: " << invoice.getPrice();

	// Prompt user to enter new quantity and read input
	std::cout << "\n\nEnter new quantity: ";
	int invoiceQuantity{ 0 };
	std::cin >> invoiceQuantity;
	invoice.setQuantity(invoiceQuantity);

	// Output invoice information
	std::cout << "\nInvoice"
		<< "\nItem: " << invoice.getPartDescription()
		<< "\nItem Number: " << invoice.getPartNumber()
		<< "\nQuantity: " << invoice.getQuantity()
		<< "\nPrice: " << invoice.getPrice();

	// Prompt user to enter new price and read input
	std::cout << "\n\nEnter new price: ";
	int invoicePrice{ 0 };
	std::cin >> invoicePrice;
	invoice.setPrice(invoicePrice);

	// Output invoice information
	std::cout << "\nInvoice"
		<< "\nItem: " << invoice.getPartDescription()
		<< "\nItem Number: " << invoice.getPartNumber()
		<< "\nQuantity: " << invoice.getQuantity()
		<< "\nPrice: " << invoice.getPrice();

	// Output invoice amount (quantity * price)
	std::cout << "\n\nInvoice amount (quantity * price): $" << invoice.getInvoiceAmount();

	std::cout << std::endl; return 0;
}