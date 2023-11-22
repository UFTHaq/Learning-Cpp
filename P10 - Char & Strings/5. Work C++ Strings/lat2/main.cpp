/*
    Using C++ Strings - Exercise 2

        In this exercise you will create a program that will be used in a digital 
    library to format and sort journal entries based on the authors last name. 
    Each entry has room to store only the last name of the author.
        Begin by removing the first name "Isaac" from the string variable 
    journal_entry_1 by using the string function erase. Do not forget to also remove 
    the whitespace so that the string variable journal_entry_1 will then contain the 
    string "Newton" with no whitespaces.
        The journal entries should be sorted alphabetically based on the authors 
    last name. For example, the last name "Brown" should come before the last name 
    "Davis".
        Create an if statement so that if the last name contained within 
    journal_entry_2 is alphabetically less than the last name contained within 
    journal_entry_1, then the string values are swapped using the string function swap.
        You may use either of the comparison operators < > in the if statement but 
    remember that following ASCII, "A" is lexicographically lower than "B".
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << endl;

    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};

    journal_entry_1.erase(0, 6);

    cout << journal_entry_1 << " > " << journal_entry_2 << ": ";
    if (journal_entry_1.at(0) > journal_entry_2.at(0)) {
        cout << "True" << endl;
        swap(journal_entry_1, journal_entry_2);
    } else {
        cout << "False" << endl;
    }
    cout << endl;

    cout << journal_entry_1 << "\n" << journal_entry_2;
    cout << endl;

    cout << endl;
    return 0;
}