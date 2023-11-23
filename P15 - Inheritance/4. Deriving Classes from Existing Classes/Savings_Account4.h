#ifndef SAVINGS_ACCOUNT4_H
#define SAVINGS_ACCOUNT4_H
#include "Account4.h"
#include <string>

#pragma once

class Savings_Account: public Account {
public:
    double interest_rate;

    Savings_Account(std::string savings_name);
    ~Savings_Account();
    void sav_deposit(double amount);
    void sav_withdraw(double amount);

private:

};

#endif