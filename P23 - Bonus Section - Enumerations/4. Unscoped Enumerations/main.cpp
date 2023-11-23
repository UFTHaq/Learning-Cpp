// UNSCOPED ENUMERATIONS EXAMPLES
#include <iostream>
#include <vector>
#include <string>

int num_line {};
void garis() {
    num_line++;
    std::cout << "\n== TEST " << num_line << " ==========================" << std::endl;
}

// Used for test1
enum Direction {North, South, East, West};
// enum Street {Main, North, Elm};          // Error, can't use North again

// Used for test1
// This function expects a Direction parameter
// and returns its string representation
std::string direction_to_string(Direction dir) {
    std::string result;
    
    switch (dir) {
        case North:
            result = "North";
            break;
        case South:
            result = "South";
            break;
        case East:
            result = "East";
            break;
        case West:
            result = "West";
            break;
        default:
            result = "Unknown direction";
    }
    return result;
}

// Simple example that shows the use of an unscoped enumeration
void test1() {
    garis();

    Direction dir {North};
    std::cout << "\nDirection : " << dir << std::endl;
    std::cout << direction_to_string(dir) << std::endl;

    dir = West;
    std::cout << "\nDirection : " << dir << std::endl;
    std::cout << direction_to_string(dir) << std::endl;

    dir = Direction(2);
    std::cout << "\nDirection : " << dir << std::endl;
    std::cout << direction_to_string(dir) << std::endl;

    // direction = 5;       // Compiler Error

    // Be careful casting since the compiler will assume
    // you know what you are doing!
    dir = Direction(100);
    std::cout << "\nDirection : " << dir << std::endl;
    std::cout << direction_to_string(dir) << std::endl;

    dir = static_cast<Direction>(300);
    std::cout << "\nDirection : " << dir << std::endl;
    std::cout << direction_to_string(dir) << std::endl;
}

// Used for test2
// Unscoped enumeration representing itmes for a grocery shopping list
enum Grocery_Item {Milk, Bread, Apple, Orange};

// Overloading the stream insertion operator to insert the string
// representation of the provided Grocery_Item parameter into
// the output stream 
std::ostream &operator<<(std::ostream &os, const Grocery_Item item) {
    switch (item) {
        case Milk:
            os << "Milk";
            break;
        case Bread:
            os << "Bread";
            break;
        case Apple:
            os << "Apple";
            break;
        case Orange:
            os << "Orange";
            break;
        default:
            os << "Invalid Item";
    }
    return os;
}

// Used for test2
// Returns a boolean depending on whether the Grocery_Item parameter
// is a valid enumerator or not.
bool is_valid_grocery_item(Grocery_Item item) {
    switch (item) {
        case Milk:
        case Bread:
        case Apple:
        case Orange:
            return true;
        default:
            return false;
    }
}

// Used for test2
// Given a vector of Grocery_Items, this function displays
// the string representation of each item using the overloaded operator<< function.
// This function also keeps track of how many valid and invalid items
// are in the provided vector by using the is_valid_grocery_item function written above.
void display_grocery_list(const std::vector<Grocery_Item> &item_list) {
    std::cout << "Grocery List" << "\n-----------------" << std::endl;
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

    std::cout << "-----------------" << std::endl;
    std::cout << "Valid items   : " << valid_item_count << std::endl;
    std::cout << "Invalid items : " << invalid_item_count << std::endl;
    std::cout << "Total items   : " << valid_item_count + invalid_item_count << std::endl;
}

// Using an unscoped enumeration to model grocery items
void test2() {
    garis();

    std::vector<Grocery_Item> shopping_list;

    shopping_list.push_back(Apple);
    shopping_list.push_back(Apple);
    shopping_list.push_back(Milk);
    shopping_list.push_back(Orange);

    // Grocery_Item item = 100;                 // Compiler error

    // Be careful when casting
    int Helicopter {1000};

    shopping_list.push_back(Grocery_Item(Helicopter));  // Invalid Item
    shopping_list.push_back(Grocery_Item(0));           // Will add Milk again

    display_grocery_list(shopping_list);
}

// Used for test3
// Uscoped enumerations holding the possible 
// states and sequences of a rocket launch.
// Note: the addition of the Unkown enumerator for the State enumeration.
enum State {Engine_Failure, Inclement_Weather, Nominal, Unknown};
enum Sequence {Abort, Hold, Launch};

// Used for test3
// Overloading the stream extraction operator to allow 
// a user to enter the state of State enumeration.
// Note: the use of underlying_type_t.

std::istream &operator>>(std::istream &is, State &state) {
    // int user_input;                      // will also work
    std::underlying_type_t<State> user_input;
    is >> user_input;

    switch (user_input) {
        case Engine_Failure:
        case Inclement_Weather:
        case Nominal:
        case Unknown:
            state = State(user_input);
            break;;
        default:
            std::cout << "User input is not valid" << std::endl;
            state = Unknown;
    }
    return is;
}

// Used for test3
// Overloading the stream insertion operator to insert the string
// representation of the provided Sequence parameter into the output stream
std::ostream &operator<<(std::ostream &os, const Sequence &sequence) {
    switch (sequence) {
        case Abort:
            os << "Abort";
            break;
        case Hold:
            os << "Hold";
            break;
        case Launch:
            os << "Launch";
            break;
    }
    return os;
}

// Used for test3
// Display an information message given the sequence parameter.
void initiate(Sequence sequence) {
    std::cout << "Initiate [ " << sequence << " ] sequence!" << std::endl;  // Uses overloaded operator<<
}

// Using unscoped enums to control a rocket launch
// Reads input from the user for the State of the rocket launch,
// and then determines which Sequence to execute.
void test3() {
    garis();

    State state;
    std::cout << "Launch state: ";
    std::cin >> state;                  // uses the overloaded operator>>

    switch (state) {
        case Engine_Failure:
        case Unknown:
            initiate(Abort);
            break;
        case Inclement_Weather:
            initiate(Hold);
            break;
        case Nominal:
            initiate(Launch);
            break;
    }
}

int main() {
    std::cout << std::endl;

    test1();
    test2();
    test3();

    std::cout << std::endl;
    return 0;
}

