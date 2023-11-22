#ifndef MYSTRING9_H
#define MYSTRING9_H
#include <iostream>
#include <cstring>

#pragma once

class Mystring {
    friend Mystring operator-(const Mystring &obj);                         // Make Lowecase
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);    // Concatenate
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);       // Equals
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);       // Not Equals
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);        // Less Than
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);        // Greater Than
    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);        // s1 + s2; Concate and Assign
    friend Mystring operator*(const Mystring &lhs, int n);                  // s1 = s2 * 3; repeat s2 n times
    friend Mystring &operator*=(Mystring &lhs, int n);                      // s1 *= 3; s1 = s1 * 3;
    friend Mystring &operator++(Mystring &obj);                             // ++s1; pre-increment make uppercase
    friend Mystring operator++(Mystring &obj, int);                         // s++; post-increment make uppercase
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;                  // pointer to a char[] that holds a C-style string
public:
    Mystring();                                         // No-args constructor
    Mystring(const char *s);                            // Overloaded constructor
    Mystring(const Mystring &source);                   // Copy constructor
    Mystring(Mystring &&source);                        // Move constructor
    ~Mystring();                                        // Destructor

    Mystring &operator=(const Mystring &rhs);           // Copy assignment
    Mystring &operator=(Mystring &&rhs);                // Move assignment

    void display() const;

    int get_length() const;                             // getters
    const char *get_str() const;
};

#endif