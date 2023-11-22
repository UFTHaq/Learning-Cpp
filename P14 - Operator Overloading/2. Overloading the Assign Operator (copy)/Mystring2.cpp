#include "Mystring2.h"
#include <iostream>
#include <cstring>

// No-args Constructor
Mystring::Mystring() 
    : str{nullptr} {
        str = new char[1];
        *str = '\0';
}

// Overloaded Constructor
Mystring::Mystring(const char *s) 
    : str{nullptr} {
        if (s == nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        } 
    }

// Copy Constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr} {
        str = new char[strlen(source.str)+1];
        std::strcpy(str, source.str);
    }

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy Assigment" << std::endl;
    if (this == &rhs) {
        return *this;
    }
    delete [] this->str;
    str = new char[strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// Length getter
int Mystring::get_length() const {
    return std::strlen(str);
}

// string getter
const char *Mystring::get_str() const {
    return str;
}