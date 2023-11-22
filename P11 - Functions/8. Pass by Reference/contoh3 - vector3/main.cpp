#include <iostream>
#include <vector>

using namespace std;

// pass by const reference prototypes
void print(const vector<int> &v);

int main() {
    cout << endl;
    cout << "Pass By Const Reference" << endl;

    vector<int> data {1, 2, 3, 4, 5};
    print(data);

    cout << endl;
    return 0;
}

// pass by const reference functions
void print(const vector<int> &v) {
    for (auto i: v) {
        cout << i <<  endl;
    }
}