/*Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers. */
#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int num1=0; 
	int num2=0;
	int num3=0;
	int num4=0;
	int num5=0;
	int positive=0;
	int negative=0;

	/*Input*/
	printf("Enter first number:\n");
	scanf("%d", &num1);

	if (num1 < 0) {
		negative++;
	}
	else if(num1 > 0) {
		positive++;
	}

	printf("Enter second number:\n");
	scanf("%d", &num2);

	if (num2 < 0) {
		negative++;
	}
	else if (num2 > 0) {
		positive++;
	}

	printf("Enter third number:\n");
	scanf("%d", &num3);

	if (num3 < 0) {
		negative++;
	}
	else if (num3 > 0) {
		positive++;
	}
	printf("Enter fourth number:\n");
	scanf("%d", &num4);

	if (num4 < 0) {
		negative++;
	}
	else if (num4 > 0) {
		positive++;
	}
	printf("Enter fifth number:\n");
	scanf("%d", &num5);

	if (num5 < 0) {
		negative++;
	}
	else if (num5 > 0) {
		positive++;
	}
	/*output*/

	printf("The positive number is : %d\n", positive);
	printf("The negative number is: %d\n", negative);
	return 0;
}