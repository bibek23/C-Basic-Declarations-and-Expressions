/*Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values.*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int num1;
	int number1 = 0;
	int num2;
	int number2 = 0; 
	int num3;
	int number3 = 0;
	int num4;
	int number4 = 0;
	int num5;
	int number5 = 0;
	int positive=0;
	

	/*Input*/
	printf("Enter first number: \n");
	scanf("%d", &num1);

	/*Check if first number is positive.*/
	if (num1 > 0) {
		number1 = num1;
		positive++;
	}

	printf("Enter second number: \n");
	scanf("%d", &num2);

	/*Check if second number is positive.*/
	if (num2 > 0) {
		number2 = num2;
		positive++;
	}

	printf("Enter third number: \n");
	scanf("%d", &num3);

	/*Check if third number is positive.*/
	if (num3 > 0) {
		number3 = num3;
		positive++;
	}

	printf("Enter fourth number: \n");
	scanf("%d", &num4);

	/*Check if fourth number is positive.*/
	if (num4 > 0) {
		number4 = num4;
		positive++;
	}

	printf("Enter fifth number: \n");
	scanf("%d", &num5);

	/*Check if fifth number is positive.*/
	if (num5 > 0) {
		number5 = num5;;
		positive++;
	}

	float average = 0;

	average = (float) (number1 + number2 + number3 + number4 + number5) /positive;
	/*output*/
	printf("There are %d positive numbers", positive);
	printf("The averave value is : %.2f\n", average);
	return 0;
}