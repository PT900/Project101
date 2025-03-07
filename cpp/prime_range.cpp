#include <iostream>
#include <vector>

std::vector<int> primeCalculate(int a, int b);
bool isPrimed(int a);
void printResult(std::vector<int> a);

int main() {
  int start, stop;
  std::vector<int> result;
  std::cout << "Program for calculate prime number in specific range"
            << std::endl;
  std::cout << "Enter start, stop range: ";
  std::cin >> start >> stop;

  printResult(primeCalculate(start, stop));
}

std::vector<int> primeCalculate(int start, int stop) {
  std::vector<int> primedList;
  for (int i = start; i <= stop; i++) {
    if (isPrimed(i) == true) {
      primedList.push_back(i);
    }
  }

  return primedList;
}

bool isPrimed(int primed) {
  bool flag = true;

  if (primed == 0 || primed == 1) {
    return false;
  }

  for (int i = 2; i <= primed / 2; i++) {
    if (primed % i == 0) {
      flag = false;
      break;
    }
  }

  return flag;
}

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
