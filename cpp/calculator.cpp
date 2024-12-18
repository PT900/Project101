#include <iostream>
using namespace std;

float checker(int x, int y, char op) {
        float z;
        if (op == '+') {
                z = x + y;
        }
        else if (op == '-') {
                z = x - y;
        }
        else if (op == '*') {
                z = x * y;
        }
        else if (op == '/') {
                z = x / y;
        }

        return z;
}

int main() {
        int a, b;
        char op;

        cout << "Input a, b: ";
        cin >> a >> b;
        cout << "Input operator (+, -, *, /): ";
        cin >> op;

        printf("Output is %.2f", checker(a, b, op));

        return 0;
}