#ifndef MYSTRING5_H
#define MYSTRING5_H
#include <iostream>
#include <cstring>

#pragma once

class Mystring {
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
private:
    char *str;              // pointer to char[] that hold C-style string
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);

    void display() const;

    int get_length() const;
    const char *get_str() const;
};

#endif