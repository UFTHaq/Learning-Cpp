/*
    Deriving classes from existing classes
    ======================================================================================
    C++ Derivation syntax

    class Base {
        // Base class members. . .
    };

    class Derived: acces-specifier Base {
        // Derived class members. . .
    };

    Access-specifier can be: public, private, or protected

    ======================================================================================
    Types of inheritance in C++

    - public
        - Most common
        - Establishes 'is-a' relationship between Derived and Base classes

    - private and protected
        - Establishes "derived class 'has-a' base class" relationship
        - "Is implemented in terms of" relationship
        - Different from composition

    ======================================================================================
    C++ Derivation Syntax

    class Account {
        // Account class members . . .
    }

    class Savings_Account: public Account {    
        // Savings_Account class members . . .
    }

    Savings_Account 'is-a' Account

    ======================================================================================
    C++ creating objects

    Account account {};
    Account *p_account = new Account();

    account.deposit(1000.0);
    p_account->withdraw(200.0);

    delete p_account;
    
    ======================================================================================
    C++ creating objects

    Savings_Account sav_account {};
    Savings_Account *p_sav_account = new Savings_Account();

    sav_account.deposit(1000.0);
    p_sav_account->withdraw(200.0);

    delete p_sav_account;

    ======================================================================================



    
*/