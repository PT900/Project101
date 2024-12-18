#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;
	int matA[a][b], matB[a][b];

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			std::cin >> matA[i][j];
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			std::cin >> matB[i][j];
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			std::cout << matA[i][j]+matB[i][j] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}
