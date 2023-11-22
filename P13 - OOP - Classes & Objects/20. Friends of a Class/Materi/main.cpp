/*
    Friends of a Class

    - Friend
        - A function or class that has access to private class member
        - And, that function of or class is NOT a member of the class it is accessing

    - Function
        - Can be regular non-member functions
        - Can be member methods of another class

    - Class
        - Another class can have access to private class members

    ---------------------------------------------------------------------------------
    Friends of a Class

    - Friendship must be granted NOT taken
        - Declared explicitly in the class that is granting friendship
        - Declared in the function prototype with the keyword friend

    - Friendsip is not symmetric
        - Must be explicitly granted
            - if A is a friend of B
            - B is NOT a friend of A

    - Friendsip is not transitive
        - Must be explicitly granted
            - if A is a friend of B AND
            - B is a friend of C
            - then A is NOT a friend of C
    ---------------------------------------------------------------------------------
    non-member function

    class Player {
        friend void display_player(Player &p);
        std::string name;
        int health;
        int exp;
    public:
        . . .
    };

    void display_player(Player &p) {
        std::cout << p.name << std::endl;
        std::cout << p.health << std::endl;
        std::cout << p.exp << std::endl;
    }

    // display player may also change private data members
    ---------------------------------------------------------------------------------
    member function of another class

    class Player {
        friend void Other_class::display_player(Player &p);
        std::string name;
        int health;
        int exp;
    public:
        . . .
    }

    class Other_class {
        . . .
    public:
        void display_player(Player &p) {
            std::cout << p.name << std::endl;
            std::cout << p.health << std::endl;
            std::cout << p.exp << std::endl;
        }
    };
    ---------------------------------------------------------------------------------
    Another class as a friend

    class Player {
        friend class Other_class;
        std::string name;
        int health;
        int exp;
    publicl:
        . . .
    };
    ---------------------------------------------------------------------------------

*/