#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << endl;

    int num {10};
    
    cout << "sizeof of num is: " << sizeof num << endl;
    cout << "Value of num is: " << num << endl;
    cout << "Address of num is: " << &num << endl;
    cout << endl;

    int *p;
    cout << "sizeof of p is: " << sizeof p << endl;
    cout << "Value of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << endl;

    p = nullptr;
    cout << "sizeof of p is: " << sizeof p << endl;
    cout << "Value of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << endl;

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};

    cout << "sizeof of p1 is: " << sizeof p1 << endl;
    cout << "sizeof of p2 is: " << sizeof p2 << endl;
    cout << "sizeof of p3 is: " << sizeof p3 << endl;
    cout << "sizeof of p4 is: " << sizeof p4 << endl;
    cout << "sizeof of p5 is: " << sizeof p5 << endl;
    cout << endl;

    int score {10};
    // double high_temp {36.5};

    int *score_ptr {nullptr};

    score_ptr = &score;
    cout << "Value of score is: " << score << endl;
    cout << "Address of score is: " << &score << endl;
    cout << "Value of score_ptr is: " << score_ptr << endl;

    // score_ptr = &high_temp;  // Compiler error karena beda type data

    cout << endl;
    return 0;
}