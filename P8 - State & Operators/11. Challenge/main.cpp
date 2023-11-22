// LATIHAN
/*
    Write a program that asks the user to enter the following:
    An integer representing the number of cents

    You may assume that the number of cents entered is greater than or equal to zero
    The program should then display how to provide that change to the user.

    In the US:
        1 dollar is 100 cents
        1 quarter is 25 cents
        1 dime is 10 cents
        1 nickel is 5 cents 
        1 penny is 1 cent
*/

#include <iostream>

int main() {
    std::cout << std::endl;

    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};
    const int penny_value{1}; 

    int change_amount{};

    // Solution 1 - Not using Modulo Operator
    std::cout << "======================================" << std::endl;
    std::cout << "| Solution Not Using Modulo Operator |" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "Enter an amount in cents: ";
    std::cin >> change_amount;

    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);

    quarters = balance / quarter_value;
    balance -= quarters * quarter_value;

    dimes = balance / dime_value;
    balance -= dimes * dime_value;

    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;

    pennies = balance / penny_value;
    balance -= pennies * penny_value;

    std::cout << "You can provide this change as follow: " << std::endl;
    std::cout << "dollars: " << dollars << std::endl;
    std::cout << "quarter: " << quarters << std::endl;
    std::cout << "dimes  : " << dimes << std::endl;
    std::cout << "nickels: " << nickels << std::endl;
    std::cout << "pennies: " << pennies << std::endl;

    // Solution 2 - Using Modulo Operator
    std::cout << "======================================" << std::endl;
    std::cout << "|   Solution Using Modulo Operator   |" << std::endl;
    std::cout << "======================================" << std::endl;

    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;

    quarters = balance / quarter_value;
    balance %= quarter_value;

    dimes = balance / dime_value;
    balance %= dime_value;

    nickels = balance / nickel_value;
    balance %= nickel_value;

    pennies = balance / penny_value;
    balance %= penny_value;

    std::cout << "You can provide this change as follow: " << std::endl;
    std::cout << "dollars: " << dollars << std::endl;
    std::cout << "quarter: " << quarters << std::endl;
    std::cout << "dimes  : " << dimes << std::endl;
    std::cout << "nickels: " << nickels << std::endl;
    std::cout << "pennies: " << pennies << std::endl;    
    std::cout << "======================================" << std::endl;

    std::cout << std::endl;
    return 0;
}