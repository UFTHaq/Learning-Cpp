/*
    Copy assignmet operator (=)

    - C++ provides a default assignment operator used for assigning one object to anothe

        Mystring s1 {"Frank"};
        Mystring s2 = s1;               // NOT assignment, but initalization

        s2 = s1                         // assignment

    - Default is memberwise assignment (shallow copy)
        - If we have raw pointer data member we must deep copy
    
    ===================================================================================
    Overloading the copy assigmment operator (deep copy)

        Type &Type::operator=(const Type &rhs);

        Mystring &Mystring::operator=(const Mystring &rhs);

        s2 = s1;                        // We write this

        s2.operator=(s1);               // operator= method is called
    
    ===================================================================================
    Overloading the copy assigmment operator (deep copy)

        Mystring &Mystring::operator=(const Mystring &rhs) {
            if (this == &rhs) {
                return *this
            }

            delete [] str;
            str = new char[std::strlen(rhs.str) + 1];
            std::strcopy(str, rhs.str);

            return *this;
        }
    ===================================================================================
    Overloading the copy assigmment operator (deep copy)

    - Check for self assignment

        if (this == &rhs) {         // p1 = p1;
            return *this;           // return current object
        }

    - Deallacote storage for this->str since we are overwriting it

        delete [] str;
    ===================================================================================
    Overloading the copy assignment operator - steps for deep copy

    - Allocate storage for the deep copy
        str = new char[std::strlen(rhs.str) + 1]

    - Perform the copy
        std::strcpy(str, rhs.str);

    - Return the current by reference to allow chain assignment
        return *this;
        // s1 = s2 = s3


*/