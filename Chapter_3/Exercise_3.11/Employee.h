/*
File name: Employee.h
Author: Ricardo Garcia
Date: 08/16/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 3.11 Page 100-101
Description: Employee class with three data members and set/get functions. 
*/

#include <string>

class Employee {
public:
	// Constructor
	Employee(std::string employeeFirstName, std::string employeeLastName, int employeeMonthlySalary) 
		: firstName{ employeeFirstName }, lastName{ employeeLastName } {
		// Validate that employee monthly salary is at least 0
		if (employeeMonthlySalary >= 0)
			monthlySalary = employeeMonthlySalary;
	}

	// first name set function
	void setFirstName(std::string employeeFirstName) {
		firstName = employeeFirstName;
	}

	// first name get function
	std::string getFirstName() const {
		return firstName;
	}

	// last name set function
	void setLastName(std::string employeeLastName) {
		lastName = employeeLastName;
	}

	// last name get function
	std::string getLastName() const {
		return lastName;
	}

	// monthly salary set function
	void setMonthlySalary(int employeeMonthlySalary) {
		monthlySalary = employeeMonthlySalary;
	}

	// monthly salary get function
	int getMonthlySalary() const {
		return monthlySalary;
	}

private:
	std::string firstName;
	std::string lastName;
	int monthlySalary{ 0 };
};