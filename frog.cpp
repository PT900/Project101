#include <iostream>

int main() {
        int a, b;
        scanf("%d %d", &a, &b);

        if (b > a) {
                int c = b / a;
                if (b % a != 0) {
                        c++;
                }
                std::cout << c;
        }
        else {
                std::cout << "2";
        }

        return 0;
}