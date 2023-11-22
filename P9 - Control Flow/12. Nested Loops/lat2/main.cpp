// 2D ARRAYS - SET ALL ELEMENTS TO 1000
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int grid[5][3] {};

    // 2D ARRAYS - SET ALL ELEMENTS TO 1000
    for (int row{0}; row < 5; row++) {
        for (int col{0}; col < 3; col++) {
            grid[row][col] = 1000;
        }
    }
    // 2D ARRAYS - DISPLAY ELEMENT
    for (int row{0}; row < 5; row++) {
        for (int col{0}; col < 3; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}