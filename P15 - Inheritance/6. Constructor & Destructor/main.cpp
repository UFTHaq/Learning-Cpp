#include <iostream>

class Base {
private:
    int value;
public:
    Base(): value{0} {
        std::cout << "Base no-args Constructor" << std::endl;
    }
    Base(int x): value{x} {
        std::cout << "Base (int) Overloaded Constructor" << std::endl;
    }
    ~Base() {
        std::cout << "Base Destructor" << std::endl;
    }
};

class Derived: public Base {
    // using Base::Base;            // automatically inherit
private:
    int double_value;
public:
    Derived(): double_value{0} {
        std::cout << "Derived no-args Constructor" << std::endl;
    }
    Derived(int x): double_value{x*2} {
        std::cout << "Derived (int) Overloaded Constructor" << std::endl;
    }
    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
    }
};

int main() {
    std::cout << std::endl;

    // Base uang_ukhem;
    
    // Base uang_fahmi{100};

    // Derived ganda_uang_ukhem;

    Derived ganda_uang_fahmi{1250};

    std::cout << std::endl;
    return 0;
}