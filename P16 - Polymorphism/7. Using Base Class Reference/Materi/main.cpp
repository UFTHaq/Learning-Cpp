/*
    POLYMORPHISM
    =======================================================================================
    Using Base class references

        Account a;
        Account &ref = a;
        ref.withdraw(1000);         // Account::withdraw

        Trust t;
        Account &ref1 = t;
        ref1.withdraw(1000);        // Trust::withdraw

    =======================================================================================
    Using Base class references

        void do_withdraw(Account &account, double amount) {
            account.withdraw(amount);
        }

        Account a;
        do_withdraw(a, 1000);   // Account::withdraw

        Trust t;
        do_withdraw(t, 1000);   // Trust::withdraw

*/