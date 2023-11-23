#include <iostream>
#include <memory>
#include <exception>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalance_Exception.h"
#include "InsufficentFunds_Exception.h"

int main() {
    std::cout << std::endl;

    std::unique_ptr<Account> ver_account;
    std::unique_ptr<Account> lec_account;

    try {
        lec_account = std::make_unique<Savings_Account> ("LEC", -1400);
        std::cout << *lec_account << std::endl;

    }
    catch (const IllegalBalance_Exception &ex) {
        std::cerr << "[FAILED] - " << ex.what() << std::endl;
    }

    std::cout << "\n\tNext Process. . .\n" << std::endl;

    try {
        ver_account = std::make_unique<Checking_Account> ("VER", 100);
        std::cout << *ver_account << std::endl;

        ver_account->deposit(200);
        std::cout << *ver_account << std::endl;
        ver_account->withdraw(100);
        std::cout << *ver_account << std::endl;
        ver_account->withdraw(150);
        std::cout << *ver_account << std::endl;
        ver_account->withdraw(45.25);
        std::cout << *ver_account << std::endl;
        ver_account->withdraw(10);
        std::cout << *ver_account << std::endl;
    }
    catch (const IllegalBalance_Exception &ex) {
        std::cerr << "[FAILED] - " << ex.what() << std::endl;
    }
    catch (const InsufficentFunds_Exception &ex) {
        std::cerr << "[FAILED] - " << ex.what() << std::endl;
    }

    std::cout << "\nProgram Completed Successfully" << std::endl;

    std::cout << std::endl;
    return 0;
}