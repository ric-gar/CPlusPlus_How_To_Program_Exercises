/*
File name: EmployeeTest.cpp
Author: Ricardo Garcia
Date: 08/16/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 3.11 Page 100-101
Description: Test the Employee class functions. 
*/

#include <iostream> 
#include "Employee.h"

int main() {
	// Initialize objects
	Employee employee1{ "Bob", "Smith", 50000 };
	Employee employee2{ "Jane", "Smith", 60000 };

	// Output first employee information
	std::cout << "Employee #1"
		<< "\nName: " << employee1.getFirstName() << " " << employee1.getLastName()
		<< "\nYearly Salary: $" << employee1.getMonthlySalary() * 12;

	// Output second employee information
	std::cout << "\n\nEmployee #2"
		<< "\nName: " << employee2.getFirstName() << " " << employee2.getLastName()
		<< "\nYearly Salary: $" << employee2.getMonthlySalary() * 12;

	// Prompt user to enter new first name and read input
	std::cout << "\n\nEnter new first name for Employee #1: ";
	std::string firstName;
	std::cin >> firstName;
	employee1.setFirstName(firstName); // update first name

	// Output first employee information
	std::cout << "\nEmployee #1"
		<< "\nName: " << employee1.getFirstName() << " " << employee1.getLastName()
		<< "\nYearly Salary: $" << employee1.getMonthlySalary() * 12;

	// Prompt user to enter new last name and read input
	std::cout << "\n\nEnter last name for Employee #2: ";
	std::string lastName;
	std::cin >> lastName;
	employee2.setLastName(lastName); // update last name

	// Output first employee information
	std::cout << "\nEmployee #2"
		<< "\nName: " << employee2.getFirstName() << " " << employee2.getLastName()
		<< "\nYearly Salary: $" << employee2.getMonthlySalary() * 12;

	// Prompt to give raise for each employee
	std::cout << "\n\n10 percent raise for " << employee1.getFirstName() << " " << employee1.getLastName();
	employee1.setMonthlySalary(employee1.getMonthlySalary() * 1.10);
	std::cout << "\n10 percent raise for " << employee2.getFirstName() << " " << employee2.getLastName();
	employee2.setMonthlySalary(employee2.getMonthlySalary() * 1.10);

	// Output first employee information
	std::cout << "\n\nEmployee #1"
		<< "\nName: " << employee1.getFirstName() << " " << employee1.getLastName()
		<< "\nYearly Salary: $" << employee1.getMonthlySalary() * 12;

	// Output first employee information
	std::cout << "\nEmployee #2"
		<< "\nName: " << employee2.getFirstName() << " " << employee2.getLastName()
		<< "\nYearly Salary: $" << employee2.getMonthlySalary() * 12;

	std::cout << std::endl; return 0;
}