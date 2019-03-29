/*Write a C program to convert a given integer (in days) to years, months and days, 
assumes that all months have 30 days and all years have 365 days.*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int numbers;
	int years;
	int months;
	int days;

	/*Input*/
	printf("Enter the number: \n");
	scanf("%d", &numbers);

	/*Find years*/
	years = numbers / 365;
	months = (numbers - years * 365) / 30;
	days = (numbers - years * 365 - months * 30);

	/*output*/
	printf("Years: %d\n", years);
	printf("Months: %d\n", months);
	printf("Days:%d\n", days);
	return 0;
}