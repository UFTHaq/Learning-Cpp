#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"

#pragma once

class Checking_Account : public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &attribute);

private:
    static constexpr const char *def_name = "Unnamed ";
    static constexpr double def_balance = 0.0;
    // static constexpr double def_flat_fee = 1.50;

protected:
    double flat_fee {1.50};

public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    // Special withdrawal method
    bool withdraw(double amount);
    // Not have special deposit method, then just use inherites Account::withdraw methods

};

#endif