/*
    POLYMORPHISM
    ===========================================================================
    Virtual Functions

    - Redefined functions are bound statically

    - Overriden functions are bound dynamically

    - Virtual functions are overridden

    - Allows us to treat all objects generally as objects of the Base class

    ===========================================================================
    Declaring virtual functions

    - Declare the function you want to override as virtual in the Base class

    - Virtual functions are virtual all the way down the hierarcy from this 
      point

    - Dynamic polymorphism only via Account class pointer or reference

    contoh:

        class Account {
        public:
            virtual void withdraw(double amount);
            . . .
        };

    ===========================================================================
    Declaring virtual functions

    - Overrid the function in the Derived classes

    - Function signature and return type must match EXACTLY

    - Virtual keyword not required bet is best practice

    - If you don't provide an overridden version it is inherited from it's Base class

    contoh:

        class Checking: public Account {
        public:
            virtual void withdraw(double amount);
        };
        
    
*/