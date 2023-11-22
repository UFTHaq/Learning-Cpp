/*
    Operator Overloading
    ===============================================================================
    Move assignment operator(=)

    - You can choose to overload the move assignment operator
        - C++ will use the copy assignment operatro if necessary

        Mystring s1;

        s1 = Mystring {"Ukhem"};        // move assignment

    - If we have raw pointer we should overload the move assignment operator
      for efficiency
    ===============================================================================
    Overloading the Move assignment operator

        Type &Type::operator=(Type &&rhs);

        Mystring &Mystring::operator=(Mystring &&rhs);

        s1 = Mystring{"Fahmi"};         // move operator= called

        s1 = Mystring{"Haq"};           // move operator= called
    ===============================================================================
    Overloading the Move assignment operator

        Mystring &Mystring::operator=(Mystring &&rhs) {
            if (this == &rhs) {         // self assignment
                return *this;           // return current object
            }

            delete [] str;              // dealloacate current storage
            str = rhs.str;              // steal the pointer

            rhs.str = nullptr;          // null out the rhs object

            return *this;               // return current object
        }
    ===============================================================================
    Overloading the Move assignment operator - steps

    - Check for self asignment
        if (this == &rhs) {
            return *this;               // return current object
        }

    - Deallocate storage for this->str since we are overwriting it
        delete [] str;

    - Steal the pointer from the rhs object and assign it to this->str
        str = rhs.str;

    - Null out the rhs pointer
        rhs.str = nullptr;

    - Return the current object by reference to allow chain assingment
        return *this;
    ===============================================================================



*/