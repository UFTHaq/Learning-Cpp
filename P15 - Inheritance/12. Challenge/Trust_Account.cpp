#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate, int max_withdrawal) 
    : Savings_Account{name, balance, int_rate}, max_withdrawal{max_withdrawal} {
        std::cout << "Trust - Constructor Build - [" << name << "]" << std::endl;
    }

bool Trust_Account::deposit(double amount) {
    if (amount >= bonus_threshold) {
        amount = amount + bonus_amount;
    } else {
        amount = amount;
    }
    return Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if (amount < (balance*max_withdraw_percent)) {
        if (max_withdrawal <= 0) {
            return false;
        } else {
            max_withdrawal--;
            return Account::withdraw(amount);
        }

    } else {
        return false;
    }
}

int Trust_Account::get_quota() const {
    return max_withdrawal;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &attribute) {
    os << "[Trust_Account: " << attribute.name << ": $" << attribute.balance << ", " << attribute.int_rate << "%]";
    return os;
}