// FUNCTION PARAMETERS

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// FunctionPrototypes
void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);


void pass_by_value1(int num) {
    num = 1000;
    cout << "void pass_by_value1: " << num << endl;
}

void pass_by_value2(string s) {
    s = "Changed";
    cout << "void pass_by_value2: " << s << endl;
}

void pass_by_value3(vector<string> v) {
    v.clear();
    cout << "void pass_by_value3: ";
    print_vector(v);
}

void print_vector(vector<string> v) {
    for (auto s: v) {
        cout << s << " ";
    } cout << endl;
}

int main() {
    cout << endl;

    int num {10};
    int another_num {20};

    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    cout << endl;

    cout << "another num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another num after calling pass_by_value1: " << another_num << endl;
    cout << endl;

    string name {"Ukhem"};
    cout << "name before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;
    cout << endl;

    vector<string> stooges {"Fahmi", "Thoriqul", "Haq"};
    cout << "stooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);

    cout << endl;
    return 0;
}