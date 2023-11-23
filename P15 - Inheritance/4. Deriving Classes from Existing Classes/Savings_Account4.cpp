#include "Savings_Account4.h"

Savings_Account::Savings_Account(std::string saving_name)
    : Account(saving_name) , interest_rate{3.0}  {
    std::cout << "Construct Savings Account " << name_account << std::endl;
}

Savings_Account::~Savings_Account() {
    std::cout << "Destruct Savings Account " << name_account << std::endl;
}

void Savings_Account::sav_deposit(double amount) {
    std::cout << "Savings Account deposit calles with : " << amount << std::endl;
    balance += amount;
    std::cout << name_account << " Balance : " << balance << std::endl;
}

void Savings_Account::sav_withdraw(double amount) {
    std::cout << "Savings Account withdraw called with : " << amount << std::endl;
    balance -= amount;
    std::cout << name_account << " Balance : " << balance << std::endl;
}