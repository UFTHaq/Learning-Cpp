/*
    OPERATOR OVERLOADING
    =====================================================================================
    Stream Insertion and Extraction Operators (<<, >>)

        Mystring fahmi {"Fahmi"};

        std::cout << fahmi << std::endl;            // Fahmi

        
        Player hero {"Hero", 100, 33};

        std::cout << hero << std::endl;             // {name: Hero, health: 100, exp: 33}
    =====================================================================================

        Mystring fahmi;

        cin >> fahmi;


        Player hero;

        cin >> hero;
    =====================================================================================
    - Doesn't make sense to implement as membe methods
        - Left operand must be a user-defined class
        - Not the way we normally use these operators

        Mystring fahmi;
        fahmi << std::cout;         // huh?

        Player hero;
        hero >> std::cin;           // huh?
    =====================================================================================
    Steram Insertion Operator (<<)

        std::ostream &operator<<(std::ostream &os, const Mystring &obj) {
            of << obj.str;              // if friend function
            // os << obf.get_str();     // if not friend function
            return os;
        }

        - Return a reference to the ostream so we can keep inserting
        - Don't return ostream by value!
    =====================================================================================
    Stream Extraction Operator (>>)

        std::istream &operator>>(std::istream &is, Mystring &obj) {
            char *buff = new char[1000];
            is >> buff;
            obj = Mystring {buff};          // If you have copy or move assignment
            delete [] buff;
            return is;
        }

        - Return a reference to the istream so we can keep inserting
        - Update the object passed in


*/