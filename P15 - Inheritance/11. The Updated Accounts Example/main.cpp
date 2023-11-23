#include "Account_Util.h"
#include "Savings_Account.h"


int main() {
    std::cout << std::endl;

    std::cout.precision(2);
    std::cout << std::fixed;

    // Accounts
    std::vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Fahmi"});
    accounts.push_back(Account{"Thor", 2000});
    accounts.push_back(Account{"Haq", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    // Savings

    std::vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account{});
    sav_accounts.push_back(Savings_Account{"Superman"});
    sav_accounts.push_back(Savings_Account{"Batman", 2000});
    sav_accounts.push_back(Savings_Account{"WonderWoman", 5000, 5.0});

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    std::cout << std::endl;
    return 0;
}