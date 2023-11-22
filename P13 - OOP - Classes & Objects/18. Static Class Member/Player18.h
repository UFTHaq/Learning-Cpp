#ifndef PLAYER18_H
#define PLAYER18_H
#include <string>
#include <iostream>

#pragma once

class Player {
private:
    std::string name;
    int health;
    int exp;

    static int num_players;

public:
    std::string get_name() {
        return name;
    }

    int get_health() {
        return health;
    }

    int get_exp() {
        return exp;
    }
    // Constructor
    Player(std::string name_val = "None", int health_val = 0, int exp_val = 0);
    // Copy Constructor
    Player(const Player &source);
    // Destructor
    ~Player();

    static int get_num_players();
};

#endif