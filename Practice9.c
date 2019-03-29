/* Write a C program that accepts two item’s weight (floating points' values ) 
and number of purchase (floating points' values) and calculate the average value of the items.*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	float item1;
	float item2;
	float purchase1;
	float purchase2;
	float average = 0;

	/*Input*/
	printf("Enter the weight of item1:\n");
	scanf("%2f", &item1);

	printf("Enter the Number of purchases for item1:\n");
	scanf("%2f", &purchase1);

	printf("Enter the weight of item2:\n");
	scanf("%2f", &item2);

	printf("Enter the Number of purchases for item2:\n");
	scanf("%2f", &purchase2);

	average = (item1*purchase1 + item2*purchase2) / (purchase1+purchase2);


	/*output*/
	printf("The average of the two items is:%.2f\n",average);
	return 0;
}