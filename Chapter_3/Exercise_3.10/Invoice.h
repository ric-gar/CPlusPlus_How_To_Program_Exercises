/*
File name: Invoice.h
Author: Ricardo Garcia
Date: 08/16/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 3.10 Page 100
Description: Define an invoice class that has four data members, set/get member functions 
			 for each data member, constructor to validate the information, and get invoice
			 amount function.
*/

#include <string>

class Invoice {
public:
	// Constructor with four parameters
	Invoice(std::string number, std::string description, int invoiceQuantity, int invoicePrice)
		: partNumber{ number }, partDescription{ description } {
		// validate that invoice quantity isn't a negative value
		if (invoiceQuantity >= 0) {
			quantity = invoiceQuantity;
		}
		// validate that invoice price isn't a negative value
		if (invoicePrice >= 0) {
			price = invoicePrice;
		}
	}

	// part number set function
	void setPartNumber(std::string number) {
		partNumber = number;
	}

	// part number get function
	std::string getPartNumber() const {
		return partNumber;
	}

	// part description set function
	void setPartDescription(std::string description) {
		partDescription = description;
	}

	// part description get function
	std::string getPartDescription() const {
		return partDescription;
	}

	// quantity set function
	void setQuantity(int invoiceQuantity) {
		// validate that the quantity is at least 0
		if (invoiceQuantity >= 0)
			quantity = invoiceQuantity;
	}

	// quantity get function
	int getQuantity() const {
		return quantity;
	}

	// price set function
	void setPrice(int invoicePrice) {
		// validate that the quantity is at least 0
		if (invoicePrice >= 0)
			price = invoicePrice;
	}

	// price get function
	int getPrice() const {
		return price;
	}

	// return the invoice amount
	int getInvoiceAmount() const {
		return quantity * price;
	}

private:
	std::string partNumber;
	std::string partDescription;
	int quantity{ 0 };
	int price{ 0 };
};