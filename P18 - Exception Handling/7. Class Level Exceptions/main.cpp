#include <iostream>
#include <memory>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"


int main() {
    std::cout << std::endl;

    try {
        std::unique_ptr<Account> fahmi_account = std::make_unique<Checking_Account> ("Fahmi", -30.0);
        std::cout << *fahmi_account << std::endl;
    }

    catch (const IllegalBalanceException &ex) {
        std::cerr << "Couldn't create account - Negative Balance" << std::endl;
    }

    std::cout << "Program Completed Successfully" << std::endl;

    std::cout << std::endl;
    return 0;
}