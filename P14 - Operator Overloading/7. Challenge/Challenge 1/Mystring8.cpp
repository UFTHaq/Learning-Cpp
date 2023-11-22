#include "Mystring8.h"

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
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
    }

// Copy Constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr} {
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
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
    delete [] str;
}

// Copy Assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Using Copy Assignment" << std::endl;

    if (this == &rhs) {
        return *this;
    }
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Using Move Assignment" << std::endl;

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

// Equality
bool Mystring::operator==(const Mystring &rhs) const {
    return (strcmp(str, rhs.str) == 0);
}

// Not Equals
bool Mystring::operator!=(const Mystring &rhs) const {
    return !(strcmp(str, rhs.str) == 0);
}

// Less Than
bool Mystring::operator<(const Mystring &rhs) const {
    return (strcmp(str, rhs.str) < 0);
}

// Greater Than
bool Mystring::operator>(const Mystring &rhs) const {
    return (strcmp(str, rhs.str) > 0);
}

// Make Lowercase
Mystring Mystring::operator-() const {
    char *buff = new char[strlen(str) + 1];
    strcpy(buff, str);
    for (size_t i=0; i<strlen(buff); i++) {
        buff[i] = tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char[strlen(str) + strlen(rhs.str) + 1];
    strcpy(buff, str);
    strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concate and Assign
Mystring &Mystring::operator+=(const Mystring &rhs) {
    *this = *this + rhs;
    return *this;
}

// Repeat
Mystring Mystring::operator*(int n) const {
    Mystring temp;
    for (int i=1; i<=n; i++) {
        temp = temp + *this;
    }
    return temp;
    /*
    cara lain

    size_t buff_size = strlen(str) * n + 1;
    char *buff = new char[buff_size];
    strcpy(buff, "");
    for (int i=1; i <= n; i++) {
        strcat(buff, str);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
    */
}

// Repeat and assign
Mystring &Mystring::operator*=(int n) {
    *this = *this * n;
    return *this;
}

// Pre-increment - make the string UPPER-CASE
Mystring &Mystring::operator++() {              // Pre-increment
    for (size_t i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
    return *this;
}

Mystring Mystring::operator++(int) {            // Post-increment
    Mystring temp {*this};                      // Make a copy
    operator++();                               // call Pre-increment - make sure you call preincrement!
    return temp;                                // return the old value
}