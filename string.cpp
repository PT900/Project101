#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;

  std::cout << "(";
  for (int i = 0; i < 3; i++) {
    std::cout << s.at(i);
  }
  std::cout << ") ";

  for (int i = 3; i < 7; i++) {
    std::cout << s.at(i);
  }
  std::cout << " ";

  for (int i = 7; i < 10; i++) {
    std::cout << s.at(i);
  }
}
