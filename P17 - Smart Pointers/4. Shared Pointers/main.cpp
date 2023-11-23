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

void func(std::shared_ptr<Test> p) {
    std::cout << "Use count: " << p.use_count() << std::endl;
}

int main() {
    std::cout << std::endl;

    std::cout << "========================================================================" << std::endl;
    // use_count - the number of shared_ptr objects
    // managing the heap object

    std::shared_ptr<int> p1 {new int {100}};
    std::cout << "Use count: " << p1.use_count() << std::endl;      // 1

    std::shared_ptr<int> p2 {p1};               // shared ownership
    std::cout << "Use count: " << p2.use_count() << std::endl;      // 2

    p1.reset();                                 // decrement the use_count; p1 is nulled out
    std::cout << "Use count: " << p1.use_count() << std::endl;      // 0
    std::cout << "Use count: " << p2.use_count() << std::endl;      // 1

    std::cout << "========================================================================" << std::endl;

    std::shared_ptr<Test> ptr = std::make_shared<Test> (100);
    func(ptr);
    std::cout << "Use count: " << ptr.use_count() << std::endl;
    {
        std::shared_ptr<Test> ptr1 = ptr;
        std::cout << "Use count: " << ptr.use_count() << std::endl;
        {
            std::shared_ptr<Test> ptr2 = ptr;
            std::cout << "Use count: " << ptr.use_count() << std::endl;
            ptr.reset();
        }
        std::cout << "Use count: " << ptr.use_count() << std::endl;
    }
    std::cout << "Use count: " << ptr.use_count() << std::endl;


    std::cout << "========================================================================" << std::endl;
    std::shared_ptr<Account> acc1 = std::make_shared<Trust_Account> ("VER", 9000 );
    std::shared_ptr<Account> acc2 = std::make_shared<Checking_Account> ("LEC", 7000);
    std::shared_ptr<Account> acc3 = std::make_shared<Savings_Account> ("HAM", 8000);

    std::vector<std::shared_ptr<Account>> accounts;
    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);

    for (auto &acc: accounts) {
        std::cout << *acc << std::endl;
        std::cout << "Use count: " << acc.use_count() << std::endl;
    }
    std::cout << "========================================================================" << std::endl;

    std::cout << std::endl;
    return 0;
}