#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"

#pragma once

class Trust_Account: public Savings_Account {
protected:
    static constexpr int def_max_withdraw = 3;
    static constexpr double bonus_amount = 50.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr double max_withdraw_percent = 0.2;

private:
    int quota;
public:
    Trust_Account(std::string name, double balance, int quota = def_max_withdraw);
    
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;

    virtual void print(std::ostream &os) const override;

    virtual ~Trust_Account();


};

#endif