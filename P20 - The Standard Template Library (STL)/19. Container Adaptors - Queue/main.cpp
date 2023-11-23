#include <iostream>
#include <queue>

template <typename T>
void display(std::queue<T> q) {
    std::cout << "[ ";
    while (!q.empty()) {
        T element = q.front();
        q.pop();
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::cout << std::endl;

    std::queue<int> q;

    for (int i=1; i<=5; i++) {
        q.push(i);
    }
    display(q);

    std::cout << "Front : " << q.front() << std::endl;
    std::cout << "back  : " << q.back() << std::endl;

    q.push(100);
    display(q);

    q.pop();
    q.pop();
    display(q);

    while (!q.empty()) {
        q.pop();
    }
    display(q);

    std::cout << "Size : " << q.size() << std::endl;

    q.push(10);
    q.push(100);
    q.push(1000);
    display(q);

    std::cout << "Front : " << q.front() << std::endl;
    std::cout << "Back  : " << q.back() << std::endl;

    q.front() = 5;
    q.back() = 5000;
    display(q);

    std::cout << "Front : " << q.front() << std::endl;
    std::cout << "Back  : " << q.back() << std::endl;
    
    std::cout << std::endl;
    return 0;
}