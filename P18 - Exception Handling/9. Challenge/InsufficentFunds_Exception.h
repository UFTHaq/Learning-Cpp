#ifndef INSUFFICENTFUNDS_EXCEPTION_H
#define INSUFFICENTFUNDS_EXCEPTION_H

#pragma once

class InsufficentFunds_Exception: public std::exception {
public:
    InsufficentFunds_Exception() noexcept = default;

    ~InsufficentFunds_Exception() = default;

    virtual const char *what() const noexcept {
        return "Insufficent Funds Exception";
    }

private:

};

#endif