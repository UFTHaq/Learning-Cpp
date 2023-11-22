/*
    this Pointer

    - this is a reserved keyword
    - Contains the address of the object - so it's a pointer to the object
    - Can only used in class scope
    - All member access is done via the this pointer
    - Can be used by the programmer
      - To access data member and methods
      - To determine if two objects are the same (more in the next section)
      - Can be dereferenced (*this) to yield the current object.

    --------------------------------------------------------------------------
    contoh -> this pointer

    void Account::set_balance(double bal) {
        balance = bal;               // this->balance is implied behind the scene
    }
    --------------------------------------------------------------------------
    To disambiguate identifier use

    void Account::set_balance(double balance) {
        balance = balance;           // which balance? The parameter
    }

    void Account::set_balance(double balance) {
        this->balance = balance;     // Unambiguous
    }
    --------------------------------------------------------------------------
    To determine object identity

    - Sometimes its useful to know if two objects are the same object

        int Account::compare_balance(const Account &other) {
            if (this == &other) {
                std::cout << "The same objects" << std::endl;
            }
        }

        frank_account.compare_balance(franc_account);

    - We'll use the this pointer again when we overload the assignment operator

*/