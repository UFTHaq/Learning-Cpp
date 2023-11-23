#include <iostream>
#include <memory>

class Test {
private:
    int data;
public:
    Test() : data{0} {
        std::cout << "\tTest Constructor (" << data << ")" << std::endl;
    }
    Test(int data) : data{data} {
        std::cout << "\tTest Constructor (" << data << ")" << std::endl; 
    }
    int get_data() {
        return data;
    }
    ~Test() {
        std::cout << "\tTest Destructor (" << data << ")" << std::endl;
    }
};

void my_deleter(Test *ptr) {
    std::cout << "\tUsing My Custom Function Deleter" << std::endl;
    delete ptr;
}

int main() {
    std::cout << std::endl;

    {
        // Using a function
        std::shared_ptr<Test> ptr1 {new Test{100}, my_deleter};
    }

    std::cout << "=====================================================" << std::endl;

    {
        // Using a lambda expression
        std::shared_ptr<Test> ptr2 {new Test{500}, [] (Test *ptr_lambda) {
            std::cout << "\tUsing My Custom Lambda Expression Deleter" << std::endl;
            delete ptr_lambda;
        }};
    }

    std::cout << std::endl;
    return 0;
}