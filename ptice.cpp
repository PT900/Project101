#include <iostream>
#include <string>
using namespace std;

// string operator * (string a, unsigned int b) {
//     string output = "";
//     while (b--) {
//         output += a;
//     }
//     return output;
// }

void printRes(int a, int b, int c) {
    int maxNum = max(a, max(b, c));

    cout << maxNum << endl;
    if (maxNum == a) cout << "Adrian\n";
    if (maxNum == b) cout << "Bruno\n";
    if (maxNum == c) cout << "Goran\n";
}

int main () {
    int n, resA = 0, resB = 0, resC = 0;
    string prob;
    cin >> n >> prob;
    string A = "ABC", B = "BABC", C = "CCAABB";
    // A = A * n;
    // B = B * n;
    // C = C * n;
    // A.resize(n);
    // B.resize(n);
    // C.resize(n);

    int i = 0;
    while (i < prob.length()) {
        if (prob[i] == A[i%3]) {
            resA++;
        }
        if (prob[i] == B[i%4]) {
            resB++;
        }
        if (prob[i] == C[i%6]) {
            resC++;
        }
        i++;
    }

    printRes(resA, resB, resC);
}
