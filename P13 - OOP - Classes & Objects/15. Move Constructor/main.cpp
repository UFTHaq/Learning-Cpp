#include <iostream>
#include <vector>

class Move {
private:
    int *data;
public:
    void set_data_value(int d) {
        *data = d;
    }
    int get_data_value() {
        return *data;
    }
    // Constructor Prototypes
    Move(int d);
    // Copy Constructor Prototypes
    Move(const Move &source);
    // Move Constructor Prototypes
    Move(Move &&source);
    // Destructor Prototypes
    ~Move();
};

// Constructor Implementation
Move::Move(int d) {
    data = new int;
    *data = d;
    std::cout << "Constructor for: " << d << std::endl;
}
// Copy Constructor Implementation
Move::Move(const Move &source)
    : Move(*source.data) {
        std::cout << "Copy Constructor - Deep Copy for: " << *data << std::endl;
}
// Move Constructor Implementation
Move::Move(Move &&source) 
    : data(source.data) {
        source.data = nullptr;
        std::cout << "Move Constructor - Moving resource: " << *data << std::endl;
}
// Destructor Implementation
Move::~Move() {
    if (data != nullptr) {
        std::cout << "Destructor freeing data for: " << *data << std::endl;
    } else {
        std::cout << "Destructor freeing data for nullptr" << std::endl;
    }
    delete data;
}

int main() {
    std::cout << std::endl;

    std::vector<Move> vec;

    vec.push_back(Move{10});

    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});

    std::cout << std::endl;
    return 0;
}