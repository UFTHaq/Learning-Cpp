#include "Player18.h"

int Player::num_players {0};

// Constructors
Player::Player(std::string name_val, int health_val, int exp_val)
    : name{name_val}, health{health_val}, exp{exp_val} {
        ++num_players;
}

// // Copy Constructor
// Player::Player(const Player &source)
//     : name{source.name}, health{source.health}, exp{source.exp} {
//         std::cout << "Copy Constructor - made copy of: " << source.name << std::endl;
//     }

// Copy Constructor Delegating
Player::Player(const Player &source)
    : Player{source.name, source.health, source.exp} {
        std::cout << "Copy Constructor Delegating - Made Copy of: " << source.name << std::endl;
}

Player::~Player() {
    --num_players;

    std::cout << "Destructor called for: " << name << std::endl;
}

int Player::get_num_players() {
    return num_players;
}