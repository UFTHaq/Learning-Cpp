/*
    INHERITANCE
    ====================================================================================
    Public Inheritance vs Composition

    - Both allow reuse of existing classes

    - Public Inheritance
        - "is-a" relationship
            - Employee 'is-a' Person
            - Checking Account 'is-a' Account
            - Circle 'is-'a Shape

    - Composition
        - 'has-a' relationship
            - Person 'has-a' Account
            - Player 'has-a' Special Attack
            - Circle 'has-a' Location
    
    ====================================================================================
    Composition

        class Person {
        private:
            std::string name;       // has-a name
            Account account;        // has-a account
        };
*/