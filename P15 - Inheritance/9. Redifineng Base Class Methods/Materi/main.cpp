/*
    INHERITANCE
    ==========================================================================================
    Using and Redefining Base Class methods

    - Derived class can directyly invoke Base class methods

    - Derived class can override or redifine Base class methods

    - Very powerful in the context of polymorphism

    ==========================================================================================
    Using and Redefining Base class methods

    class Account {
    public:
        void deposit(double amount) {
            balance += amount;
        }
    };

    class Savings_Account: public Account {
    public:
        void deposit(double amount) {       // Redefine Base class method
            amount += some_interest;
            Account::deposit(amount);       // invoke call Base class method
        }
    };

    ==========================================================================================
    Static binding of method calls

    - Binding of which method to use is done at compile time
        - Default binding for C++ is static
        - Derived class objects will use Derived::deposit
        - But, we can explicitly invoke Base::deposit from Derived::deposit
        - OK, but limited - much more powerul approac is dynamic binding which we will see
          in the next section

    ==========================================================================================
    Static binding of method calls

    Base b;
    b.deposit(1000.0);                  // Base::deposit

    Derived d;
    d.deposit(100.0);                   // Derived::deposit

    Base *ptr = new Derived();
    ptr->deposit(1000.0);               // Base::deposit ???

*/