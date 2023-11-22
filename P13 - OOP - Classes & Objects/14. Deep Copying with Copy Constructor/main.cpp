#include <iostream>
#include <string>

class Deep {
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
    Deep(int d);
    // Copy Constructor
    Deep(const Deep &source);
    // Destructor
    ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
    : Deep{*source.data} {
        std::cout << "Copy Constructor - Deep Copy." << std::endl;
}

Deep::~Deep() {
    delete data;
    std::cout << "Destructor freeing data." << std::endl;
}

void display_deep(Deep s) {
    std::cout << s.get_data_value() << std::endl;
}

int main() {
    std::cout << std::endl;

    Deep object_1{100};
    display_deep(object_1);

    Deep copy_object_1(object_1);

    copy_object_1.set_data_value(1000);
    display_deep(copy_object_1);

    std::cout << std::endl;
    return 0;
}