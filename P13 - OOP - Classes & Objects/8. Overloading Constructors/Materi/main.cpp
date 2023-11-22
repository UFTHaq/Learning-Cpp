/*
    Overloading Constructors

    - Classes can have as many constructors as necessary
    - Each mush have uniqui signature
    - Default constructor is no longer compiler-generated once
      another constructor is declared
    ------------------------------------------------------------
    Overloaded Constructors
    ------------------------------------------------------------
    Class Player {
    private:
        std::string name;
        int health;
        int exp;
    public:
        // Overloaded Constructors
        Player();
        Player(std::string name_val);
        Player(std::string name_val, int health_val)
        Player(std::string name_val, int health_val, int exp_val);
    }
*/