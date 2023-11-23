#include "Account.h"
#include "Account_Util.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Checking_Account.h"

int main() {
    std::cout << std::endl;

    std::cout << "====     INHERITANCE CLASSES CHALLENGE     ===============================\n" << std::endl;

    std::cout.precision(2);
    std::cout << std::fixed;

    // Accounts
    std::vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Fahmi   "});
    accounts.push_back(Account{"Thor    ", 2000});
    accounts.push_back(Account{"Haq     ", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    std::cout << std::endl;

    // Savings

    std::vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account{});
    sav_accounts.push_back(Savings_Account{"Superman"});
    sav_accounts.push_back(Savings_Account{"Batman  ", 2000});
    sav_accounts.push_back(Savings_Account{"Ironman ", 5000, 5.0});

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    std::cout << std::endl;

    // Checking

    std::vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account{});
    check_accounts.push_back(Checking_Account{"Ronaldo "});
    check_accounts.push_back(Checking_Account{"Messi   ", 2000});
    check_accounts.push_back(Checking_Account{"Mbappe  ", 5000});

    display(check_accounts);
    deposit(check_accounts, 1500);
    withdraw(check_accounts, 200);

    std::cout << std::endl;

    // Trust

    std::vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account{"LEC "});
    trust_accounts.push_back(Trust_Account{"VER ", 5000, 5.25});
    trust_accounts.push_back(Trust_Account{"ALO ", 1750, 2.50});

    display(trust_accounts);
    deposit(trust_accounts, 5000);
    withdraw(trust_accounts, 3000);
    for (int i = 2000; i >= 500; i = i - (i * 0.275)) {
        withdraw(trust_accounts, i);
    }
    // withdraw(trust_accounts, 2000);
    // withdraw(trust_accounts, 1500);
    // withdraw(trust_accounts, 1000);
    // withdraw(trust_accounts, 1000);
    // withdraw(trust_accounts, 850);

    std::cout << std::endl;
    return 0;
}