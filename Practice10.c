/*Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. 
Print the employee's ID and salary (with two decimal places) of a particular month.*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	char employeeID[7];
	float totalHours;
	float amount;
	float salary = 0;

	/*Input*/
	printf("Enter your emplyee ID: \n");
	scanf("%s", &employeeID);

	printf("Enter the total worked hours of a month: \n");
	scanf("%f", &totalHours);

	printf("Enter the amount you recieved per hour: \n");
	scanf("%f", &amount);

	salary = totalHours * amount;

	/*output*/
	printf("Your employee id is: %s\n", employeeID);
	printf("Your total salary is: %2f\n", salary);
	return 0;
}