#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"

#pragma once

class Trust_Account : public Savings_Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &attribute);

private:
    static constexpr const char *def_name = "Unnamed";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr int def_max_withdrawal = 3;
    static constexpr double bonus_amount = 50.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr double max_withdraw_percent = 0.2;

protected:
    int max_withdrawal;

public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate, int max_withdrawal = def_max_withdrawal);
    // Special deposit method
    bool deposit(double amount);
    // Special withdraw_rules method
    bool withdraw(double amount);
    // getters
    int get_quota() const;

};

#endif