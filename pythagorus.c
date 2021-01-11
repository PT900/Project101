#include <stdio.h>
#include <math.h>

int main() {
        float a, b, c;

        scanf("%f %f", &a, &b);
        c = sqrt(pow(a, 2) + pow(b, 2));

        printf("%.6f", c);

        return 0;
}