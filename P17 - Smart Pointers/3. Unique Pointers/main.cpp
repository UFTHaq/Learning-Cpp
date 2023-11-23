#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Savings_Account.h"

class Test {
private:
    int data;
public:
    Test() : data{0} {
        std::cout << "Test Constructor (" << data << ")" << std::endl; 
    }
    Test(int data) : data{data} {
        std::cout << "Test Constructor (" << data << ")" << std::endl;
    }

    int get_data() const {
        return data;
    }

    ~Test() {
        std::cout << "Test Destructor (" << data << ")" << std::endl;
    }
};

int main() {
    std::cout << std::endl;

    // Object
    Test t0{};
    Test t1{100};

    // Raw Pointer
    Test *t2 = new Test {200};
    delete t2;

    // Unique Pointer
    std::unique_ptr<Test> t3 {new Test{300}};
    std::unique_ptr<Test> t4 = std::make_unique<Test> (400);

    std::unique_ptr<Test> t5;
    t5 = std::move(t3);

    if (!t3) {
        std::cout << "t3 is nullptr" << std::endl;
    }

    std::unique_ptr<Account> a1 = std::make_unique<Checking_Account> ("Fahmi", 5000);
    std::cout << *a1 << std::endl;
    a1->deposit(4000);
    std::cout << *a1 << std::endl;

    std::vector<std::unique_ptr<Account>> accounts;
    accounts.push_back(std::make_unique<Checking_Account> ("VER", 4500));
    accounts.push_back(std::make_unique<Savings_Account> ("LEC", 4000));
    accounts.push_back(std::make_unique<Trust_Account> ("HAM", 3750));

    for (auto &acc: accounts) {
        std::cout << *acc << std::endl;
    }

    std::cout << std::endl;
    return 0;
}