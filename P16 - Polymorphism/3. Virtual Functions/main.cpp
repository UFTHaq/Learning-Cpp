#include <iostream>

class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << " In Account::withdraw" << std::endl;
    }
};

class Savings : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << " In Savings::withdraw" << std::endl;
    }
};

class Checking : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << " In Checking::withdraw" << std::endl;
    }
};

class Trust : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << " In Trust::withdraw" << std::endl;
    }
};

int main() {
    std::cout << std::endl;

    std::cout << "|===== POINTERS =====|" << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout << "\n|===== CLEAN UP =====|" << std::endl;
    // delete p1;
    // delete p2;
    // delete p3;
    // delete p4;
    // Sengaja di comment agar tidak men-trigger warning

    std::cout << std::endl;
    return 0;
}

