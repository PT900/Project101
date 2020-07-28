#include <stdio.h>

int main() {

	int x;
	printf("Score: ");
	scanf("%d", &x);
	if (x <= 50) {
		printf("F\n");
	}
	else if (x <= 59){ 
		printf("D\n");
	}
	else if (x <= 69){
		printf("C\n");
	}
	else if (x <= 79){
		printf("B\n");
	}
	else if (x <= 100){
		printf("A\n");
	}
	else {
		printf("Error");
	}
	
	return 0;
}
