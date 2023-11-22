/*
    ----------------------------------
    |  Constructors and Destructors  |
    ----------------------------------
    Constructors
    - Special member method
    - Invoked during object creation
    - Useful for initialization
    - Same name as the class
    - No return type is specified
    - Can be overloaded
    ----------------------------------
    Destructors
    - Special member method
    - Same name as the class proceeded
      with a tilde (~)
    - Invoked automatically when the
      object is destroyed
    - No return type and no parameters
    - Only 1 destructor is allowed per
      class, cannot be overloaded!
    - Useful to release memory and 
      other resources
    ----------------------------------
    -----------------------------------------
    |   Player Constructors & Destructors   |
    -----------------------------------------
    Class Player {
    private:
        std::string name;
        int health;
        int exp;
    public:
        // Overloaded Constructors
        Player();
        Player(std::string name);
        Player(std::string name, int health, int exp);

        // Destructor
        ~Player();
    };
    -----------------------------------------
    |       Contoh Creating Objects         |
    -----------------------------------------
    int main() {
        Player slayer;
        Player frank("Frank", 100, 4);
        Player hero("Hero");
        Player villain("Villain");

        Player *enemy = new Player("Enemy", 1000, 0);
        
        // use the objects

        delete enemy; // destructors called
    }
    // 4 Destructors called


*/