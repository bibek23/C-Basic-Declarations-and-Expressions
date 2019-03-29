/*Write a C program to calculate a bike’s average consumption from the given total 
distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point)*/
#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int distance;
	float fuel;
	float average = 0;

	/*Input*/
	printf("Enter the total distance in Km. \n");
	scanf("%d", &distance);

	printf("Total spent fuel in liters: \n");
	scanf("%2f", &fuel);

	average = distance / fuel;

	/*output*/
	printf("The bike average consumption from the given total distance traveled and spent on fuel is: %2f", average);

	return 0;
}