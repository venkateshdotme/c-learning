#include<iostream>

int main() {
    int num;
    int spaces;

    std::cin >> num;
    
    if(num%2 == 0) {
        spaces = 2 * (num-1);
    } else {
        spaces = 2 * (num - 1) - 1;
    }

    for(int row = 1; row <= num; row++) {
        for(int i = 1; i <= spaces; i++) {
            std::cout << " ";
        }

        spaces -= 2;

        for(int n = 1; n <= 2 * row - 1; n++) {
            if(n%2 == 0) {
                std::cout << "o" << " ";
            } else {
                std::cout << "x" << " ";
            }
        }

        std::cout << "\n";
    }

    return 0;
}