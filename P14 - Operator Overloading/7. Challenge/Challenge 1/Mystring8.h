#ifndef MYSTRING8_H
#define MYSTRING8_H
#include <iostream>
#include <cstring>

#pragma once

class Mystring {
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

    // Overloaded operator member methods
    Mystring operator-() const;                         // Make Lowercase
    Mystring operator+(const Mystring &rhs) const;      // Concatenate
    bool operator==(const Mystring &rhs) const;         // Equals
    bool operator!=(const Mystring &rhs) const;         // Not Equals
    bool operator<(const Mystring &rhs) const;          // Less Than
    bool operator>(const Mystring &rhs) const;          // Greater Than
    Mystring &operator+=(const Mystring &rhs);          // s1 + s2; concate and assign
    Mystring operator*(int n) const;                    // s1 = s2 * 3; repeat s2 n times
    Mystring &operator*=(int n);                        // s1 *= 3; s1 = s1 * 3;
    Mystring &operator++();                             // pre-increment ++s1;
    Mystring operator++(int);                           // post-increment s1++;

};

#endif