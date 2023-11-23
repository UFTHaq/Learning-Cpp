#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include <vector>

int main() {
    std::cout << std::endl;

    // Checking_Account ukhem{"Ukhem", 5000};
    // std::cout << ukhem << std::endl;
    // std::cout << std::endl;

    // Account *ptr_trust = new Trust_Account("Haq", 1000);
    // std::cout << *ptr_trust << std::endl;
    // std::cout << std::endl;

    // Account *ptr_a = new Savings_Account("Fahmi", 1000);
    // std::cout << ptr_a << std::endl;
    // std::cout << *ptr_a << std::endl;
    // std::cout << ptr_a->get_balance() << std::endl;

    // delete ptr_a;
    // std::cout << std::endl;

    Account *ptr1 = new Trust_Account("VER", 9800);
    Account *ptr2 = new Trust_Account("HAM", 4800);
    Account *ptr3 = new Trust_Account("LEC", 3700);

    Account *ptr4 = new Checking_Account("ALO", 3700);
    Account *ptr5 = new Checking_Account("NOR", 2400);
    Account *ptr6 = new Checking_Account("SAI", 2350);

    Account *ptr7 = new Savings_Account("RUS", 2100);
    Account *ptr8 = new Savings_Account("PER", 2040);
    Account *ptr9 = new Savings_Account("PIA", 1860);

    std::cout << *ptr1 << std::endl;

    std::vector<Account *> test {ptr1, ptr2, ptr3, ptr4, ptr5, ptr6, ptr7, ptr8, ptr9};

    // DISPLAY
    display(test);

    // DEPOSITS
    for (int i = 275; i <= 6000; i = i + (i*0.575)) {
        deposit(test, i);
    }
    
    // DISPLAY
    display(test);

    // WITHDRAW
    for (int i = 3500; i >= 750; i = i - (i*0.275)) {
        withdraw(test, i);
    }

    // DISPLAY
    display(test);

    delete ptr1;
    delete ptr2;
    delete ptr3;

    std::cout << std::endl;
    return 0;
}