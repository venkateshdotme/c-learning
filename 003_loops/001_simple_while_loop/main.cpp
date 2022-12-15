#include<iostream>

int main() {
    int value;
    int num;

    std::cin >> num;

    while(value <= num) {
        std::cout << value << "\n";

        value += 1;
    }

    std::cout << "End \n";

    return 0;
}