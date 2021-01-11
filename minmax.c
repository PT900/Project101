#include <stdio.h>

int main() {
        int i, a;
        scanf("%d", &a);
        int b[a];

        int MAX = -2000000000;
        int MIN = 2000000000;

        for(i = 0; i < a; i++) {
                scanf("%d", &b[i]);
                if (b[i] > MAX) {
                        MAX = b[i];
                }

                if (b[i] < MIN) {
                        MIN = b[i];
                }
        }

        printf("%d\n%d", MIN, MAX);
        return 0;
}
