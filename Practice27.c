/*Write a C program to find and print the square of each one of the even values from 1 to a specified value. */
#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int i;
	int number;
	/*Input*/ 
	printf("Enter a number greater than one:\n");
	scanf("%d", &number);
	
	/*output*/
	for (i = 1; i < number; i++) {
		i = i + 1;
		printf("%d^2 : %d",i, i * i);
		printf("\n");
		
	}
	return 0;
}