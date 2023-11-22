#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

#pragma once

class Account {
private:
    // Attributes
    std::string name;
    double balance;

public:
    // variable
    static const int threshold {100};

    // Methods declared inline
    void set_balance(double bal) {
        balance = bal;
    }
    double get_balance() {
        return balance;
    }

    // Methods will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
    bool display_balance();

};

#endif