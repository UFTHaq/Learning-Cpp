#include <iostream>

class Base {
private:
    int value;
public:
    Base() : value{0} {
        std::cout << "Base No-Args Constructor" << std::endl;
    }
    Base(int x) : value{x} {
        std::cout << "int Base Constructor" << std::endl;
    }
    Base(const Base &other) : value{other.value} {
        std::cout << "Base Copy Constructor" << std::endl;
    }
    
    Base &operator=(const Base &rhs) {
        std::cout << "Base Operator=" << std::endl;
        if (this == &rhs) {
            return *this;
        }
        value = rhs.value;
        return *this;
    }
    ~Base() {
        std::cout << "Base Destructor" << std::endl;
    }
};

class Derived : public Base {
private:
    int doubled_value;
public:
    Derived() : Base{} {
        std::cout << "Derived No-Args Constructor" << std::endl;
    }
    Derived(int x) : Base{x}, doubled_value{x*2} {
        std::cout << "int Derived Constructor" << std::endl;
    }
    Derived(const Derived &other) : Base{other}, doubled_value{other.doubled_value} {
        std::cout << "Derived Copy Constructor" << std::endl;
    }

    Derived &operator=(const Derived &rhs) {
        std::cout << "Derived Operator=" << std::endl;
        if (this == &rhs) {
            return *this;
        }
        Base::operator=(rhs);
        doubled_value = rhs.doubled_value;
        return *this;
    }
    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
    }
};

int main() {
    std::cout << std::endl;

    Base b{100};
    Base b1{b};
    b = b1;

    Derived d{1000};
    Derived d1{d};
    d = d1;

    std::cout << std::endl;
    return 0;
}