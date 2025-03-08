#include <cmath>
#include <iostream>
#include <string>
#include <vector>

std::vector<int> primeCalculate(int a, int b);
bool isPrimed(int a);
void printResult(const std::vector<int> &a);

int main() {
  int start, stop;
  std::vector<int> result;
  std::cout << "Program for calculate prime numbers in specific range"
            << std::endl;
  std::cout << "Enter start, stop range: ";
  std::cin >> start >> stop;

  printResult(primeCalculate(start, stop));
}

std::vector<int> primeCalculate(int start, int stop) {
  std::vector<int> primedList;
  primedList.reserve((stop - start) / 2);

  for (int i = start; i <= stop; i++) {
    if (isPrimed(i) == true) {
      primedList.push_back(i);
    }
  }

  return primedList;
}

bool isPrimed(int primed) {
  if (primed == 0 || primed == 1 || primed % 2 == 0) {
    return false;
  }

  for (int i = 3; i <= std::sqrt(primed); i += 2) {
    if (primed % i == 0) {
      return false;
    }
  }

  return true;
}

/*
   void printResult(std::vector<int> result) {
   if (result.size() == 0) {
   std::cout << "No prime number in range." << std::endl;
   }

   std::cout << "List of prime number: ";
   for (int i = 0; i < result.size(); i++) {
   if (i == result.size() - 1) {
   std::cout << result.at(i);
   } else {

   std::cout << result.at(i) << ", ";
   }
   }
   std::cout << std::endl;
   }
*/

void printResult(const std::vector<int> &result) {
  if (result.empty()) {
    std::cout << std::endl << "No prime numbers in range." << std::endl;
    return;
  }

  int startRange = 1;
  int endRange = 50;
  size_t index = 0;

  std::cout << std::endl << "Prime number from " << std::endl;
  while (index < result.size()) {
    std::cout << (std::to_string(startRange) + "-" + std::to_string(endRange) +
                  ": ");

    bool firstPrinted = false;
    while (index < result.size() && result[index] <= endRange) {
      if (firstPrinted) {
        std::cout << ", ";
      }
      std::cout << result[index];
      firstPrinted = true;
      index++;
    }

    if (!firstPrinted) {
      std::cout << "None";
    }

    std::cout << std::endl;
    startRange += 50;
    endRange += 50;
  }
}
