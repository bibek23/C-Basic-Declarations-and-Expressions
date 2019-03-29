/*Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int amount;
	int total;
	int hundred;
	int fifty;
	int twenty;
	int tens;
	int five;
	int ones;
	
	/*Input*/
	printf("Enter the amount you want to break: \n");
	scanf("%d", &amount);

	total = (int) amount / 100;

	printf("%d Notes of 100: \n", total);

	amount = amount - (total * 100);

	total = (int)amount / 50;

	printf("%d Notes of 50: \n", total);

	amount = amount - (total * 50);

	total = (int)amount / 20;


	printf("%d Notes of 20: \n", total);

	amount = amount - (total * 20);

	total = (int)amount / 10;


	printf("%d Notes of 10. \n", total);

	amount = amount - (total * 10);

	total = (int)amount / 5;


	printf("%d Notes of 5: \n", total);

	amount = amount - (total * 5);

	total = (int)amount / 2;


	printf("%d Notes of 2: \n", total);

	amount = amount - (total * 2);

	total = (int)amount / 1;


	printf("%d Notes of 1. \n", total);

	/*output*/
	
	return 0;
}