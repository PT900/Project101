#include <iostream>
#include <algorithm>
using namespace std;

int main() {
        int val[10];
        int mod[10];
        int x = 0;

        // Input
        for (int i = 0; i < 10; i++) {
                cin >> val[i];
                mod[i] = val[i] % 42;
        }

        sort(mod, mod+10);
        for (int i = 0; i < 10; i++) {
                if (mod[i] != mod[i+1]) {
                        x++;
                }
        }
        
        cout << x;
        return 0;
}