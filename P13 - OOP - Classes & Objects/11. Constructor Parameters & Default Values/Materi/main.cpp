/*
    Default Constructor Parameters

    - Can often simplify our code and reduce the 
      number of overloaded constructors
    - Same rules apply as we learned with non-member 
      functions

    ------------------------------------------------------------
    Contoh:

    class Player {
    private:
        std::string name;
        int health;
        int exp;
    public:
        // Constructor with default parameter values
        Player(std::string name_val = "None", int health_val = 0, int exp_val = 0);
    };

    Player::Player(std::string name_val, int health_val, int exp_val)
        : name{name_val}, health{health_val}, exp{exp_health} {

    }

    Player empty;                                 // None, 0, 0
    Player ukhem("Ukhem");                        // Frank, 0, 0
    Player villain("Viilain", 100, 55);           // Villain, 100, 55
    Player hero("Hero", 100);                     // Hero, 100, 0

    // Note what happers if you declare a no-args constructors
*/