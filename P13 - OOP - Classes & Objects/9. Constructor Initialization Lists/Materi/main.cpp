/*
    ------------------------------------------------------------------
    ||              Constuctor Initialization Lists                 ||
    ------------------------------------------------------------------

    Previous way:

        Player()
        
        Player::Player() {
            name = "None";
            health = 0;
            exp = 0;
        }

    Better way using: 
    - Concstructor Initializaion Lists:

        Player()

        Player::Player() : name {"None"}, health {0}, exp {0} {
            
        }

    ------------------------------------------------------------------
    Contoh lain lagi

    Player(std::string)

    Previous way:
        
        Player::Player(std::string name_val) {
            name = name_val;
            health = 0;
            exp = 0;
        }

    Better way:

        Player::Player(std::string name_val) 
            : name {name_val}, health {0}, exp {0} {

        }
    
    ------------------------------------------------------------------
    Contoh lagi

    Player::Player()
        : name{"None"}, health{0}, exp{0} {

    }

    Player::Player(std::string name_val)
        : name{name_val}, health{0}, exp{0} {

    }

    Player::Player(std::string name_val, int health_val, int exp_val)
        : name{name_val}, health{health_val}, exp{exp_val} {

    }
    ------------------------------------------------------------------

*/