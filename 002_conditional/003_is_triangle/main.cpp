#include<iostream>

int main() {
    int x,y,z;

    std::cin >> x >> y >> z;

    // pythagorean theorem
    // (a + b) > c and (a + c) > b and (b + c) > a
    bool condition = ((x + y) > z and (x + z) > y and (z + y) > x);

    if(condition) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }

    return 0;
}