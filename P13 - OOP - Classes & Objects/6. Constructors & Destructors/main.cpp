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

    // Overloaded Constructors
    Player() {
        std::cout << "No args constructors called." << std::endl;
    }
    Player(std::string n) {
        name = n;
        std::cout << "String arg constructor called." << std::endl;
    }
    Player(std::string n, int h, int e) {
        name = n;
        health = h;
        exp = e;
        std::cout << "Three args constructor called." << std::endl;
    }
    ~Player() {
        std::cout << "Destructor called for " << name << std::endl;
    }
};

int main() {
    std::cout << std::endl;
    
    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player ukhem;
        ukhem.set_name("Ukhem");
        Player hero("Hero");
        Player haq("Haq");
        haq.set_name("Thor Haq");
        Player villain("Villain A", 100, 12);
        villain.set_name("Villain B");
    }

    {
        Player *enemy = new Player();
        enemy->set_name("Enemy");

        Player *level_boss = new Player("Level Boss", 1000, 300);
        level_boss->set_name("Level Boss");

        delete enemy;
        delete level_boss;
    }
    
    std::cout << std::endl;
    return 0;
}