#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	float pi = 3.14;
	float radius = 6.00;
	float perimeter;
	float area;

	/*Input*/
	perimeter = 2.00 * pi * radius;
	area = pi * radius * radius;

	/*output*/
	printf("The perimeter of a circle is %.6f inches.\n", perimeter);
	printf("The area of a circle is %.6f inches.\n", area);
	return 0;
}