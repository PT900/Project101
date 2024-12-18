#include <iostream>
#include <unordered_map>

int main() {
  std::unordered_map<std::string, int> test;

  test["First"] = 123;
  test["Second"] = 456;
  test["Third"] = 789;

  for (auto x : test) {
    std::cout << x.first << " " << x.second << std::endl;
  }

  return 0;
}
