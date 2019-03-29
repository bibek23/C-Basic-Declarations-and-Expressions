/*Write a C program that read 5 numbers and sum of all odd values between them.*/
#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int number1=0;
	int num1=0;
	int number2=0;
	int num2=0;
	int number3=0;
	int num3=0;
	int number4=0;
	int num4=0;
	int number5=0;
	int num5=0;
	int sum = 0;

	/*Input*/
	printf("Enter first number: \n");
	scanf("%d", &number1);

	if (number1 % 2 == 1) {
		num1 = number1;
	}

	printf("Enter second number: \n");
	scanf("%d", &number2);

	if (number2 % 2 == 1) {
		num2 = number2;
	}

	printf("Enter third number: \n");
	scanf("%d", &number3);

	if (number3 % 2 == 1) {
		num3 = number3;
	}

	printf("Enter fourth number: \n");
	scanf("%d", &number4);

	if (number4 % 2 == 1) {
		num4 = number4;
	}

	printf("Enter fifth number: \n");
	scanf("%d", &number5);

	if (number5 % 2 == 1) {
		num5 = number5;
	}
	/*output*/
	sum = num1 + num2 + num3 + num4 + num5;
	printf("The sum of odd values is: %d\n", sum);

	return 0;
}