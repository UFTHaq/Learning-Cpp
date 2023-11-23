#ifndef ILLEGALBALANCE_EXCEPTION_H
#define ILLEGALBALANCE_EXCEPTION_H

#pragma once

class IllegalBalance_Exception: public std::exception{
public:
    IllegalBalance_Exception() noexcept = default;

    ~IllegalBalance_Exception() = default;

    virtual const char *what() const noexcept {
        return "Illegal Balance Exception";
    }

private:

};

#endif