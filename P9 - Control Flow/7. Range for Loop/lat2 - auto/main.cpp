// RANGE-BASED FOR LOOP
// USING AUTO TYPE pada element ARRAY -> SCORES[]

#include <iostream>
using namespace std;


int main() {
    cout << endl;

    int scores[] {100, 90, 97, 88, 85};
    int i{};
    // auto type
    for (auto nilai : scores) {
        cout << "scores[" << i << "]: " << nilai << endl;
        i++;
    }

    cout << endl;
    return 0;
}