#ifndef MONEY2_H
#define MONEY2_H

#pragma once

class Money {
private:
    int dollars;
    int cents;
public:
    Money(int dollars, int cents);
    Money(int total);
    ~Money();
    int get_dollars() const {
        return dollars;
    }
    int get_cents() const {
        return cents;
    }

    friend Money operator+(const Money &lhs, const Money &rhs);


};

#endif