/*Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. */

#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int hours, minutes, seconds;
	int number;
	/*Input*/
	printf("Enter a number to convert: \n");
	scanf("%d", &number);

	hours = number / 3600;
    
	minutes = (number - hours*3600)/60;

	seconds = number - (hours * 3600) - (minutes * 60);
	
	/*output*/
	printf("Hours: %d\n", hours);
	printf("Minutes: %d\n", minutes);
	printf("Seconds: %d\n", seconds);

	return 0;
}