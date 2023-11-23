#include <iostream>
#include <vector>

int num_line {};
void garis() {
    num_line++;
    std::cout << "\n== TEST " << num_line << " ===========================" << std::endl;
}

// Used for tes1
// Scoped enumeration holding the items for a grocery list
// The value of the enumerator could be the item code 
enum class Grocery_Item {Milk=350, Bread=250, Apple=132, Orange=100};

// Used for test1
// Overloaded stream insertion operator.
// Inserts the name grocery item parameter to the input stream.
std::ostream &operator<<(std::ostream &os, const Grocery_Item &item) {
    std::underlying_type_t<Grocery_Item> value = std::underlying_type_t<Grocery_Item>(item); {
        switch (item) {
            case Grocery_Item::Milk:
                os << "Milk";
                break;
            case Grocery_Item::Bread:
                os << "Bread";
                break;
            case Grocery_Item::Apple:
                os << "Apple";
                break;
            case Grocery_Item::Orange:
                os << "Orange";
                break;
            default:
                os << "Invalid Item";
        }
    }
    os << " : " << value;
    return os;
}

// Used for test1
// Returns a boolean depending on whether the Grocery_Item
// parameter is a valid enumerator or not.
bool is_valid_grocery_item(Grocery_Item item) {
    switch (item) {
        case Grocery_Item::Milk:
        case Grocery_Item::Bread:
        case Grocery_Item::Apple:
        case Grocery_Item::Orange:
            return true;
        default:
            return false;
    }
}

// Userd for test1
// Displays the grocery items in the grocery list
// Given a vector of Grocery_Item, this functions displays 
// the string representation of each item using the overloaded operator<< function.
// This function also keep track of how many valid and invalid items are 
// in the provided vector by using the in_valid_grocery_item functions written above.
void display_grocery_list(const std::vector<Grocery_Item> &item_list) {
    std::cout << "Grocery List" << "\n-------------------" << std::endl;
    int invalid_item_count {};
    int valid_item_count {};
    for (auto item : item_list) {
        std::cout << item << std::endl;        // Use the overloaded operator<<
        
        // Check that item is valid grocery item
        if (is_valid_grocery_item(item)) {
            valid_item_count++;
        } else {
            invalid_item_count++;
        }
    }

    std::cout << "-------------------" << std::endl;
    std::cout << "Valid items   : " << valid_item_count << std::endl;
    std::cout << "Invalid items : " << invalid_item_count << std::endl;
    std::cout << "Total items   : " << valid_item_count + invalid_item_count << std::endl;
}

// Using a scoped enumeration to model grocery items
void test1() {
    garis();

    std::vector<Grocery_Item> shopping_list;

    shopping_list.push_back(Grocery_Item::Apple);
    shopping_list.push_back(Grocery_Item::Milk);
    shopping_list.push_back(Grocery_Item::Orange);

    int Helicopter {1000};
    // shopping_list.push_back(Helicopter);                 // Compiler error
    shopping_list.push_back(Grocery_Item(Helicopter));      // Invalid item
    shopping_list.push_back(Grocery_Item(350));             // Will add Milk again

    display_grocery_list(shopping_list);
}

// Used for test2
// A simple class that might model a Player in a game application.
// The player has a name, a mode that they are currently in,
// and a direction which they are facing.
class Player {
    friend std::ostream &operator<<(std::ostream &os, const Player &p);

public:
    enum class Mode {Attack, Defense, Idle};
    enum class Direction {North, South, East, West};

    Player(std::string name, Mode mode = Mode::Idle, Direction dir = Direction::North) 
        : name{name}, mode{mode}, dir{dir} {}

    void set_name(std::string name) {
        name = name; // this->name;
    }
    std::string get_name() const {
        return name;
    }
    void set_mode(Mode mode) {
        mode = mode; // this->mode;
    }
    Mode get_mode() {
        return mode;
    }
    void set_direction(Direction dir) {
        dir = dir; // this->dir;
    }
    Direction get_direction() {
        return dir;
    }

private:
    std::string name;
    Mode mode;
    Direction dir;
};

// Used for test2
// A simple function that returns the string representation
// of the Player::Mode parameter passed into it.
std::string get_player_mode(Player::Mode mode) {
    std::string result;
    switch (mode) {
        case Player::Mode::Attack:
            result = "Attack";
            break;
        case Player::Mode::Defense:
            result = "Defense";
            break;
        case Player::Mode::Idle:
            result = "Idle";
            break;
    }
    return result;
}

// Used for test2
// A simple function that returns the string representation
// of the Player::Direction parameter passed into it.
std::string get_player_direction(Player::Direction dir) {
    std::string result;
    switch (dir) {
        case Player::Direction::North:
            result = "North";
            break;
        case Player::Direction::South:
            result = "South";
            break;
        case Player::Direction::East:
            result = "East";
            break;
        case Player::Direction::West:
            result = "West";
            break;
    }
    return result;
}

// Used for test2
// Overloading the output stream insertion operator
// so we can easily put Player objects on the output stream
std::ostream &operator<<(std::ostream &os, const Player &p) {
    os << "Player name          : " << p.get_name() << "\n"
       << "Player mode          : " << get_player_mode(p.mode) << "\n"
       << "Player directions    : " << get_player_direction(p.dir) << std::endl;
    return os;
}

void test2() {
    garis();

    Player p1{"Cloud Strife", Player::Mode::Attack, Player::Direction::North};
    Player p2{"Tifa Lockhart", Player::Mode::Defense, Player::Direction::West};
    Player p3{"Sephiroth", Player::Mode::Idle, Player::Direction::South};

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
}

int main() {
    std::cout << std::endl;

    test1();
    test2();

    std::cout << std::endl;
    return 0;
}