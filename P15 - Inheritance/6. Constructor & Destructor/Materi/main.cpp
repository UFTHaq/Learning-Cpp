/*
    CONSTRUCTOR AND DESTRUCTOR
    =========================================================================================
    Constructor and class initialization

    - A Derived class inherits from its Base class

    - The Base part of the Derived class MUST be initialized BEFORE
      the Derived class is initialized

    - When a Derived object is created
        - Base class constructor executes, then
        - Derived class constructor executes

    =========================================================================================
    Constructor and class initialization

        class Base {
        public:
            Base() {
                std::cout << "Base Constructor" << std::endl;
            }
        };

        class Derived : public Base {
        public:
            Derived() {
                std::cout << "Derived Constructor" << std::endl;
            }
        }; 

    =========================================================================================
    Destructor

    - Class destructors are invoke in the reverse order as constructor

    - The Derived part of the Derived class MUST be destroyed BEFORE the base class
      destructor in invoke

    - When a Derived object is destroyed
        - Derived class destructor executes, then
        - Base class destructor executes
        - Each destructor should free resources allocate in it's own constructors

    =========================================================================================
    Destructor

        class Base {
        public:
            Base() {
                std::cout << "Base Constructor" << std::endl;
            }
            ~Base() {
                std::cout << "Base Destructor" << std::endl;
            }
        };

        class Derived: public Base {
        public:
            Derived() {
                std::cout << "Derived Constructor" << std::endl;
            }
            ~Derived() {
                std::cout << "Derived Destructor" << std::endl;
            }
        };

    =========================================================================================
    Constructor and class initialization

    - A Derived class does NOT inherit
        - Base class Constructor
        - Base class Destructor
        - Base class Overloaded assignment operators
        - Base class friend functions

    - However, the derived class constructors, destructors, and overloaded assignment operators
      can invoke the base-class versions

    - C++11 allows explicit inheritance of base 'non-special' constructors with
        - using Base::Base; anywhere in the derived class declaration
        - Lots of rules involved, often better to define constructors yourself

    =========================================================================================
*/