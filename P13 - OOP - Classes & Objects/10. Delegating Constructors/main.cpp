#include <string>
#include <iostream>

class Player {
private:
    std::string name;
    int health;
    int exp;

public:
    // Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int exp_val);
};

Player::Player(std::string name_val, int health_val, int exp_val)
    : name{name_val}, health{health_val}, exp{exp_val} {
        std::cout << "Three args Constructors" << std::endl;
}

Player::Player(std::string name_val) 
    : Player{name_val, 0, 0} {
        std::cout << "One arg Constructor" << std::endl;
}

Player::Player()
    : Player{"None", 0, 0} {
        std::cout << "No-args Constructor" << std::endl;
}

int main() {
    std::cout << std::endl;

    Player ukhem;

    Player fahmi("fahmi");

    Player thor("Thor", 100, 45);

    std::cout << std::endl;
    return 0;
}