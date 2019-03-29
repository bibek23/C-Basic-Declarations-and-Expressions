#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int NumberOfDays= 1329;
	int years;
	int weeks;
	int days;

	/*Input*/
	years = NumberOfDays / 365.00;
	weeks = (NumberOfDays / 365.00) * 7;
	days = NumberOfDays - ((years * 365) + (weeks * 7));


	/*output*/
	printf("Years:%d\n", years);
	printf("Weeks:%d\n", weeks);
	printf("Days:%d\n", days);

	
	return 0;
}