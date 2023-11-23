#include <iostream>
#include "Account4.h"
#include "Savings_Account4.h"

int main() {
    std::cout << std::endl;

    // Use the Account Class
    std::cout << "===== Account ===============================" << std::endl;
    Account ukhem_acc {"(Ukhem Account)"};
    ukhem_acc.deposit(2000.0);
    ukhem_acc.withdraw(500.0);

    std::cout << std::endl;

    // Use the Account Class with Pointer
    Account *ptr_account {nullptr};
    ptr_account = new Account("{Pointer Account}");
    (*ptr_account).deposit(1000.0);
    ptr_account->withdraw(500.0);
    delete ptr_account;
    ptr_account = nullptr;

    // Use the Savings Account Class
    std::cout << "\n===== Savings Account ======================" << std::endl;
    Savings_Account tab_ukhem {"(Tabungan Ukhem)"};
    tab_ukhem.sav_deposit(200.0);
    tab_ukhem.sav_withdraw(50.0);

    std::cout << std::endl;

    // Use the Savings Account Class with Pointer
    Savings_Account *ptr_tab_acc {nullptr};
    ptr_tab_acc = new Savings_Account("{Tabungan Pointer}");
    ptr_tab_acc->sav_deposit(100.0);
    (*ptr_tab_acc).sav_withdraw(20.0);
    delete ptr_tab_acc;
    ptr_tab_acc = nullptr;

    std::cout << "============================================" << std::endl;

    std::cout << std::endl;
    return 0;
}