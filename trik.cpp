#include <iostream>
#include <string>
using namespace::std;

int main() {
        string sbox;
        int ibox[3] = {0, 1, 2};
        int temp;
        cin >> sbox;
        
        for (int i = 0; i < sbox.length(); i++) {
                if (sbox[i] == 'A') {
                        temp = ibox[0];
                        ibox[0] = ibox[1];
                        ibox[1] = temp;
                }
                else if (sbox[i] == 'B') {
                        temp = ibox[1];
                        ibox[1] = ibox[2];
                        ibox[2] = temp;
                }
                else if (sbox[i] == 'C') {
                        temp = ibox[0];
                        ibox[0] = ibox[2];
                        ibox[2] = temp;
                }
        }

        if (ibox[0] == 0) {
                cout << "1";
        }
        else if (ibox[1] == 0) {
                cout << "2";
        }
        else if (ibox[2] == 0) {
                cout << "3";
        }
        
        return 0;
}