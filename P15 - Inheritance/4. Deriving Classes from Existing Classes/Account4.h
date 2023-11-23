#ifndef ACCOUNT4_H
#define ACCOUNT4_H
#include <iostream>
#include <string>

#pragma once

class Account {
public:
    std::string name_account;
    double balance;
    
    Account(std::string name_val);
    ~Account();
    void deposit(double amount);
    void withdraw(double amount);

};

#endif