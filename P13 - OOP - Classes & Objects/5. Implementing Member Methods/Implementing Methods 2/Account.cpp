#include "Account.h"
#include <iostream>

void Account::set_name(std::string n) {
    name = n;
}

std::string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    if (amount > threshold) {
        balance += amount;
        display_balance();
        return true;
    } else {
        display_balance();
        return false;

    }
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        display_balance();
        return true;
    } else {
        display_balance();
        return false;
    }
}

bool Account::display_balance() {
    std::cout << get_name() << ", Balance: " << get_balance() << std::endl;
    return true;
}