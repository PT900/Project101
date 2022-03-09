#include <iostream>

int main() {
        int a, b, c;
        std::cin >> a >> b >> c;
        if (c - b > b - a) std::cout << c - b - 1;
        else std::cout << b - a - 1;
        return 0;
}