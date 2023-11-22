// SOAL LATIHAN 7
/*
    In this exercise, you will write a program that uses the assignment 
    operator = to change the value of an initialized variable as well as 
    assign the value of one variable to another. Begin by declaring and 
    initializing the integer variable num1 to the value of 13. Now declare 
    and initialize the integer variable num2  to the value 0.Use the 
    assignment operator to change the value of num1 to 5. Now use the 
    assignment operator to assign the value of  num1  to  num2.
*/

#include <iostream>
using namespace std;

int main() {
    cout << endl;
    // Declare num1 as an integer and initialize it to 13.
    int num1 {13};
    // Declare num2 as an integer and initialize it to 0.
    int num2 {0};
    cout << "num1: " << num1 << " & " << "num2: " << num2 << endl;
    
    // Assign the value 5 to num1
    num1 = 5;
    // Assign the value of num1 to num2
    num2 = num1;

    cout << "num1: " << num1 << " & " << "num2: " << num2 << endl;
    cout << endl;
    return 0;
}

