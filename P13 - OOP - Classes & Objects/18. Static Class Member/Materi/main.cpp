/*
    Static Class Member

    - Class data members can be declared as static
      - A single data member that belongs to the class, not the objects
      - Useful to store class-wide information

    - Class functions can be declared as static
      - Independent of any obejcts
      - Can be called using the class name

    ----------------------------------------------------------------------------------
    Player class - static members

    class Player {
    private:
        static int num_player;

    public:
        static int get_num_players();
        . . .
    };
    ----------------------------------------------------------------------------------
    Typically in Player.cpp

    #include "Player.h"

    int Player::num_players = 0;
    ----------------------------------------------------------------------------------
    Player class - implements static method

    int Player::get_num_players() {
        return num_players;
    }
    ----------------------------------------------------------------------------------
    Player class - update the constructor

    Player::Player(std::string name_val, int health_val, int exp_val)
        : name{name_val}, health{health_val}, exp{exp_val} {
            ++num_players;
    }
    ----------------------------------------------------------------------------------
    Player class - Destructor

    Player::~Player() {
        --num_players;
    }
    ----------------------------------------------------------------------------------
    main.cpp

    void display_active_players() {
        std::cout << "Active players: " << Player::get_num_players() << std::endl;
    }

    int main() {
        display_active_players();

        Player obj1{"Frank"};

        display_active_players();

        Player obj2{"Ukhem"};

        display_active_players();
    }
*/