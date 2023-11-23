#include <iostream>
#include <string>

class Base {
    int value;
    std::string serial_num;
    
public:
    // NO-ARGS BASE CONSTRUCTOR
    Base(): value{0} {
        std::cout << "Base no-args Constructor" << std::endl;
    }
    // INT OVERLOADED BASE CONSTRUCTOR
    Base(int x): value{x} {
        std::cout << "Overloaded int Base Constructor" << std::endl;
    }
    // STRING OVERLOADED BASE CONSTRUCTOR
    Base(std::string serial): serial_num{serial} {
        std::cout << "Overloaded string Base Constructor" << std::endl;
    }
    // DESTRUCTOR BASE CONSTRUCTOR
    ~Base() {
        std::cout << "Base Destructor" << std::endl;
    }
};

class Derived: public Base {
    int double_value;
public:
    // NO-ARGS DERIVED CONSTRUCTOR
    Derived(): Base{}, double_value{0} {
        std::cout << "Derived no-args Constructor" << std::endl;
    }
    // INT OVERLOADED DERIVED CONSTRUCTOR
    Derived(int x): Base{x}, double_value{x*2} {
        std::cout << "Overloaded int Derived Constructor" << std::endl;
    }
    // STRING OVERLOADED DERIVED COSNTRUCTOR
    Derived(std::string serial): Base{serial}, double_value{0} {
        std::cout << "Overloaded string Base Constructor" << std::endl;
    }
    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
    }
};

int main() {
    std::cout << std::endl;

    Base ukhem;
    Base fahmi{100};
    Base thor{"Thor-12345"};

    std::cout << std::endl;
    
    Base *ptr_haq {nullptr};
    ptr_haq = new Base{95};
    delete ptr_haq;
    ptr_haq = nullptr;

    std::cout << std::endl;

    Derived UF;
    Derived TH{1000};
    Derived UFTH{"UFTHaq"};

    std::cout << std::endl;

    Derived *ptr_UFTH {nullptr};
    ptr_UFTH = new Derived{"ukhemfahmi25"};
    delete ptr_UFTH;
    ptr_UFTH = nullptr;

    std::cout << std::endl;
    return 0;
}