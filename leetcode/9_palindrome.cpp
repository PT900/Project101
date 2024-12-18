#include <vector>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        return true;
    }

    std::vector<int> separateDigits(int num) {
        std::vector<int> digits;

        // Handle negative numbers (optional)
        if (num < 0) {
            digits.push_back(-1);  // Push -1 to indicate a negative number (if needed)
            num = abs(num);       // Convert to positive for digit extraction
        }

        // Extract digits using modulo and division
        while (num > 0) {
            int digit = num % 10;
            digits.push_back(digit);
            num /= 10;
        }

        return digits;
    }
};
