#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int sum (int a, int b);

int main() {
        // Data types and variable
        int x;
        float y = 2.0;
        string z = "asdasd";
        int w[] = {1,2,3,4,5};

        // Input and output
        // scanf("%d", &x);
        // printf("x = %d", x);

        // If-else
        if (x == 1) {
                printf("x = 1");
        } else if (x == 2) {
                printf("x = 2");
        } else {
                // printf("x != 1 and x != 2");
        }
        int a, b;
        char op;
        printf("Enter a, op, b: ");
        scanf("%d %c %d", &a, &op, &b);
        switch (op) {
        case '+':
                printf("%d", a+b);
                break;
        case '-':
                printf("%d", a-b);
                break;
        case '*':
                printf("%d", a*b);
                break;
        case '/':
                printf("%d", a/b);
                break;
        default:
                break;
        }

        // For loop and while loop
        // for (int i = 0; i <= 20; i+=2) {
        //         printf("%d\n", i);
        // }

        int i = 0;
        // while (i < 10) {
        //         printf("%d\n", i);
        //         // i++;
        // }

        // Function
        // int k = sum(1,2);
        // printf("%d", k);
        // for (int i = 1; i <= 10; i++) {
        //         for (int j = 1; j <= 10; j++) {
        //                 int m = sum(i,j);
        //                 printf("%d(i) + %d(j) = %d(m)\n", i, j, m);
        //         }
        // }

        // double l = 2;
        // printf("%lf", pow(l, 10));

        return 0;
}

int sum(int a, int b) {
        int c;
        c = a + b;
        return c;
}