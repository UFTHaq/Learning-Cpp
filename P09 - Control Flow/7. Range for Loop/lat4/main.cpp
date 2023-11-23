// USING THE RANGE-BASED FOR LOOP
/*
    Use a range-based for loop to loop through a given 
    vector of integers and determine how many elements 
    in the vector are evenly divisible by either 3 or by 5. 
    The final result should be stored in an integer variable 
    named count. The vector of integers has been provided 
    for you and is named vec .
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << endl;

    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    int count{};
    for (auto i: vec) {
        if (i % 3 == 0 || i % 5 == 0) {
            count++;
        }
    }
    cout << "Count: " << count << endl;

    cout << endl;
    return 0;
}