#include<iostream>

int main() {

    int a, b, c;

    std::cin >> a >> b >> c;

    if(a < b and a < c) {
        std::cout << a;
    } else if(b < a and b < c) {
        std::cout << b;
    } else {
        std::cout << c;
    }

    return 0;
}