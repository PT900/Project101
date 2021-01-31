#include <iostream>
#include <algorithm>
using namespace std;

int sko(int x, int y, int z) {
        int box[3] = {0, 0, 0};
        if (y % x == 0) {
                box[0] = y / x;
        }
        if (z % x == 0) {
                box[1] = z / x;
        }
        if (z % y == 0) {
                box[2] = z / y;
        }
        if (y % x != 0 && z % x != 0 && z % y != 0) {
                cout << 1;
                return 0;
        }

        sort(box, box+3);
        cout << box[2];
}

int main() {
        int a, b ,c;
        cin >> a >> b >> c;
        sko(a, b, c);

        return 0;
}