/*
    OPERATOR OVERLOADING
    ===============================================================================
    Unary operators as member methods (++, --, -, !)

        ReturnType Type::operatorOp();

        Number Number::operator-() const;
        Number Number::operator++();            // pre-increment
        Number Number::operator++(int);         // post-increment
        bool Number::operator!() const;

        Number n1 {100};
        Number n2 = -n1;                        // n1.operator-()
        n2 = ++n1;                              // n1.operator++()
        n2 = n1++;                              // n1.operator++(int)
    ===============================================================================
    Mytring operator- make lowercase

        Mystring fahmi_1 {"FAHMI"};
        Mystring fahmi_2;

        fahmi_1.display();                      // FAHMI

        fahmi_2 = -fahmi_1;                     // fahmi_1.operator-()

        fahmi_1.display();                      // FAHMI    

        fahmi_2.display();                      // fahmi
    ===============================================================================
    Mytring operator- make lowercase

        Mystring Mystring::operator-() const {
            char *buff = new char[std::strlen(str) + 1];
            std::strcpy(buff, str);
            for (size_t i = 0; i < std::strlen(buff); i++) {
                buff[i] = std::tolower(buff[i]);
            }
            Mystring temp {buff};
            delete [] buff;
            return temp;
        }

    ===============================================================================
    Binary operators as member methods (+, -, =, !=, <, >, etc.)

        ReturnType Type::operatorOp(const Type &rhs);

        Number Number::operator+(const Number &rhs) const;
        Number Number::operator-(const Number &rhs) const;
        bool Number::operator==(const Number &rhs) const;
        bool Number::operator<(const Number &rhs) const;

        Number n1 {100}, n2, {200};             
        Number n3 = n1 + n2;                    // n1.operator+(n2)
        n3 = n1 - n2;                           // n1.operator-(n2)
        if (n1 == n2) . . .                     // n1.operator==(n2)
    ===============================================================================
    Mystring operator==

        bool Mystring::operator==(const Mystring &rhs) const {
            if (std::strcmp(str, rhs.str) == 0) {
                return true;
            } else {
                return false;
            }
        }

        // if (s1 == s2)                        // s1 and s2 are Mystring objects
    ===============================================================================
    Mystring operator+ (concatenation)

        Mystring fahmi {"Fahmi"};
        Mystring haq {"Haq"};
        Mystring stooges {" is one of the three stooges"};

        Mystring result = fahmi + stooges;
                        // fahmi.operator+(stooges);

        result = haq + " is also a stooge";
                        // moe.operator+(" is also a stooge");

        result = "Haq" + stooges;
                        // "Haq".operator+(stooges);    ERROR
    ===============================================================================
    Mystring operator+ (concatenation)

        Mystring Mystring::operator+(const Mystring &rhs) const {
            size_t buff_size = std::strlen(str) + std::strlen(rhs.str) + 1;
            char *buff = new char[buff_size];
            std::strcpy(buff, str);
            std::strcat(buff, rhs.str);
            Mystring temp {buff};
            delete [] buff;
            return temp;
        }
*/