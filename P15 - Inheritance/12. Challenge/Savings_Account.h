#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

#pragma once

class Savings_Account : public Account {
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &attribute);

private:
    static constexpr const char *def_name = "Unnamed ";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;

protected:
    double int_rate;

public:
    Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    // Special deposit method
    bool deposit(double amount);
    // Not have special withdrawal method, then just use inherites Account::withdraw methods

};

#endif