#include <iostream>
#include <string>

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

// CARA PAYAH, HABISKAN RAM
// Player::Player() {
//     name = "None";
//     health = 0;
//     exp = 0;
// }

// Player::Player(std::string name_val) {
//     name = name_val;
//     health = 0;
//     exp = 0;
// }

// Player::Player(std::string name_val, int health_val, int exp_val) {
//     name = name_val;
//     health = health_val;
//     exp = exp_val;
// }

// CARA BENAR, EFISIEN RAM
Player::Player() : name{"None"}, health{0}, exp{0} {

}

Player::Player(std::string name_val) 
    : name{name_val}, health{0}, exp{0} {

}

Player::Player(std::string name_val, int health_val, int exp_val) 
    : name{name_val}, health{health_val}, exp{exp_val} {

}

int main() {
    std::cout << std::endl;

    Player empty;
    Player ukhem{"Ukhem"};
    Player villain{"Villain", 100, 55};

    std::cout << std::endl;
    return 0;
}