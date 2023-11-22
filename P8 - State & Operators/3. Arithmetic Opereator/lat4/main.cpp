// SOAL LATIHAN 8
/*
    In this exercise you will write a program that uses arithmetic operators 
    to manipulate an integer number that is provided to you. You do NOT have 
    to declare number, it is already declared and will be set to various values 
    by the automated tester. In order to complete this exercise you will have
    to update the value contained within the variable number by using the currently
    contained value as an argument in the statement. This can be done through 
    the use of the assignment operator  =  in the following way:
    E.g. number  =  number  +  4
    Lets assume that  number is currently holding the value 3. This means that
    the above statement is equivalent to number = 3 + 4. Thereby, through the 
    assignment operator, the new value of number will be 7.

    Use the arithmetic operators in the manner and order in which they are listed 
    below. For those who feel inclined, try challenging yourself by completing all 
    operations in one statement remembering the rules of PEMDAS. Use the multiplication 
    operator * to double the value of the variable number and store the result back 
    in number. Use the addition operator + to add 9 to the variable number and store 
    the result back in number. Use the subtraction operator - to subtract 3 from the 
    variable number and store the result back in number new value. Use the division 
    operator / to divide the the variable number by 2 and store the result back in 
    number. Use the subtraction operator - to subtract the variable named original_number 
    from the variable number  and store the result back in number. Use the modulo 
    operator % to find the remainder of the new value when divided by 3 and store 
    the result back in number .
*/

#include <iostream>
using namespace std;

// Deklarasi fungsi di luar dari fungsi main
int arithmetic_operators(int number);

int main() {
    cout << endl;

    int number = 10; // Anda dapat mengganti nilai awal sesuai kebutuhan
    // Panggil fungsi arithmetic_operators
    int result = arithmetic_operators(number);
    // Tampilkan hasil
    cout << "Result: " << result << endl;
    cout << endl;
    return 0;
}

// Implementasi fungsi arithmetic_operators di luar dari fungsi main
int arithmetic_operators(int number) {
    int original_number {number};

    //-- Multiply number by 2 and assign the result back to number
    number = number * 2;
    //-- Add 9 to number and assign the result back to number
    number = number + 9;
    //-- Subtract 3 from number and assign the result back to number
    number = number - 3;
    //-- Divide number by 2 and assign the result back to number
    number = number / 2;
    //-- Subtract original_number from number and assign the result back to number
    number = number - original_number;
    //-- Take the modulus 3 (%) of number and assign it back to number
    number = number % 3;

    return number;
}
