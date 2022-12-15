#include<iostream>

int main() {
    int a = 10;
    int b = 3;

    std::cout << "Arithmetic operations \n";
    std::cout << (a + b) << "\n";
    std::cout << (a - b) << "\n";
    std::cout << (a * b) << "\n";
    std::cout << (a / b) << "\n";
    std::cout << (a % b) << "\n";

    std::cout << "Assignment operations \n";
    std::cout << (a += 3) << "\n";
    std::cout << (a -= 4) << "\n";
    std::cout << (a *= 6) << "\n";
    std::cout << (a /= 7) << "\n";
    std::cout << (a %= b) << "\n";

    std::cout << "Relational operations \n";
    std::cout << (a == b) << "\n";
    std::cout << (a > b) << "\n";
    std::cout << (a < b) << "\n";
    std::cout << (a >= b) << "\n";
    std::cout << (a <= b) << "\n";
    std::cout << (a != b) << "\n";

    std::cout << "Logical operations \n";
    std::cout << ((3 > 5) and (4 > 5)) << "\n";
    std::cout << ((4 == 4) && (4 != 5)) << "\n";
    std::cout << ((5 < 6) or (7 > 6)) << "\n";
    std::cout << ((2 == 3 ) || (3 < 4)) << "\n";
    std::cout << (!(2 < 1)) << "\n";
    std::cout << (not(2 == 2)) << "\n";
    
    int x = 2;
    int y = 3;

    std::cout << "Short circuit operations \n";
    std::cout << ((a -= 2) and (b += 3)) << "\n";
    std::cout << a << "," << b;

    std::cout << ((b += 10) or (a += 2)) << "\n";

    std::cout << "Bitwise operations \n";

    return 0;
}