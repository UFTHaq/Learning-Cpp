//  Function Overloading

#include <iostream>
#include <string>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s, string t) {
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: ";
    for (auto s: v) {
        cout << s << ", ";
    } cout << endl;
}

int main() {
    cout << endl;

    print(100);         // int
    print('A');         // character is always promoted to int should pirnt 65 ASCII ('A')
    cout << endl;

    print(123.5);       // double
    print(123.3F);      // Float is promoted to double
    cout << endl;

    print("C-style string");      // C-style sting is converted to a C++ string
     
    string s {"C++ string"};
    print(s);                     // C++ string
    cout << endl;

    print("C-style string", s);   // First argument is converted to a C++ string
    cout << endl;

    vector<string> four_stooges {"Ukhem", "Fahmi", "Thoriqul", "Haq"};
    print(four_stooges);

    cout << endl;
    return 0;
}