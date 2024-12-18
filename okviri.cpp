#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;
	int temp = 1;

	for (int i = 0; i < str.length(); i++) {
		if ((i+1) % 3 == 0) {
			std::cout << "..*.";
		}
		if ((i+1) % 3 != 0) {
			std::cout << "..#.";
		}
	}
	std::cout << "." << "\n";
	temp++;

	for (int i = 0; i < str.length(); i++) {
		if ((i+1) % 3 == 0) {
			std::cout << ".*.*";
		}
		if ((i+1) % 3 != 0) {
			std::cout << ".#.#";
		}
	}
	std::cout << "." << "\n";
	temp++;

	for (int i = 0; i < str.length(); i++) {
		if (i != 0 && ((i+1) % 3 == 0 || i % 3 == 0)) {
			std::cout << "*." << str[i] << ".";
		}
		else if((i+1) % 3 != 0) {
			std::cout << "#." << str[i] << ".";
		}
	}
	if (str.length() % 3 == 0) {
		std::cout << "*" << "\n";
	}
	else if (str.length() % 3 != 0) {
		std::cout << "#" << "\n";
	}
	temp++;

	for (int i = 0; i < str.length(); i++) {
		if ((i+1) % 3 == 0) {
			std::cout << ".*.*";
		}
		if ((i+1) % 3 != 0) {
			std::cout << ".#.#";
		}
	}
	std::cout << "." << "\n";
	temp++;

	for (int i = 0; i < str.length(); i++) {
		if ((i+1) % 3 == 0) {
			std::cout << "..*.";
		}
		if ((i+1) % 3 != 0) {
			std::cout << "..#.";
		}
	}
	std::cout << "." << "\n";
	temp++;

	return 0;
}
