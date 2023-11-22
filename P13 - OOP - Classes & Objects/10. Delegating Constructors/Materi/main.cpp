/*
    Delegating Conctructors

    - Often the code for constructors is very similar
    - Duplicated code can lead to errors
    - C++ allows delegating constructors
        - code for one constructor can call another in the 
          initialization list
        - avoids duplicating code

    --------------------------------------------------------------------
                      OLD STYLED CODE - Not efficient
    --------------------------------------------------------------------
    Player::Player() 
        : name{"None"}, health{0}, exp{0} {

    }

    Player::Player(std::string name_val) 
        : name{name_val}, health{0}, exp{0} {

    }

    Player::Player(std::string name_val, int health_val, int exp_val) 
        : name{name_val}, health{health_val}, exp{exp_val} {

    }
    --------------------------------------------------------------------
              DELEGATING CONSTRUCTORS STYLED CODE - EFFICIENT
    --------------------------------------------------------------------
    Player::Player(std::string name_val, int health_val, int exp_val)
        : name{name_val}, health{health_val}, int exp{exp_val} {

    }

    Player::Player() 
        : Player{"None", 0, 0} {

    }

    Player::Player() 
        : Player{name_val, 0, 0} {

    }
*/