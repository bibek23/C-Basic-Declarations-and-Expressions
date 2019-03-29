/*Write a C program that prints all even numbers between 1 and 50 (inclusive). */

#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int i;

	/*Input*/
	for (i = 1; i <= 50; i++) {
		i = i + 1;
		printf("%d",i);
		printf(" ");
	}

	/*output*/
	return 0;
}