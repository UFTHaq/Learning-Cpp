#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int health;
    int exp;

public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    std::string get_name() {
        return name;
    }

    Player() {
        name = "None";
        health = 100;
        exp = 10;
    }

    Player(std::string name_val, int health_val, int exp_val) {
        name = name_val;
        health = health_val;
        exp = exp_val;
    }
};

int main() {
    std::cout << std::endl;

    Player ukhem;
    std::cout << ukhem.get_name() << std::endl;

    ukhem.set_name("Ukhem");
    std::cout << ukhem.get_name() << std::endl;

    Player thor("Thor", 95, 25);
    std::cout << thor.get_name() << std::endl;

    std::cout << std::endl;
    return 0;
}