// for Loop

#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int i{};
    int j{1};

    for (i = 0; i < 5; i++) {
        cout << " " << i << ". iteration " << j++ << endl;
    }

    cout << endl;

    for (int a{1}; a <=10; a++) {
        if (a % 2 == 0) {
            cout << a << endl;
        }
    }

    cout << endl;

    int scores [] {100, 90, 87};

    for (int b{0}; b < 3; ++b) {
        cout << scores[b] << endl;
    }
    
    for (int c{0}; c <= 2; ++c) {
        cout << scores[c] << endl;
    }

    cout << endl;
    return 0;
}