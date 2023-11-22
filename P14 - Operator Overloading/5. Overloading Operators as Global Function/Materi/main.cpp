/*
    Operator Overloading
    ====================================================================================
    Mystring operator-

    - Often declared as friend fucntions in the class declaration

        Mystring operator-(const Mystring &obj) {
            char *buff = new char[std::strlen(obj.str) + 1];
            std::strcpy(buff, obj.str);
            for (size_t i = 0; i < std::strlen(buff); i++) {
                buff[i] = std::tolower(buff[i]);
            }
            Mystring temp {buff};
            delete [] buff;
            return temp;
        }
    ====================================================================================
    Binary operators as global functions (+, -, ==, !=, <, >, etc.)

        ReturnType operatorOp(const Type &lhs, const Type &rhs);

        Number operator+(const Number &lhs, const Number &rhs);
        Number operator-(const Number &lhs, const Number &rhs);
        bool operator==(const Number &lhs, const Number &rhs);
        bool operator<(const Number &lhs, const Number &rhs);

        Number n1 {100}, n2 {200};
        Number n3 = n1 + n2;                            // operator+(n1, n2)
        n3 = n1 - n2;                                   // operator-(n1, n2)
        if (n1 == n2);                                  // operator==(n1, n2)
    ====================================================================================
    Mystring operator==

        bool operator==(const Mystring &lhs, const Mystring &rhs) {
            if (std::strcmp(lhs.str, rhs.str) == 0) {
                return true;
            } else {
                return false;
            }
        }
    
    - If declared as a friend of Mystring can access private str attribute
    - Otherwise we must use getter methods
    ====================================================================================
    Mystring operator+ (concatenation)

        Mystring fahmi {"Fahmi"};
        Mystring haq {"Haq"};
        Mystring stooges {" is one of the three stooges"};

        Mystring result = fahmi + stooges;
                        // operator+(fahmi, stooges);

        result = haq + " is also a stooge";
                        // operator+(haq, " is alse a stooge");

        result = "Haq" + stooges;
                        // OK with non-member functions
    ====================================================================================
    Mystring operator+ (concatenation)

        Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
            size_t buff_size = std::strlen(lhs.str) + std::strlen(rhs.str) + 1;
            char *buff = new char[buff_size];
            std::strcpy(buff, lhs.str);
            std::strcat(buff, rhs.str);
            Mystring temp {buff};
            delete [] buff;
            return temp;
        }
*/