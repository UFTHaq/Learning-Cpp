#ifndef MONEY3_H
#define MONEY3_H
#include <iostream>

#pragma once

class Money {
private:
    int dollars;
    int cents;
public:
    Money(int dollars, int cents);
    Money(int total);
    ~Money();

    friend std::ostream &operator<<(std::ostream &os, const Money &money);
};

#endif