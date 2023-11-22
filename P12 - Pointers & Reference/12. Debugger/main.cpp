#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    cout << endl;

    int i {5};
    while (i > 0) {
        cout << i << endl;
        i--;
    }
    cout << endl;

    int x {100}, y {200};
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << endl;

    swap(&x, &y);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    cout << endl;
    return 0;
}