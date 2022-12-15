#include<iostream>

int main() {
    int num;

    std::cin >> num;

    if((num & 1) == 0) {
        std::cout << "Even";
    } else {
        std::cout << "Odd";
    }

    return 0;
}