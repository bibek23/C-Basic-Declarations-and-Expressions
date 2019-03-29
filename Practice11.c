/*Write a C program that accepts three integers and find the maximum of three.*/
#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int Number1;
	int Number2;
	int Number3;

	/*Input*/
	printf("Enter the first Number:\n");
	scanf("%d", &Number1);

	printf("Enter the second Number:\n");
	scanf("%d", &Number2);

	printf("Enter the third Number:\n");
	scanf("%d", &Number3);

	/*Output*/
    if (Number1 > Number2 && Number1 > Number3) {
		printf("The maximum of three is %d\n", Number1);
	}
	else if (Number2 > Number1 && Number2 > Number3) {
		printf("The maximum of three is %d\n", Number2);
	}
	else {
		printf("The maximum of three is %d\n", Number3);
	}

	return 0;
}