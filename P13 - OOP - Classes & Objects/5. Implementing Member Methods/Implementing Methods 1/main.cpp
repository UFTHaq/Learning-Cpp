#include <iostream>
#include <string>

class Account {
private:
    // Attributes
    std::string name;
    double balance;

public:
    static const int threshold {250};
    // Methods
    // Methods declared inline
    void set_balance(double bal) {
        balance = bal;
    }
    double get_balance() {
        return balance;
    }
    // Methods will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
    bool display_balance();
};

void Account::set_name(std::string n) {
    name = n;
}

std::string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    if (amount > threshold) {
        balance += amount;
        return true;
    } else {
        return false;
    }
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

bool Account::display_balance() {
    std::cout << get_name() << ", Balance: " << get_balance() << std::endl;
    std::cout << std::endl;
    return true;
}

int main() {
    std::cout << std::endl;

    Account ukhem_account;
    ukhem_account.set_name("Ukhem's account");
    ukhem_account.set_balance(1000.0);
    ukhem_account.get_name();

    if (ukhem_account.deposit(200)) {
        std::cout << "Deposit OK" << std::endl;
    } else {
        std::cout << "Deposit Not allowed under " << Account::threshold << std::endl;
    } ukhem_account.display_balance();

    if (ukhem_account.withdraw(500.0)) {
        std::cout << "Withdrawal OK" << std::endl;
    } else {
        std::cout << "Not sufficient funds" << std::endl;
    } ukhem_account.display_balance();

    if (ukhem_account.withdraw(1500)) {
        std::cout << "Withdrawal OK" << std::endl;
    } else {
        std::cout << "Not sufficient funds" << std::endl;
    } ukhem_account.display_balance();

    std::cout << std::endl;
    return 0;
}
