/*
    POLYMORPHISM
    ==============================================================================
    Using a Base class pointer

    - For dynamic polymorphism we must have:
        - Inheritance
        - Base class pointer or Base class reference
        - Virtual Functions

    ==============================================================================
    Using a Base class pointer

        Account *p1 = new Account();
        Account *p2 = new Savings();
        Account *p3 = new Checking();
        Account *p4 = new Trust();

        Account *ptr_array [] = {p1, p2, p3, p4};

        for (auto i=0; i<4; i++) {
            ptr_array[i].withdraw(1000);
        }

*/