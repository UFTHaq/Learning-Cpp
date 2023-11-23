// 2D VECTOR - DISPLAY ELEMENT
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << endl;

    vector <vector <int>> vector_2D {
        {1, 2, 3},
        {10, 20, 30, 40},
        {100, 200, 300, 400, 500}
    };

    for (auto vector_1D: vector_2D) {
        for (auto value: vector_1D) {
            cout << value << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}