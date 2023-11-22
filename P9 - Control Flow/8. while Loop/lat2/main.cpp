// LATIHAN WHILE LOOP
/*
    Given a vector of integers, determine how many integers are present 
    before you see the value -99. Note, it's possible -99 is not in the 
    vector! If -99 is not in the vector then the result will be equal to 
    the number of elements in the vector. The final result should be 
    stored in an integer variable named count. Note that you the different 
    vectors will be tested against your code. You do not need to declare 
    the vector of integers. vec is the name of the vector you should use.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << endl;

    const vector <int> list{10, 21, 63, 83, -99, 70};

    int count{};
    // int index{};  // Ini ada warning, jadinya pakai yang bawah
    std::vector<int>::size_type index{};

    while (index < list.size() && list.at(index) != -99) {
        count++;
        index++;
    }
    cout << "Count: " << count << endl;
    cout << "Stop karena menemui -99" << endl;

    cout << endl;
    return 0;
}