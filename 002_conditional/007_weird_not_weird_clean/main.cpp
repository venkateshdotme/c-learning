#include<iostream>

int main() {
    int num;

    std::cin >> num;

    if((num & 1) != 0) {
        std::cout << "Weird";
        return 0;
    }

    if((num > 20) or (num >= 2 and num <= 5)) {
        std::cout << "Not Weird";
        return 0;
    }

    std::cout << "Weird";
    return 0;
}