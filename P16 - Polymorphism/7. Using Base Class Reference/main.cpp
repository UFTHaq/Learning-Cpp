#include <iostream>

class Account {
public:
    virtual void withdraw(double amount) const {
        std::cout << "Account::withdraw  : " << amount << std::endl;
    }
    virtual ~Account() {}
};

class Savings: public Account {
public:
    virtual void withdraw(double amount) const override {
        std::cout << "Savings::withdraw  : " << amount << std::endl;
    }
    virtual ~Savings() {}
};

class Checking: public Account {
public:
    virtual void withdraw(double amount) const override {
        std::cout << "Checking::withdraw : " << amount << std::endl;
    }
    virtual ~Checking() {}
};

class Trust: public Savings {
public:
    virtual void withdraw(double amount) const override {
        std::cout << "Trust::withdraw    : " << amount << std::endl;
    }
    virtual ~Trust() {}
};

void do_withdraw(Account &acc, double amount) {
    acc.withdraw(amount);
}

int main() {
    std::cout << std::endl;

    Account a;
    Account &ref_1 = a;
    ref_1.withdraw(1000);           // Account::withdraw  : 1000

    Trust t;
    Trust &ref_2 = t;
    ref_2.withdraw(2000);           // Trust::withdraw    : 2000

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    std::cout << std::endl;
    do_withdraw(a1, 1000);          // Account::withdraw  : 1000
    do_withdraw(a2, 2000);          // Savings::withdraw  : 2000
    do_withdraw(a3, 3000);          // Checking::withdraw : 3000
    do_withdraw(a4, 4000);          // Trust::withdraw    : 4000
    
    std::cout << std::endl;
    return 0;
}