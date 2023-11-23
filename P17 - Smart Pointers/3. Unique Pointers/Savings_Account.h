#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

#pragma once

class Savings_Account: public Account {
private:
    static constexpr double def_interest_rate = 1.5;

protected:
    double interest_rate;

public:
    Savings_Account(std::string name, double balance, double interest_rate = def_interest_rate);

    virtual bool deposit(double amount) override;
    
    virtual bool withdraw(double amount) override;

    virtual void print(std::ostream &os) const override;

    virtual ~Savings_Account();


};

#endif