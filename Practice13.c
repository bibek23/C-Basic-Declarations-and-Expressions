/*Write a C program to calculate the distance between the two points.*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
	/*Declaration*/
	int x1 = 25;
	int x2 = 35;
	int y1 = 20;
	int y2 = 30;
	float distance = 0;

	/*Input*/

	distance = sqrt(((x2 - x1) * (x2-x1)) + (y2-y1)* (y2 - y1) );


	/*output*/
	printf("The distance is : %2f\n", distance);
	return 0;
}