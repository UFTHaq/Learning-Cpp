#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include "I_Printable.h"
#include "IllegalBalanceException.h"

#pragma once

class Account: public I_Printable {
private:
    static constexpr const char *def_name = "Unnamed";
    static constexpr double def_balance = 0.0;

protected:
    std::string name;
    double balance;

public:
    Account(std::string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;

    double get_balance() const;

    virtual void print(std::ostream &os) const override;

    virtual ~Account();

private:

};

#endif