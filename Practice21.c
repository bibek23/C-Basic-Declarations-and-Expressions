/*Write a C program that reads three floating values and check if it is possible to make a triangle with them. 
Also calculate the perimeter of the triangle if the said values are valid. */

#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int perimeter = 0;

	/*Input*/
	printf("Enter the first number: \n");
	scanf("%d", &num1);

	printf("Enter the second number: \n");
	scanf("%d", &num2);

	printf("Enter the third number: \n");
	scanf("%d", &num3);

	/*Check if it is possible to make a triangle and return perimeter if valid*/
	while (num1 + num2 < num3 && num2 + num3 < num1 && num3 + num1 < num2) {
		printf("Error");
		break;
	};
	
	
	while (num1 + num2 > num3 && num2 + num3 > num1 && num3 + num1 > num2) {
		perimeter = num1 + num2 + num3;
		printf("The perimeter of the triangle is: %d\n", perimeter);
		break;
	};



	


	/*output*/
	return 0;
}