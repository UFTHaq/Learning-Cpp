#include <iostream>

class Base {
    // Note friends of Base have access to all
public:
    int a {0};
    void display() {                // member methods has access to all
        std::cout << a << ", " << b << ", " << c << std::endl;
    }
protected:
    int b {0};
private:
    int c {0};
};

class Derived: public Base {
    // Note friends of Derived have access to only what Derived has access to

    // a will be public
    // b will be protected
    // c will not be accessible
public:
    void access_base_members() {
        a = 100;        // OK
        b = 200;        // OK
        // c = 300;        // NOT Accessible
    }

};

int main() {
    std::cout << std::endl;

    std::cout << "=====    BASE Member access from base_first Objects    =====" << std::endl;
    Base base_first;
    base_first.a = 100;     // OK
    // base_first.b = 200;     // Compiler Error
    // base_first.c = 300;     // Compiler Error


    std::cout << "=====  BASE Member access from derived_first Objects  ======" << std::endl;
    Derived derived_objects;
    derived_objects.a = 100;    // OK
    // derived_objects.b = 200;    // Compiler Error
    // derived_objects.c = 300;    // Compiler Error

    std::cout << std::endl;
    return 0;
}