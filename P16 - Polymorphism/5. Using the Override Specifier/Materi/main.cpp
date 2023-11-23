/*
    POLYMORPHISM
    ============================================================================================
    The Override Specifier

    - We can override Base class virtual functions

    - The function signature and return must be EXACTLY the same

    - If they are different the we have redefinition NOT overriding

    - Redefinition is statically bound

    - Overriding is dynamically bound

    - C++11 provides and override specifier to have the compiler ensure overriding

    ============================================================================================
    The Override Specifier

        class Base {
        public:
            virtual void say_hello() const {
                std::cout << "Hello - I'm a Base class object" << std::endl;
            }
            virtual ~Base() {}
        };

        class Derived: public Base {
        public:
            virtual void say_hello() {      // Notice I forgot the const - NOT OVERRIDING
                std::cout << "Hello - I'm a Derived class object" << std::endl;
            }
            virtual ~Derived() {}
        };

*/