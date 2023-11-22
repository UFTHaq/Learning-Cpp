#include <iostream>

class Shallow {
private:
    int *data;

public:
    void set_data_value(int d) {
        *data = d;
    }
    int get_data_value() {
        return *data;
    }

    // Constructor
    Shallow(int d);
    // Copy Constructor
    Shallow(const Shallow &source);
    // Destructor
    ~Shallow();
};

Shallow::Shallow(int d) {
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    : data(source.data) {
        std::cout << "Copy Constructor - Shallow Copy." << std::endl;
}

Shallow::~Shallow() {
    delete data;
    std::cout << "Destructor freeing data." << std::endl;
}

void display_shallow(Shallow s) {
    std::cout << s.get_data_value() << std::endl;
}

int main() {
    std::cout << std::endl;

    Shallow object_1{100};
    display_shallow(object_1);

    Shallow twin_object_1{object_1};
    twin_object_1.set_data_value(1000);
    display_shallow(twin_object_1);

    std::cout << std::endl;
    return 0;
}