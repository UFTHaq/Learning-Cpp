// for Loop
// comma operator

#include <iostream>
using namespace std;

int main() {
    cout << endl;

    for (int i{1}, j{5}; i <= 5; i++, j++) {
        cout << i << " * " << j << " : " << (i * j) << endl;
    }

    cout << endl;
    return 0;
}