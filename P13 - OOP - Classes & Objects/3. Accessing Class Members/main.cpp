#include <iostream>
#include <string>


class Player {
public:
    // Attributes
    std::string name;
    int health;
    int exp;

    // Methods
    void talk(std::string text_to_say) {
        std::cout << name << " says: " << text_to_say << std::endl;
    }
    bool is_dead();
};

class Account {
public:
    // Attributes
    std::string name;
    double balance;

    // Methods
    bool deposit(double bal) {
        std::cout << name << ", In deposit: " <<  bal << std::endl;
        balance += bal;
        display_balance();
        return true;
    }
    bool withdraw(double bal) {
        std::cout << name << ", In withdraw: " << bal << std::endl;
        balance -= bal;
        display_balance();
        return true;
    }
    bool display_balance() {
        std::cout << name << ", Balance: " << balance << std::endl;
        std::cout << std::endl;
        return true;
    }
};

int main() {
    std::cout << std::endl;

    // Objects Player
    Player ukhem;
    ukhem.name = "Ukhem Fahmi";
    ukhem.health = 100;
    ukhem.exp = 10;

    std::cout << ukhem.name << std::endl;
    std::cout << ukhem.health << std::endl;
    std::cout << ukhem.exp << std::endl;
    std::cout << std::endl;

    ukhem.talk("Hi there");

    // Pointer Objects
    Player *enemy {nullptr};
    enemy = new Player();
    // Player *enemy = new Player;
    (*enemy).name = "Enemy_1";
    (*enemy).health = 75;
    enemy->exp = 15;

    enemy->talk("I will destroy you!");
    std::cout << std::endl;

    delete enemy;

    // Object Account
    Account thor_account;
    thor_account.name = "Thor's account";
    thor_account.balance = 5000.0;

    thor_account.deposit(100.0);
    thor_account.withdraw(500.0);

    // Pointer Objects
    Account *haq_account {new Account};
    haq_account->name = "UFTHaq";
    (*haq_account).balance = 4050.0;

    haq_account->deposit(342.5);
    (*haq_account).withdraw(532.53);

    delete haq_account;

    std::cout << std::endl;
    return 0;
}