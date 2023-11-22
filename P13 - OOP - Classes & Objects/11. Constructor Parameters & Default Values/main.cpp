#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int health;
    int exp;
public:
    Player(std::string name_val = "None", int health_val = 0, int exp_val = 0);
};

Player::Player(std::string name_val, int health_val, int exp_val)
    : name{name_val}, health{health_val}, exp{exp_val} {
        std::cout << "Three args constructor" << std::endl;
}

int main() {
    std::cout << std::endl;

    Player empty;
    Player ukhem{"Ukhem"};
    Player fahmi{"Fahmi", 95};
    Player villain{"Villain", 100, 45};

    std::cout << std::endl;
    return 0;
}