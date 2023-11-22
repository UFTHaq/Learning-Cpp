#include <iostream>
#include "Account.h"

int main() {
    std::cout << std::endl;

    Account ukhem_account;
    ukhem_account.set_name("Ukhem's account");
    ukhem_account.set_balance(1000.0);

    if (ukhem_account.deposit(50)) {
        std::cout << "Deposit OK." << std::endl;
    } else {
        std::cout << "Deposit Not Allowed Under: " << Account::threshold << std::endl;
    } std::cout << std::endl;

    if (ukhem_account.withdraw(450.0)) {
        std::cout << "Withdrawal OK." << std::endl;
    } else {
        std::cout << "Not Sufficient funds." << std::endl;
    } std::cout << std::endl;

    if (ukhem_account.withdraw(1200)) {
        std::cout << "Withdrawal OK." << std::endl;
    } else {
        std::cout << "Not Sufficient funds." << std::endl;
    } std::cout << std::endl;

    std::cout << std::endl;
    return 0;
}