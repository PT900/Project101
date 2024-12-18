#include <iostream>
using namespace std;

int max(int x, int y, int z) {
        if (x > y && x > z) {
                return x;
        }
        else if (y > x && y > z) {
                return y;
        }
        else if (z > x && z > y) {
                return z;
        }
}

int mid(int x, int y, int z) {
        if (x > y && x < z || x < y && x > z) {
                return x;
        }
        else if (y > x && y < z || y < x && y > z) {
                return y;
        }
        else if (z > x && z < y || z < x && z > y) {
                return z;
        }
}

int min(int x, int y, int z) {
        if (x < y && x < z) {
                return x;
        }
        else if (y < x && y < z) {
                return y;
        }
        else if (z < x && z < y) {
                return z;
        }
}

int main() {
        int a, b ,c;
        char box[4];
        cin >> a >> b >> c;
        cin >> box[0] >> box[1] >> box[2];

        if (box[0] == 'A' && box[1] == 'B' && box[2] == 'C') {
                printf("%d %d %d", min(a, b, c), mid(a, b, c), max(a, b, c));
        }
        else if (box[0] == 'A' && box[1] == 'C' && box[2] == 'B') {
                printf("%d %d %d", min(a, b, c), max(a, b, c), mid(a, b, c));
        }
        else if (box[0] == 'B' && box[1] == 'A' && box[2] == 'C') {
                printf("%d %d %d", mid(a, b, c), min(a, b, c), max(a, b, c));
        }
        else if (box[0] == 'B' && box[1] == 'C' && box[2] == 'A') {
                printf("%d %d %d", mid(a, b, c), max(a, b, c), min(a, b, c));
        }
        else if (box[0] == 'C' && box[1] == 'A' && box[2] == 'B') {
                printf("%d %d %d", max(a, b, c), min(a, b, c), mid(a, b, c));
        }
        else if (box[0] == 'C' && box[1] == 'B' && box[2] == 'A') {
                printf("%d %d %d", max(a, b, c), mid(a, b, c), min(a, b, c));
        }

        return 0;
}