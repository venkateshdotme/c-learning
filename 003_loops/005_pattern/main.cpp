#include<iostream>

int main() {
    int num;

    std::cin >> num;

    for(int row = 1; row <= num; row++) {
        for(int col = 1; col <= num-row+1; col++) {   
            std::cout << " * ";
        }

        std::cout << "\n";
    }
}