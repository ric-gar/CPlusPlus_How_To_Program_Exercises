/*
File name: Exercise_6.3.cpp
Author: Ricardo Garcia
Date: 09/11/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 6.3 Page 269
Description: Test the examples of the math library function calls shown in Fig. 6.2.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

	std::cout << std::fixed 
		<< std::setprecision(1) << "ceil(9.2) = " << ceil(9.2) << '\n'
		<< "ceil(-9.8) = " << ceil(-9.8) << '\n'
		<< "cos(0.0) = " << cos(0.0) << '\n'
		<< std::setprecision(6) << "exp(1.0) = " << exp(1.0) << '\n'
		<< "exp(2.0) = " << exp(2.0) << '\n'
		<< std::setprecision(1) << "fabs(5.1) = " << fabs(5.1) << '\n'
		<< "fabs(0.0) = " << fabs(0.0) << '\n'
		<< std::setprecision(2) << "fabs(-8.76) = " << fabs(-8.76) << '\n'
		<< std::setprecision(1) << "floor(9.2) = " << floor(9.2) << '\n'
		<< "floor(-9.8) = " << floor(-9.8) << '\n'
		<< std::setprecision(1) << "fmod(2.6, 1.2) = " << fmod(2.6, 1.2) << '\n'
		<< "log(2.718282) = " << log(2.718282) << '\n'
		<< "log(7.389056) = " << log(7.389056) << '\n'
		<< "log10(10.0) = " << log10(10.0) << '\n'
		<< "log10(100.0) = " << log10(100.0) << '\n'
		<< std::setprecision(0) << "pow(2, 7) = " << pow(2, 7) << '\n'
		<< "pow(9, 0.5) = " << pow(9, 0.5) << '\n'
		<< "sin(0.0) = " << sin(0.0) << '\n'
		<< std::setprecision(1) << "sqrt(9.0) = " << sqrt(9.0) << '\n'
		<< std::setprecision(0) << "tan(0.0) = " << tan(0.0) << '\n';

	return 0;
}