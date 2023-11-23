#include <iostream>

class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() { 
        std::cout << "Account::Destructor" << std::endl;
    }
};

class Savings : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {
        std::cout << "Savings::Destructor" << std::endl;
    }
};

class Checking : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {
        std::cout << "Checking::Destructor" << std::endl;
    }
};

class Trust : public Savings {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {
        std::cout << "Trust::Destructor" << std::endl;
    }
};

int main() {
    std::cout << std::endl;

    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    std::cout << std::endl;

    delete p1;
    std::cout << std::endl;
    delete p2;
    std::cout << std::endl;
    delete p3;
    std::cout << std::endl;
    delete p4;

    std::cout << std::endl;
    return 0;
}