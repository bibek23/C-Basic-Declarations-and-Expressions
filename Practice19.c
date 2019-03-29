/* Write a C program that reads an integer and check the specified range where it belongs. 
Print an error message if the number is negative and greater than 80. */

#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int number;

	/*Input*/
	printf("Enter the number: \n");
	scanf("%d", &number);
	/*output*/
	if (number > 0 && number <= 20) {
		printf("Range [0,20] \n");
	}
	else if (number > 20 && number <= 40) {
		printf("Range [20,40] \n");
	}
	else if (number > 40 && number <= 60) {
		printf("Range [40,60] \n");
	}
	else if (number > 60 && number <= 80) {
		printf("Range [60,80] \n");
	}
	else {
		printf("Error \n");
	}

	
	return 0;
}