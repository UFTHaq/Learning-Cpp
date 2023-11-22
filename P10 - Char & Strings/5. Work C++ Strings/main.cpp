#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    cout << endl;
    cout << "============================" << endl;

    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};           // Apple
    string s6 {s1, 0, 3};     // App
    string s7 (10, 'X');      // XXXXXXXXXX

    cout << s0 << endl;             // No garbage
    cout << s0.length() << endl;    // empty string
    cout << endl;

    // INITIALIZATION
    cout << "Initialization" << endl;
    cout << "-------------------------------------" << endl;
    cout << "s1 is initialized to: " << s1 << endl;
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl;
    cout << endl;

    // COMPARISON
    cout << "Comparison" << endl;
    cout << "-------------------------------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << " : " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << " : " << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << " : " << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << "  : " << (s4 < s5) << endl;
    cout << s1 << " == " << "Apple" << " : " << (s1 == "Apple") << endl;
    cout << endl;

    // ASSIGNMENT
    cout << "Assignment" << endl;
    cout << "-------------------------------------" << endl;

    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 in now: " << s2 << endl;

    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl;

    s3[0] = 'C';
    cout << "s3 change first letter to 'C': " << s3 << endl;
    s3.at(0) = 'P';
    cout << "s3 change first letter to 'P': " << s3 << endl;
    cout << endl;

    // CONCATENATION
    cout << "Concatenation" << endl;
    cout << "-------------------------------------" << endl;

    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl;
    cout << endl;

    // LOOPING
    cout << "Looping" << endl;
    cout << "-------------------------------------" << endl;

    // for loop
    s1 = "Apple";
    for (size_t i{0}; i < s1.length(); i++) {
        cout << s1.at(i);
        cout << " ";
    }
    cout << endl << endl;

    // Range-based for loop
    for (char i: s1) {
        cout << i;
        cout << " ";
    }
    cout << endl << endl;

    // SUBSTRING
    cout << "Substring" << endl;
    cout << "-------------------------------------" << endl;

    s1 = "This is a test";

    cout << s1.substr(0, 4) << endl;
    cout << s1.substr(5, 2) << endl;
    cout << s1.substr(10, 4) << endl;
    cout << endl;

    // ERASE
    cout << "Erase" << endl;
    cout << "-------------------------------------" << endl;

    s1 = "This is a test";
    s1.erase(0,8);
    cout << "s1 is now: " << s1 << endl;
    cout << endl;

    // GETLINE
    cout << "getline()" << endl;
    cout << "-------------------------------------" << endl;

    string full_name{};

    cout << "Enter your full name: ";
    getline(cin, full_name);

    cout << "Your full name is: " << full_name << endl;
    cout << endl;

    // FIND
    cout << "find()" << endl;
    cout << "-------------------------------------" << endl;

    s1 = "The secret word is Boo";
    string word{};

    cout << "Enter the word to find: ";
    cin >> word;

    size_t position = s1.find(word);
    if (position != string::npos) {
        cout << "Found " << word << " at position: " << position << endl;
    } else {
        cout << "Sorry, " << word << " not found" << endl;
    }

    cout << endl;
    return 0;
}