#include <iostream>

using namespace std;

int main() {
    cout << endl;
    // membuat pointer int yang berisi null
    int *int_ptr {nullptr};
    // assign new int -> new allocate memory
    int_ptr = new int;
    // cetak alamat pointer
    cout << int_ptr << endl;
    // delete pointer
    delete int_ptr;


    size_t size {0};
    double *temp_ptr {nullptr};

    cout << "How many temps? ";
    cin >> size;

    while (true) {
        /* code */
    temp_ptr = new double[size];
    }

    cout << temp_ptr << endl;

    delete [] temp_ptr;

    cout << endl;
    return 0;
}