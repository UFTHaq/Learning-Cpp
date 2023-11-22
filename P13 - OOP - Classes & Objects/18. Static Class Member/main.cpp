#include <iostream>
#include "Player18.h"

void display_active_players() {
    std::cout << "Active Player: " << Player::get_num_players() << std::endl;
}

int main() {
    std::cout << std::endl;

    display_active_players();

    Player obj1{};
    display_active_players();

    Player obj2{"Fahmi"};
    display_active_players();

    {
        Player ukhem{"Ukhem", 100, 75};
        display_active_players();
    }
    display_active_players();

    Player *enemy = new Player("Enemy", 100, 100);
    display_active_players();

    delete enemy;
    display_active_players();

    std::cout << std::endl;
    return 0;
}