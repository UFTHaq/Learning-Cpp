/*
    EXCEPTION HANDLING
    ==================================================================================
    Class-level exceptions

    Exceptions can also be thrown from within a class:

    - Method
        - These work the same way as they do for functions as we've seen

    - Constructor
        - Constructors may fail
        - Constructors do not return any value
        - Throw an exception in the constructor if you cannot initialize an object

    - Destructor
        - Do Not throw exceptions from your destructor

    ==================================================================================
    Class-level exceptions

        Account::Account(std::string name, double balance) 
            : name{name}, balance{balance} {
                if (balance < 0.0) {
                    throw IllegalBalanceException{};
                }
            }

    ==================================================================================
    Class-level exceptions
        
        try {
            std::unique_ptr<Account> fahmi_account = std::make_unique<Checking_Account> ("Fahmi", -10.0);
        }

        catch (const IllegalBalanceException &ex) {
            std::cerr << "Couldn't create account" << std::endl;
        }

*/