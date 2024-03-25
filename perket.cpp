#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int x, a = 1, b = 0;
  cin >> x;
  int matA[x], matB[x];

  for (int i = 0; i < x; ++i) {
    cin >> matA[i] >> matB[i];
    if (matA[i] <= 1 || matB[i] <= 1)
      continue;
    a *= matA[i];
    b += matB[i];
  }

  cout << abs(b - a) << endl;

  return 0;
}
