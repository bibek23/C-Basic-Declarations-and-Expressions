#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int height = 7; /*inches*/
	int width = 5;/*inches*/
	int perimeter;
	int area;

	/*Input*/
	perimeter = 2 * (height + width);
	area = height * width;

	/*output*/
	printf("The perimeter of the rectangle is %d inches.\n", perimeter);
	printf("The area of the rectangle is %d inches.\n", area);
	return 0;
}