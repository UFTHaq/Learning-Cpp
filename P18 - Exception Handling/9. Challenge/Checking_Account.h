#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"

#pragma once

class Checking_Account: public Account {
protected:
    double flat_fee{1.50};

public:
    Checking_Account(std::string name, double balance);

    virtual bool deposit(double amount) override;

    virtual bool withdraw(double amount) override;

   virtual void print(std::ostream &os) const override;

    virtual ~Checking_Account();

private:

};

#endif