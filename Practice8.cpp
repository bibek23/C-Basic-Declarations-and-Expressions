/*Write a C program that accepts two integers from the user and calculate the product of the two integers.*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int Number1;
	int Number2;
	int product = 0;

	/*Input*/
	printf("Enter the first number: \n");
	scanf("%d", &Number1);

	printf("Enter the second number: \n");
	scanf("%d", &Number2);

	product = Number1 * Number2;

	/*output*/
	printf("The product of the Number is: %d\n", product);
	return 0;
}