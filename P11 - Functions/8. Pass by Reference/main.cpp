// PASS BY REFERENCE

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

void pass_by_ref1(int &num) {
    num = 1000;
}

void pass_by_ref2(string &s) {
    s = "Changed";
}

void pass_by_ref3(vector<string> &v) {
    v.clear();
}

void print_vector(const vector<string> &v) {
    for (auto j: v) {
        cout << j << " ";
    }
    cout << endl;
}

int main() {
    cout << endl;

    int num {10};
    int another_num {20};

    cout << "num before calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref1 : " << num << endl;
    cout << endl;

    cout << "another_num before calling pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after calling pass_by_ref1 : " << another_num << endl;
    cout << endl;

    string name {"Frank"};
    cout << "name before calling pass_by_ref2: " << name << endl;
    pass_by_ref2(name);
    cout << "name after calling pass_by_ref2 : " << name << endl;
    cout << endl;

    vector<string> stooges {"Fahmi", "Thoriqul", "Haq"};
    cout << "stooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "stooges after calling pass_by_ref3: ";
    print_vector(stooges);

    cout << endl;
    return 0;
}
