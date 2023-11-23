/*
    EXCEPTION HANDLING
    ===================================================================================
    The C++ standard library exception class hierarchy

    C++ provides a class hierarchy of exception classes
        - std::exception is the base class
        - all subclass implement the what() virtual funcion
        - we can create our own user-defined exception subclass

        virtual const char *what() const noexcept;

    ===================================================================================
    Deriving our class from std::exception

        class IllegalBalanceException: public std::exception {
        public:
            IllegalBalanceException() noexcept = default;

            ~IllegalBalanceException() = default;
            
            virtual const char *what() const noexcept {
                return "Illegal balance exception";
            }
        };

    ===================================================================================
    Our modified Account class constructor

        Account::Account(std::string name, double balance) 
            : name{name}, balance{balance} {
                if (balance < 0.0) {
                    throw IllegalBalanceException{};
                }
            }

    ===================================================================================
    Creating an Account object

        try {
            std::unique_ptr<Account> fahmi_account = std::make_unique<Checking_Account> ("Fahmi", -30.0);
            std::cout << "Use fahmi_account" << std::endl;
        }
        catch (const IllegalBalanceException &ex) {
            std::cerr << ex.what() << std::endl;    // display "Illegal Balance Exception"
        }



*/