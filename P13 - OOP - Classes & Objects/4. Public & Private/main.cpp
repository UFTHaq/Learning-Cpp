#include <iostream>
#include <string>

class Player {
private:
    // Attributes
    std::string name {"Player"};
    int health;
    int exp;
public:
    // Methods
    void talk(std::string text_to_say) {
        std::cout << name << " says: " << text_to_say << std::endl;
    }
    bool is_dead();
};


int main() {
    std::cout << std::endl;

    Player ukhem;
    // ukhem.name = "Ukhem";
    ukhem.talk("Hello there");


    std::cout << std::endl;
    return 0;
}