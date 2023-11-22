#include <string>
#include <iostream>

class Player {
private:
    std::string name;
    int health;
    int exp;
public:
    std::string get_name() const{           // const identifier qualifier
        return name;
    }
    void set_name(std::string name_val) {
        name = name_val;
    }

    // Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int exp_val);
};

Player::Player()
    : Player {"None", 0, 0} {
}

Player::Player(std::string name_val)
    : Player {name_val, 0, 0} {
}

Player::Player(std::string name_val, int health_val, int exp_val)
    : name{name_val}, health{health_val}, exp{exp_val} {
}

void display_player_name(const Player &p) {
    std::cout << p.get_name() << std::endl;
}

int main() {
    std::cout << std::endl;

    const Player villain {"Villain", 100, 55};
    Player hero {"Hero", 100, 15};

    std::cout << villain.get_name() << std::endl;
    std::cout << hero.get_name() << std::endl;

    display_player_name(villain);
    display_player_name(hero);

    // villain.set_name("Super Villain");    // ERROR -> object villain const

    std::cout << std::endl;
    return 0;
}