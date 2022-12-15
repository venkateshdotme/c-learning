#include<iostream>

int main() {
    int num;

    std::cin >> num;

    for(int row = 1; row <= num; row++) {
        for(int col = 1; col <= row; col++){
            std::cout << col << " ";
        }

        std::cout << "\n";
    }

    return 0;
}