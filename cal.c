#include <stdio.h>

int main() {
	int a, b;
	char op;

	printf("Input1 : ");
	scanf("%d", &a);
	printf("Input2 : ");
	scanf("%d", &b);
	printf("Operator(+, -, *, /) : ");
	scanf("%c", &op);

	switch(op){
		case '+':
			printf("Output = %d", a + b);
			break;
		case '-':
			printf("Output = %d", a - b);
			break;
		case '*':
			printf("Output = %d", a * b);
			break;
		case '/':
			printf("Output = %.2f", (float)a / (float)b);
			break;
		default:
			printf("Operator doesn't match with +, -, *, /");
	}

	return 0;
}
