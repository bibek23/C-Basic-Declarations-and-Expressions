/*Write a C program to check a given integer is positive even, negative even, 
positive odd or negative odd. Print even if the number is 0.*/
#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int number;

	/*Input*/
	printf("Enter the integer: \n");
	scanf("%d", &number);

	if (number > 0 && number%2==0) {
		printf("Positive Even");
	}
	else if(number % 2 == 1) {
		printf("Positive Odd");
	}
	else if ((number % 2) == -1) {
		printf("Negative Odd");
	}
	else if(number < 0 && number%2==0){
		printf("Negative even");
	}

	/*output*/
	return 0;
}