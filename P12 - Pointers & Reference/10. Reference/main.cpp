#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << endl;

    int num {100};
    int &reference {num};

    cout << num << endl;
    cout << reference << endl;

    num = 200;
    cout << "=======================" << endl;
    cout << num << endl;
    cout << reference << endl;

    reference = 300;
    cout << "=======================" << endl;
    cout << num << endl;
    cout << reference << endl;

    cout << "=======================" << endl;
    vector<string> stooges {"Ukhem", "Fahmi", "Thoriqul", "Haq"};

    for (auto str: stooges) {    // str is a Copy of the each vector element
        str = "Funny";
    }

    for (auto str: stooges) {      // No change
        cout << str << endl;
    } 
    
    cout << "=======================" << endl;

    for (auto &str: stooges) {     // str is a reference to each vector element
        str = "Funny";
    }

    for (auto const &str: stooges) { // Notice we are using const
        cout << str << endl;         // now the vector elements have changed
    }

    cout << endl;
    return 0;
}