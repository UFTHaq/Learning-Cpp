#include <string>
#include <iostream>
using namespace std;

int main() {
    cout << endl;
    cout << boolalpha;
    // DECLARING AND INITIALIZING
    string s1;                         // Empty
    string s2 {"Ukhem"};               // Ukhem
    string s3 {s2};                    // Ukhem
    string s4 {"Ukhem", 3};            // Ukh
    string s5 {s3, 1, 3};              // khe
    string s6 (4, 'U');                // UUUU

    cout << "===============" << endl;
    cout << "| C++ STRINGS |" << endl;
    cout << "|--------------" << endl;
    cout << "| s1: " << s1 << endl;
    cout << "| s2: " << s2 << endl;
    cout << "| s3: " << s3 << endl;
    cout << "| s4: " << s4 << endl;
    cout << "| s5: " << s5 << endl;
    cout << "| s6: " << s6 << endl; 
    cout << "===============" << endl;
    cout << endl;

    // ASSIGNMENT
    cout << "ASSIGNMENT" << endl;
    string s11;
    s11 = "C++ is MegaRock!";

    string s12 {"Hello World!"};
    s12 = s11;

    cout << "s11: " << s11 << endl;
    cout << "s12: " << s12 << endl;
    cout << "===============" << endl;
    cout << endl;

    // CONCATENATION
    cout << "CONCATENATION" << endl;
    string part1 {"C++"};
    string part2 {"is super"};
    string sentence;

    sentence = part1 + " " + part2 + " language";
    cout << sentence << endl;
    sentence = "C++ " + part2 + " mega" + " language";
    cout << sentence << endl;
    cout << "===============" << endl;
    cout << endl;

    // ACCESSING CHARACTERS[] and at() method
    cout << "ACCESSING CHARACTERS" << endl;
    string s21 {"Ukhem"};

    cout << s21[0] << endl;
    cout << s21.at(0) << endl;

    s21[0] = 'u';
    cout << s21 << endl;
    s21.at(0) = 'a';
    cout << s21 << endl;
    cout << "===============" << endl;
    cout << endl;

    string s22 {"Fahmi"};
    for (char i: s22) {
        cout << i << endl;
    }
    cout << endl;
    for (int i: s22) {
        cout << i << endl;
    }
    cout << "===============" << endl;
    cout << endl;

    // COMPARING -> (==), (!=), (>), (>=), (<), (<=)
    cout << "COMPARING" << endl;
    string s31 {"Apple"};
    string s32 {"Banana"};
    string s33 {"Kiwi"};
    string s34 {"apple"};
    string s35 {s31};

    cout << "s31 == s35 -> " << s31 << " == " << s35 << " : " << (s31 == s35) << endl;
    cout << "s31 == s32 -> " << s31 << " == " << s32 << " : " << (s31 == s32) << endl;
    cout << "s31 != s32 -> " << s31 << " != " << s32 << " : " << (s31 != s32) << endl;
    cout << "s31 > s32  -> " << s31 << " > " << s32 << " : " << (s31 > s32) << endl;
    cout << "s32 > s31  -> " << s32 << " > " << s31 << " : " << (s32 > s31) << endl;
    cout << "s34 < s35  -> " << s34 << " < " << s35 << " : " << (s34 < s35) << endl;
    cout << "s31 == 'Apple': " << s31 << " == " << "Apple" << " : " << (s31 == "Apple") << endl;
    cout << "===============" << endl;
    cout << endl;

    // SUBSTRING -> substr()
    //  object.substr(start_index, length)
    cout << "SUBSTRING" << endl;

    string s41 {"This is a test"};

    cout << s41.substr(0, 6) << endl;
    cout << s41.substr(5, 4) << endl;
    cout << s41.substr(10, 4) << endl;
    cout << "===============" << endl;
    cout << endl;

    // SEARCHING -> find()
    //  object.find(search_string)
    cout << "SEARCHING" << endl;
    string s51 {"This is a test"};

    cout << s51.find("This") << endl;
    cout << s51.find("is") << endl;
    cout << s51.find("test") << endl;
    cout << s51.find('e') << endl;
    cout << s51.find("is", 4) << endl;
    cout << s51.find("XX") << endl;
    cout << "===============" << endl;
    cout << endl;

    // REMOVING CHARACTERS -> erase() and clear()
    //  object.erase(start_index, length)
    cout << "REMOVING" << endl;

    string s61 {"This is a test"};

    cout << s61.erase(0, 5) << endl;
    cout << s61.erase(5, 4) << endl;
    s61.clear();
    cout << s61 << endl;
    cout << "===============" << endl;
    cout << endl;

    // OTHER USEFUL METHODS
    cout << "OTHER METHODS" << endl;
    string s71  {"Ukhem"};

    cout << s71.length() << ": " << s71 << endl;

    s71 += " Fahmi";
    cout << s71.length() << ": " << s71 << endl;
    cout << "===============" << endl;
    cout << endl;

    // INPUT >> and getline()
    cout << "INPUT" << endl;

    string a1;
    cin >> a1;      // Hello there
    cout << a1 << endl;
    cout << endl;

    cin.ignore();
    getline(cin, a1);    // Read entire line until \n
    cout << a1 << endl;
    cout << endl;
    
    getline(cin, a1);    // Read entire line until \n
    cout << a1 << endl;
    cout << endl;

    getline(cin, a1, 'r');
    cout << a1 << endl;

    cout << endl;
    return 0;
}