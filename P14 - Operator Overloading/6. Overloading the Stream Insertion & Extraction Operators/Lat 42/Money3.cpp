#include "Money3.h"

Money::Money(int dollars, int cents)
    : dollars{dollars}, cents{cents} {

}

Money::Money(int total)
    : dollars {total/100}, cents{total%100} {

}

Money::~Money() {

}

std::ostream &operator<<(std::ostream &os, const Money &money) {
    os << "dollar: " << money.dollars << " cents: " << money.cents;
    return os;
}