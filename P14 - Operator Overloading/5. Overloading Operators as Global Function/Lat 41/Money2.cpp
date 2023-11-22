#include "Money2.h"

Money::Money(int dollars, int cents)
    : dollars{dollars}, cents{cents} {

    }

Money::Money(int total) 
    : dollars{total/100}, cents{total%100} {

    }

// Sum
Money operator+(const Money &lhs, const Money &rhs) {
    int total = (lhs.dollars + rhs.dollars) * 100;
    total += lhs.cents + rhs.cents;
    return Money{total};
}

Money::~Money() {

}