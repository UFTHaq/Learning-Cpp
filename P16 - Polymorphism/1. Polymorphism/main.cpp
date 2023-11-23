#include <iostream>
#include <memory>

class Base {
public:
    void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

class Derived : public Base {
public:
    void say_hello() const {
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};

void greeting(const Base &obj) {
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main() {
    std::cout << std::endl;

    // STATIC BINDING
    std::cout << "Static Binding - No pointer" << std::endl;
    Base a;
    a.say_hello();

    Derived b;
    b.say_hello();

    greeting(a);    // Greetings: Hello - I'm a Base class object
    greeting(b);    // Greetings: Hello - I'm a Base class object
                    // Harusnya, Greetings: Hello - I'm a Derived class object
    std::cout << std::endl;

    // RAW POINTER
    std::cout << "Static Binding - YES RAW Pointer" << std::endl;
    Base *ptr_c = new Base();
    ptr_c->say_hello();
    delete ptr_c;

    Derived *ptr_d = new Derived();
    ptr_d->say_hello();
    delete ptr_d;

    // MASIH ERROR, belum sesuai DYNAMIC BINDING, masih memanggil BASE, padahal sudah di assign alamat dari DERIVED CLASS
    Base *ptr_e = new Derived();
    ptr_e->say_hello();
    delete ptr_e;
    std::cout << std::endl;

    // SMART-POINTER
    std::cout << "Static Binding - YES SMART Pointer" << std::endl;
    std::unique_ptr<Base> ptr_smart = std::make_unique<Derived>();
    ptr_smart->say_hello();
    // smart pointer tidak perlu delete manual, dia automatis hapus ketika selesai


    // DYNAMIC BINDING

    std::cout << std::endl;
    return 0;
}