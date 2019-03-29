/*Write a C program that accepts two integers from the user and calculate the sum of the two integers.*/


#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int Number1;
	int Number2;
	int sum = 0;

	/*Input*/
	printf("Enter first Number:\n");
	scanf("%d", &Number1);

	printf("Enter second Number: \n");
	scanf("%d", &Number2);

	sum = Number1 + Number2;

	/*output*/
	printf("The sum is %d\n", sum);

	return 0;
}