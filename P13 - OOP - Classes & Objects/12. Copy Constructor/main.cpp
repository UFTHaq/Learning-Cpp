#include <string>
#include <iostream>

class Player {
private:
    std::string name;
    int health;
    int exp;
public:
    // Methods prototypes
    std::string get_name();

    int get_health();

    int get_exp();

    // Constructor prototypes
    Player(std::string name_val = "None", int health_val = 0, int exp_val = 0);

    // Copy Constructor Prototypes
    Player(const Player &source);

    // Destructor
    ~Player() {
        std::cout << "Destructor called for: " << name << std::endl;
        std::cout << std::endl;
    }
};

// Methods
std::string Player::get_name() {
    return name;
}

int Player::get_health() {
    return health;
}

int Player::get_exp() {
    return exp;
}

// Constructor
Player::Player(std::string name_val, int health_val, int exp_val)
    : name{name_val}, health{health_val}, exp{exp_val} {
        std::cout << "Three args constructor for " << name << "." << std::endl;
}
// Copy Constructor
Player::Player(const Player &source)
    // Cara Delegating
    // : Player{source.name, source.health, source.exp} {
    //     std::cout << "Copy Constructor - made copy of: " << source.name << std::endl;
    // }

    // Cara initializer biasa
    : name{source.name}, health{source.health}, exp{source.exp} {
        std::cout << "Copy Constructor - made copy of: " << source.name << std::endl;
    }

void display_player(Player p) {
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "Exp: " << p.get_exp() << std::endl;
}

int main() {
    std::cout << std::endl;

    Player empty{"WWWW", 100, 70};

    // Copy Object empty to my_new_object
    Player my_new_object{empty};

    // Copy object empty Player to functions
    display_player(empty);

    Player ukhem{"Ukhem"};
    display_player(ukhem);

    Player hero{"Hero", 100};

    Player villain{"Villain", 100, 65}; 

    std::cout << std::endl;
    return 0;
}