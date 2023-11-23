#ifndef I_PRINTABLE_H
#define I_PRINTABLE_H
#include <iostream>

#pragma once

class I_Printable {
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() {}
};

#endif