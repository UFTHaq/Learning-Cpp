/*
    INHERITANCE
    ====================================================================================
    What is it and why is it used?

    - Provides a method for creating new classes from existring classes
    - The new class contain the data and behaviors of the existring class
    - Allow for reuse of existring classes
    - Allows us to focus on the common attributes among a set of classes
    - Allows new classes to modify behaviors of existing classes to make it unique
      - Without actually modifying the original class
    ====================================================================================
    Related classes

    - Game: Player, Enemy, Level Boss, Hero, Super Player, etc.
    - Bank: Account, Savings Account, Checking Account, Trust Account, etc.
    - Graphic: Shape, Line, Oval, Circle, Square, etc.
    - School: Person, Employee, Student, Faculty, Staff, Administator, etc.
    ====================================================================================
    Accounts

    - Account
        - balance, deposit, withdraw
    - Savings Account
        - balance, deposit, withdraw, interest rate
    - Chechking Account
        - balance, deposit, withdraw, minimum balance, per check fee
    - Trust Account
        - balance, deposit, withdraw, interest rate
    ====================================================================================
    Accounts - without inheritance - code duplication

        class Account {
            balance, deposit, withdraw
        };

        class Savings_Account {
            balance, deposit, withdraw, interest rate
        };

        class Checking_Account {
            balance, deposit, withdraw, minimum balance, per check fee
        };

        class Trust_Account {
            balance, deposit, withdraw, interest rate
        }
    ====================================================================================
    Accounts - with inheritance - code reuse

        class Account {
            balance, deposit, withdraw
        }

        class Savings_Account
            : public Account {
                interest rate, specialized withdraw
            };
        
        class Checking_Account
            : public Account {
                minimum balance, per check fee, specialized withdraw
            };

        class Trust_Account 
            : public Account {
                interest rate, specialized withdraw
            };
        
    ====================================================================================


    
*/