#include <iostream>
using namespace std;

int main() {
  int nums[] = {2, 7, 11, 15}, sum = 0, target = 9;
  int i = 0, j = 0;
  int arrLen = sizeof(nums) / sizeof(int);
  for (int i = 0; i < arrLen; i++) {
    for (int j = 0; j < arrLen; j++) {
      printf("%d %d\n", i, j);
      sum = nums[i] + nums[j];
      if (sum == target) {
        printf("[%d, %d]", i, j);
        break;
      }
    }
  }
}
