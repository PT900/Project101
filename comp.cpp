#include <iostream>

// Prototype function
int max(int x, int y);

int main() {
        int a, b;
        std::cin >> a >> b;
        std::cout << max(a, b);

        return 0;
}

// Find max number for 2 value function
int max(int x, int y) {
        if (x > y) {
                return x;
        }
        else if (x < y) {
                return y;
        }
}