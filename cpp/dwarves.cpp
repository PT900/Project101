#include <iostream>
using namespace std;

int main() {
        int first[9], last[7];
        int temp = 0;
        for (int i = 0; i < 9; i++) {
                cin >> first[i];
                temp += first[i];
        }

        for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                        if (temp - first[i] - first[j] == 100 && first[i] != first[j]) {
                                first[i] = 0;
                                first[j] = 0;
                                break;
                        }
                }
        }

        for (int i = 0; i < 9; i++) {
                if (first[i] != 0) {
                        last[i] = first[i];
                        cout << last[i] << "\n";
                }
        }

        return 0;
}
