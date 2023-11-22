#ifndef MYSTRING6_H
#define MYSTRING6_H
#include <cstring>
#include <iostream>

#pragma once

class Mystring {
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
private:
    char *str;                              // pointer to a char[] that holds a C-style string
public:
    Mystring();                             // No-args constructor
    Mystring(const char *s);                // Overloaded Constructor
    Mystring(const Mystring &source);       // Copy Constructor
    Mystring(Mystring &&source);            // Move Constructor
    ~Mystring();                            // Destructor


    Mystring &operator=(const Mystring &rhs);   // Copy assignment
    Mystring &operator=(Mystring &&rhs);

    void display() const;

    int get_length() const;                 // getters
    const char *get_str() const;

};

#endif