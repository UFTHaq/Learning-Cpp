#ifndef MONEY_H
#define MONEY_H
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

    bool operator==(const Money &rhs) const;

    bool operator!=(const Money &rhs) const;

};

#endif