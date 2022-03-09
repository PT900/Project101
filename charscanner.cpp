#include <iostream>
#include <string>

int main() {
	std::string tester;
	std::cin >> tester;
	int temp = 0;

	for (int i = 0; i < tester.length(); i++) {
		if (tester[i] >= 65 && tester[i] <= 90) {
			temp++;
		}
	}

	if (temp == 0) {
		std::cout << "All Small Letter";
	}
	else if (temp < tester.length()) {
		std::cout << "Mix";
	}
	else if (temp == tester.length()) {
		std::cout << "All Capital Letter";
	}

	return 0;
}
