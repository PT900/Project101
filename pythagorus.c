#include <stdio.h>
#include <math.h>

double a, b;
int main() {
        scanf("%lf %lf", &a, &b);
        printf("%lf", sqrt((a * a) + (b * b)));

        return 0;
}