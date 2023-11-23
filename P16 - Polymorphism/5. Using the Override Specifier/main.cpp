#include <iostream>

class Base {
public:
    virtual void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
    virtual ~Base() {}
};

class Derived: public Base {
public:
    virtual void say_hello() const override {
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
    virtual ~Derived() {}
};

class Derived_Derived: public Derived {
public:
    virtual void say_hello() const override {
        std::cout << "Hello - I'm a Derived Derived class object" << std::endl;
    }
    virtual ~Derived_Derived() {}
};

int main() {
    std::cout << std::endl;

    Base *p1 = new Base();
    p1->say_hello();

    Derived *p2 = new Derived();
    p2->say_hello();

    Base *p3 = new Derived();
    p3->say_hello();

    Derived_Derived *p4 = new Derived_Derived();
    p4->say_hello();

    Derived *p5 = new Derived_Derived();
    p5->say_hello();

    Base *p6 = new Derived_Derived();
    p6->say_hello();

    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;

    std::cout << std::endl;
    return 0;
}