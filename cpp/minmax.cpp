#include <iostream>
using namespace std;

int minmax();

int main() {
        int a;
        cin >> a;
        int mat[a];
        int MIN = 2000000000;
        int MAX = -2000000000;
        
        for (int i = 0; i < a; i++){
                cin >> mat[i];
                if (mat[i] > MAX) {
                        MAX = mat[i];
                }
                if (mat[i] < MIN){
                        MIN = mat[i];
                }
        }

        printf("%d\n%d", MIN, MAX);
        return 0;
}