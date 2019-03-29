/* Write a C program that reads two integers and checks if they are multiplied or not.*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int number1;
	int number2;

	/*Input*/
	printf("Enter first integer: \n");
	scanf("%d", &number1);

	printf("Enter second integer: \n");
	scanf("%d", &number2);

	if (number1 % number2 == 0) {
		printf("Multiplied");
	}
	else if (number2%number1 == 0){
		printf("Multiplied");
	}
	else {
		printf("Not divisible ");
	}


	/*output*/
	return 0;
}