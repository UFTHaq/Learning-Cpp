// FOR LOOP
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << endl;

    // 1
    for (int i{1}; i <= 10; i++) {
        cout << i << endl;
    }
    cout << endl;

    // 2
    for (int i{1}; i <= 10; i += 2) {
        cout << i << endl;
    }
    cout << endl;

    // 3
    for (int i{10}; i > 0; i--) {
        cout << i << endl;
    }
    cout << "Stop" << endl;
    cout << endl;

    // 4
    for (int i{10}; i <= 100; i += 10) {
        if (i % 15 == 0) {
            cout << i << endl;
        }
    }
    cout << endl;

    // 5 Comma Operator
    for (int i{1}, j{5}; i <= 5; i++, j++) {
        cout << i << " + " << j << " = " << i + j << endl;
    }
    cout << endl;

    // 6
    for (int i{1}; i <= 100; i++) {
        cout << i;
        if (i % 10 == 0) {
            cout << endl;
        } else if (i <= 10) {
            cout << "  ";
        } else {
            cout << " ";
        }
    }
    cout << endl;

    // 7 using conditional operator
    for (int i{1}; i <= 100; i++) {
        cout << i << ((i % 10 ==0) ? "\n" : " ");
    }
    cout << endl;

    // vector
    vector <int> nums{10, 20, 30, 40, 50};
    for (unsigned int i{}; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }

    cout << endl;
    return 0;
}