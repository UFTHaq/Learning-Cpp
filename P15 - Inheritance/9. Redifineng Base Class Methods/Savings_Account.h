#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

#pragma once

// Saving Account class
// Deposit method increments amount to be deposited by 
//     amount *int_rate percentage!!
// So a 1000 deposit at 5% interest rate will deposit + 50 = 1050

// Withdraw method does not specialize

class Savings_Account : public Account {
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &attribute);
protected:
    double int_rate;
public:
    Savings_Account();
    Savings_Account(double balance, double int_rate);
    void deposit(double amount);
    // Withdraw is inherited
};

#endif