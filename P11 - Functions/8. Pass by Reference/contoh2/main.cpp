#include <iostream>

using namespace std;

void tukar_angka(int &a, int &b);

int main() {
    cout << endl;

    int x {10}, y {20};
    cout << x << " " << y << endl;
    tukar_angka(x, y);
    cout << x << " " << y << endl;

    cout << endl;
    return 0;
}

void tukar_angka(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}