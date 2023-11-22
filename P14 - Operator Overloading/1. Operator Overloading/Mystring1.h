#ifndef MYSTRING1_H
#define MYSTRING1_H

#pragma once

class Mystring {
private:
    char *str;                                  // pointer to char[]
public: 
    Mystring();                                 // No-args Constructor
    Mystring(const char *s);                    // Overloaded Constructor
    Mystring(const Mystring &source);           // Copy Constructor
    ~Mystring();                                // Destructor

    Mystring &operator=(const Mystring &rhs);   // Copy assignment

    void display() const;
    int get_length() const;                     // getters
    const char *get_str() const;

};

#endif