/*
File name: DollarAmount.h
Author: Ricardo Garcia
Date: 09/08/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.30 Page 209
Description: Modify Figure 5.8 to support a constructor that takes in two parameters.
             First parameter: dollars. Second parameter: cents.
*/

#include <string>
#include <cmath> 

class DollarAmount {
public:

   // initialize amount from an int64_t value
   explicit DollarAmount(int64_t value) : amount{value} { }

   // initialize amount from int64_t dollars and int64_t cents
   DollarAmount(int64_t dollars, int64_t cents) : amount{ dollars * 100 + cents } {}

   // add right's amount to this object's amount
   void add(DollarAmount right) {
      amount += right.amount; 
   }

   // subtract right's amount from this object's amount
   void subtract(DollarAmount right) {
      amount -= right.amount;
   }

   // uses integer arithmetic to calculate interest amount, 
   // then calls add with the interest amount
   void addInterest(int rate, int divisor) {
      // create DollarAmount representing the interest
      DollarAmount interest{
         (amount * rate + divisor / 2) / divisor
      };

      add(interest); // add interest to this object's amount
   }

   // return a string representation of a DollarAmount object
   std::string toString() const {
      std::string dollars{std::to_string(amount / 100)};
      std::string cents{std::to_string(std::abs(amount % 100))};
      return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
   }

private:
   int64_t amount{0}; // dollar amount in pennies
};