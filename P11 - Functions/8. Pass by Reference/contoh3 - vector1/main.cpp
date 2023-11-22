#include <iostream>
#include <vector>

using namespace std;

// pass by value prototypes
void print(vector<int> v);

int main() {
    cout << endl;

    cout << "Pass By Value" << endl;

    vector<int> data {1, 2, 3, 4, 5};
    print(data);

    cout << endl;
    return 0;
}

// pass by value functions
void print(vector<int> v) {
    for (auto i: v) {
        cout << i <<  endl;
    }
}