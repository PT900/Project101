#include <stdio.h>

int main() {
	/*
	int a = 5;
	int *ptrA = &a;
	
	*ptrA = 10;
	printf("%d\n", a);
	*/

	/*
	int a = 1, b = 2, c = 3;
	int *ptr[3];
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;

	int i = 0;
	for(i=0;i<3;i++){
		printf("ptr[%d] = %d\n", i, *(ptr[i]));
	}
	*/
	
	int arr[] = {1, 2, 3, 4, 5};
	int *ptr = &arr[0];

	int i = 0;
	for(i=0;i<5;i++){
		printf("arr[%d] = %d\n", i, *(ptr+i));
	}

	return 0;
}