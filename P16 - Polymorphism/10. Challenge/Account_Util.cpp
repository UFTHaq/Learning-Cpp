#include "Account_Util.h"

void display(const std::vector<Account *> &accounts) {
    std::cout << "\n=========== ACCOUNTS ===============================================================" << std::endl;
    for (const auto acc: accounts) {
        std::cout << *acc << std::endl;
    }
    std::cout << std::endl;
}

void deposit(std::vector<Account *> &accounts, double amount) {
    std::cout << "\n=========== DEPOSITS ===============================================================" << std::endl;
    for (auto acc: accounts) {
        if (acc->deposit(amount)) {
            std::cout << "[ DONE ] Deposit " << amount << " to " << *acc << std::endl;
        } else {
            std::cout << "[FAILED] Deposit " << amount << " to " << *acc << std::endl;
        }
    }
}

void withdraw(std::vector<Account *> &accounts, double amount) {
    std::cout << "\n=========== WITHDRAW ===============================================================" << std::endl;
    for (auto acc: accounts) {
        if (acc->withdraw(amount)) {
            std::cout << "[ DONE ] Withdraw " << amount << " to " << *acc << std::endl;
        } else {
            std::cout << "[FAILED] Withdraw " << amount << " to " << *acc << std::endl;
        }
    }
}