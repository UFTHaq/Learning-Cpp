#include "Account4.h"


Account::Account(std::string name_val): name_account{name_val}, balance{0.0} {
    std::cout << "Construct Account " << name_account << std::endl;
}

Account::~Account() {
    std::cout << "Destruct Account " << name_account << std::endl;
}

void Account::deposit(double amount) {
    std::cout << "Account deposit called with : " << amount << std::endl;
    balance += amount;
    std::cout << name_account << " Balance : " << balance << std::endl;
}

void Account::withdraw(double amount) {
    std::cout << "Account withdraw called with : " << amount << std::endl;
    balance -= amount;
    std::cout << name_account << " Balance : " << balance << std::endl;
}