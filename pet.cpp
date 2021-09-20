#include <iostream>
using namespace std;

int max(int a, int b, int c, int d, int e) {
        int temp = 0;
        if (a > temp) temp = a;
        if (b > temp) temp = b;
        if (c > temp) temp = c;
        if (d > temp) temp = d;
        if (e > temp) temp = e;

        return temp;
}

int main() {
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        int x[5][4];
        
        for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 4; j++) {
                        cin >> x[i][j];
                }
        }
        
        for (int i = 0; i < 4; i++) {
                a += x[0][i];
                b += x[1][i];
                c += x[2][i];
                d += x[3][i];
                e += x[4][i];
        }

        if (max(a, b, c, d, e) == a) cout << 1 << " " << max(a, b, c, d, e);
        else if (max(a, b, c, d, e) == b) cout << 2 << " " << max(a, b, c, d, e);
        else if (max(a, b, c, d, e) == c) cout << 3 << " " << max(a, b, c, d, e);
        else if (max(a, b, c, d, e) == d) cout << 4 << " " << max(a, b, c, d, e);
        else if (max(a, b, c, d, e) == e) cout << 5 << " " << max(a, b, c, d, e);

        return 0;
}