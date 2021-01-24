#include <iostream>
// using namespace std;

int main() {
        int a;
        char b = '*';
        std::cin >> a;

        for (int i = 0; i < a; i++){
                for (int j = 0; j <= i; j++){
                        printf("*");
                }
                printf("\n");
        }

        return 0;
}