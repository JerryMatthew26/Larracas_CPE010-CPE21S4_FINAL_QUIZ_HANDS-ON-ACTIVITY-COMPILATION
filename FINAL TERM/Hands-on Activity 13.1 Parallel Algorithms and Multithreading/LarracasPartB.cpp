// Supplementary Activity Part B
#include <iostream>
#include <thread>

int globalInt = 0;

void add(int value) {
    globalInt += value;
}

int main() {
    std::thread t1(add, 10);
    std::thread t2(add, 20);
    std::thread t3(add, 30);

    std::cout << "Display: " << globalInt << std::endl;
    t1.join();

    std::cout << "Display: " << globalInt << std::endl;
    t2.join();

    std::cout << "Display: " << globalInt << std::endl;
    t3.join();

    return 0;
}
