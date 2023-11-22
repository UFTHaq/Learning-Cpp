#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    // Attributes
    string name {"Player"};
    int health {100};
    int exp {1};

    // Methods
    void talk(string);
    bool is_dead(); 
};

class Account {
    // Attributes
    string name {"Account"};
    double balance {0.0};

    // Methods
    bool deposit(double);
    bool withdrawal(double);
};

int main() {
    cout << endl;

    Player ukhem;
    Player hero;

    Player players[] {ukhem, hero};

    vector<Player> players_vector {ukhem};
    players_vector.push_back(hero);

    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;

    Account ukhem_account;
    Account fahmi_account;

    cout << endl;
    return 0;
}