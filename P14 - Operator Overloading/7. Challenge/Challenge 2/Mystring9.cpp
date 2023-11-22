#include "Mystring9.h"

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
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (strcmp(lhs.str, rhs.str) == 0);
}

// Not Equals
bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    return !(strcmp(lhs.str, rhs.str) == 0);
}

// Less Than
bool operator<(const Mystring &lhs, const Mystring &rhs) {
    return (strcmp(lhs.str, rhs.str) < 0);
}

// Greater Than
bool operator>(const Mystring &lhs, const Mystring &rhs) {
    return (strcmp(lhs.str, rhs.str) > 0);
}

// Make Lowercase
Mystring operator-(const Mystring &obj) {
    char *buff = new char[strlen(obj.str) + 1];
    strcpy(buff, obj.str);
    for (size_t i = 0; i < strlen(buff); i++) {
        buff[i] = tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concate and Assign
Mystring &operator+=(Mystring &lhs, const Mystring &rhs) {
    lhs = lhs + rhs;
    return lhs;
}

// Repeat
Mystring operator*(const Mystring &lhs, int n) {
    Mystring temp;
    for (int i = 1; i <= n; i++) {
        temp = temp + lhs;
    }
    return temp;
}

// Repeat and Assign
Mystring &operator*=(Mystring &lhs, int n) {
    lhs = lhs * n;
    return lhs;
}

// Make UPPERCASE - Pre-increment
Mystring &operator++(Mystring &obj) {
    for (size_t i = 0; i < strlen(obj.str); i++) {
        obj.str[i] = toupper(obj.str[i]);
    }
    return obj;
}

// Make UPPERCASE - Post-increment
Mystring operator++(Mystring &obj, int) {
    Mystring temp {obj};
    ++obj;                  // make sure you call the pre-increment!
    return temp;
}