#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string> *const v) {
    for (auto element: *v) {
        cout << element<< " ";
    }
    cout << endl;
    // (*v).at(0) = "Funny";
    // v = nullptr;
}

void display(int *array, int sentinel) {
    while (*array != sentinel) {
        cout << *array++ << " ";
    }
    cout << endl;
}
 
int main() {
    cout << endl;

    cout << "============================" << endl;
    vector<string> stooges {"Ukhem", "Fahmi", "Thoriqul", "Haq"};
    display(&stooges);
    cout << endl;

    cout << "============================" << endl;
    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, - 1);

    cout << endl;
    return 0;
}