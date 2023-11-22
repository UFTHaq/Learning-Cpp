#include "Mystring6.h"

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
        std::cout << "Copy Constructor used" << std::endl;
    }

// Move Constructor
Mystring::Mystring(Mystring &&source) 
    : str(source.str) {
        source.str = nullptr;
        std::cout << "Move Constructor used" << std::endl;
    }

// Destructor
Mystring::~Mystring() {
    if (str == nullptr) {
        // std::cout << "  Calling Destructor for Mystring: nullptr" << std::endl;
    } else {
    // std::cout << "  Calling Destructor for Mystring: " << str << std::endl;
    }
    delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Using Copy Assigment" << std::endl;
    if (this == &rhs) {
        return *this;
    }
    delete [] this->str;
    str = new char[strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Using Move assingment" << std::endl;
    if (this == &rhs) {
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
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

// Overloaded Insertion Operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// Overloaded Extraction Operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}