// Arrays and Functions

#include <iostream>

using namespace std;

void print_array(const int ini_array[], size_t ukuran);
void set_array(int ini_array[], size_t, int value);

int main() {
    cout << endl;

    int my_scores[] {100, 98, 90, 86, 84};

    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);

    cout << endl;
    return 0;
}

void print_array(const int ini_array[], size_t ukuran) {
    for (size_t i{0}; i < ukuran; i++) {
        cout << ini_array[i] << " ";
    } 
    cout << endl;
}

void set_array(int ini_array[], size_t ukuran, int value) {
    for (size_t i{0}; i < ukuran; i++) {
        ini_array[i] = value;
    }
}

