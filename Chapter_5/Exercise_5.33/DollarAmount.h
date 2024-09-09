/*
File name: DollarAmount.h
Author: Ricardo Garcia
Date: 09/08/2024
Book: C++ How to Program 10th edition by Paul Deitel and Harvey Deitel
Exercise: 5.33 Page 209
Description: Modify Exercise 5.32 to support variables dollars and cents
             in leiu of amount.
*/

#include <string>
#include <cmath> 

class DollarAmount {
public:

   // initialize amount from an int64_t value
    explicit DollarAmount(int64_t value) : dollars{ value / 100 }, cents{ value % 100 } {}

   // initialize amount from int64_t dollars and int64_t cents
    DollarAmount(int64_t dollars, int64_t cents) : dollars{ dollars }, cents{ cents } {}

   // add right's amount to this object's amount
   void add(DollarAmount right) {
       int64_t amount{ (dollars * 100 + cents) + (right.dollars * 100 + right.cents) };
       dollars = amount / 100;
       cents = amount % 100;
   }

   // subtract right's amount from this object's amount
   void subtract(DollarAmount right) {
       int64_t amount{ (dollars * 100 + cents) - (right.dollars * 100 + right.cents) };
       dollars = amount / 100;
       cents = amount % 100;
   }

   // divide amount by divisor
   void divide(int divisor) {
       int64_t amount{ ((dollars * 100 + cents) + divisor / 2) / divisor };
       dollars = amount / 100;
       cents = amount % 100;
   }

   // uses integer arithmetic to calculate interest amount,
   // then calls add with the interest amount
   void addInterest(int rate, int divisor) {
       
       int64_t amount{ dollars * 100 + cents };

       // handle Banker's rounding for (.5 - .59) values
       if (
           ((amount * rate / divisor % 2) == 0) // interest is even
           && ((amount * rate % divisor) >= (divisor / 2)) // >= 0.5
           && ((amount * rate % divisor) <= (divisor / 2 + divisor / 10 - 1)) // <= 0.59
           ) {

           int64_t interest{ amount * rate / divisor };
           add(DollarAmount{ interest / 100, interest % 100 });
       }
       else { // handle rounding as normal for rest of the values

           int64_t interest{ (amount * rate + divisor / 2) / divisor };
           add(DollarAmount{ interest / 100, interest % 100 });
       }
   }

   // return a string representation of a DollarAmount object
   std::string toString() const {
      return std::to_string(dollars) + "." + (std::to_string(cents).size() == 1 ? "0" : "") + std::to_string(cents);
   }

private:
   int64_t dollars{0};
   int64_t cents{ 0 };
};