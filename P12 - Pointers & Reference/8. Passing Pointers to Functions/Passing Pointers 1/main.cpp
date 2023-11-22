#include <iostream>

using namespace std;

void double_data(int *ptr);

int main() {
    cout << endl;

    int value {10};
    int *int_ptr {nullptr};

    cout << "Value: " << value << endl;
    // pass-by reference alamat value ke function
    double_data(&value);
    cout << "Value: " << value << endl;
    cout << endl;
    // pass pointers to functions
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;

    cout << endl;
    return 0;
}

void double_data(int *ptr) {
    /* 
    selama yang di berikan adalah alamat (dengan 
    pass by reference (&value)
    atau dengan pointers)
    */
    *ptr *= 2;
}