// CONTINUE & BREAK
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << endl;
    vector <int> values{1, 2, -1, -1, 3, -1, 4, -99, 5};
    for (auto val: values) {
        if (val == -99) {
            break;
        } else if (val == -1) {
            continue;
        } else {
            cout << val << endl;
        }
    }
    cout << endl;
    return 0;
}