#include <stdio.h>

int main() {
        float S = 0;
        for (float i = 1; i < 100; i++) {
                S += (i / (i + 1));
        }
        
        printf("%f", S);
        return 0;
}