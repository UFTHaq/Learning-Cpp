#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, int quota)
    : Savings_Account(name, balance), quota{quota} {
        std::cout << "Trust Constructor - " << name << std::endl;
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
    if (amount < balance*max_withdraw_percent && quota != 0) {
        quota--;
        return Account::withdraw(amount);
    } else {
        return false;
    }
}

void Trust_Account::print(std::ostream &os) const {
        os.precision(2);
        os << std::fixed;
        os << "[Trust: " << name << ", Balance: " << balance << ", Int_rate: " << interest_rate << "]" << " [Quota: " << quota << "]";
    }

Trust_Account::~Trust_Account() {
    std::cout << "Trust Destructor - " << "[" << name << "]" << std::endl;
}