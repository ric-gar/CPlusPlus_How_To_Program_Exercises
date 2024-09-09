/*
File name: DollarAmount.h
Author: Ricardo Garcia
Date: 09/08/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.32 Page 209
Description: Use banker's rounding for the addInterest member function.
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

   // divide amount by divisor
   void divide(int divisor) {
       amount = (amount + divisor / 2) / divisor;
   }

   // uses integer arithmetic to calculate interest amount,
   // then calls add with the interest amount
   void addInterest(int rate, int divisor) {

       // handle Banker's rounding for (.5 - .59) values
       if (
           ((amount * rate / divisor % 2) == 0) // interest is even
           && ((amount * rate % divisor) >= (divisor / 2)) // >= 0.5
           && ((amount * rate % divisor) <= (divisor / 2 + divisor / 10 - 1)) // <= 0.59
           ) {

           add(DollarAmount{ amount * rate / divisor });
       }
       else { // handle rounding as normal for rest of the values

           add(DollarAmount{ (amount * rate + divisor / 2) / divisor });
       }
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