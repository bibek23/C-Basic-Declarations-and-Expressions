/* Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. 
Display a message if it is not possible to find the roots.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
	/*Declaration*/
	int a =0;
	int b=0;
	int c=0;
	float root1 = 0;
	float root2 = 0;


	/*Input*/
	printf("Enter the value of a: \n");
	scanf("%d", &a);

	printf("Enter the value of b: \n");
	scanf("%d", &b);

	printf("Enter the value of c: \n");
	scanf("%d", &c);

	if (b * b - 4 * a * c > 0) {
		root1 = (float) ((-b + sqrt(b * b - 4 * a * c)) / (2 * a));
		root2 = (float)((-b - sqrt(b * b - 4 * a * c)) / (2 * a));
		printf("root1: %3f\n", root1);
		printf("root2: %3f\n", root2);
	}


	/*output*/
	return 0;
}