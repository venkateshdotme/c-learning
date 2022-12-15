#include<iostream>


int main() {
    
    int num;

    std::cin >> num;

    if((num & 1) == 0) {
        if(num >= 2 and num <= 5) {
            std::cout << "Not Weird";
        } else if(num >= 6 and num <= 20) {
            std::cout << "Weird";
        } else if(num > 20) {
            std::cout << "Not Weird";
        }
    } else {
        std::cout << "Weird";
    }

    return 0;
}