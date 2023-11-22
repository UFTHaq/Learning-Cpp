/*
    Implementing Member Methods

    - Very similar to how we implemented functions

    - Member methods have access to member attributes
        - So you don't need to pass them as arguments!

    - Can be ipmlemented inside the class declaration
        - Implicitly inline

    - Can be implemented outside the class declaration
        - Need to use Class_Name::method_name

    - Can separate specification from implementation
        - .h file for the class declaration
        - .cpp file for the class implementation

    ----------------------------------------------------------------
    Inside the class declaration

    class Account {
    private:
        double balance;
    public:
        // real methods
        void set_balance(double bal) {
            balance = bal;
        }
        double get_balance() {
            return balance;
        }
    };
    ----------------------------------------------------------------
    Outside the class declaration

    class Account {
    private:
        double balance;
    public:
        // only methods prototypes
        void set_balance(double bal);
        double get_balance();
    };

    void Account::set_balance(double bal) {
        balance = bal;
    }
    double Account::get_balance() {
        return balance;
    };
    ----------------------------------------------------------------
    ----------------------------------------------------------------
    Separating Specification from Implementation
    ----------------------------------------------------------------
    file = Account.h

    class Account {
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
    };
    ----------------------------------------------------------------
    Include Guards
    
    #ifndef _ACCOUNT_H_
    #define _ACCOUNT_H_

        // Account class declaration

    #endif
    ----------------------------------------------------------------
    file = Account.h

    #ifndef _ACCOUNT_H_
    #define _ACCOUNT_H_

    class Account {
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
    };

    #endif
    ----------------------------------------------------------------
    ----------------------------------------------------------------
    file = Account.h - #pragma once

    #pragma once

    class Account {
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
    };
    ----------------------------------------------------------------
    file = Account.cpp

    #include "Account.h"

    void Account::set_balance(double bal) {
        balance = bal;
    }
    double Account::get_balance() {
        return balance;
    }
    ----------------------------------------------------------------
    file = main.cpp

    #include <iostream>
    #include "Account.h"

    int main() {
        Account frank_account;
        frank_account.set_balance(1000.00);
        double bal = frank_account.get_balance();

        std::cout << bal << std::endl;           // 1000
        return 0;
    }
    ----------------------------------------------------------------
*/