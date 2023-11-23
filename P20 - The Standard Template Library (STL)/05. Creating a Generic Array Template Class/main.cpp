#include <iostream>

template <int N, typename T>
class Array {
    int size {N};               // how do we get the N???
    T values[N];              // the N needs to be known at compile-time!

    friend std::ostream &operator<<(std::ostream &os, const Array<N, T> &arr) {
        os << "[ ";
        for (const auto &val: arr.values) {
            os << val << " ";
        }
        os << " ]" << std::endl;
        return os;
    }
public:
    Array() = default;
    Array(T init_val) {
        for (auto &item: values) {
            item = init_val;
        }
    }

    void fill(T val) {
        for (auto &item: values) {
            item = val;
        }
    }

    int get_size() const {
        return size;
    }

    // overloaded subscript operator for easy use
    T &operator[](int index) {
        return values[index];
    }
};

int main() {
    std::cout << std::endl;

    Array<5, int> nums;
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(0);
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(10);
    std::cout << nums << std::endl;

    nums[0] = 1000;
    nums[3] = 2000;
    std::cout << nums << std::endl;

    Array<100, int> nums2 {1};
    std::cout << "The size of nums 2 is: " << nums2.get_size() << std::endl;
    std::cout << nums2 << std::endl;

    Array<10, std::string> strings(std::string{"Haq"});
    std::cout << "The size of strings is: " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;

    strings[0] = std::string{"Fahmi"};
    std::cout << strings << std::endl;

    strings.fill(std::string {"X"});
    std::cout << strings << std::endl;

    std::cout << std::endl;
    return 0;
}