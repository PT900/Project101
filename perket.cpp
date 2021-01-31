#include <iostream>
using namespace std;

int abs(int x, int y) {
        if (x > y) {
                return x - y;
        }
        else if (x < y) {
                return y - x;
        }
}

int main() {
        int x;
        int a = 1;
        int b = 0;
        cin >> x;
        int matA[x], matB[x];

        for (int i = 0; i < x; i++) {
                cin >> matA[i] >> matB[i];
                a *= matA[i];
                b += matB[i];
        }

        cout << abs(a, b);

        return 0;
}