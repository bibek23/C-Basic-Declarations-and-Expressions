/*Write a C program that accepts 4 integers p, q, r, s from the user where r and s are positive and p is even. 
If q is greater than r and s is greater than p and if the
sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	/*Declaration*/
	int p =0;
	int q =0;
	int r=0;
	int s = 0;


	/*Input*/
	do{
		printf("Enter the value of p: \n");
		scanf("%d", &p);
	}while(p%2);
	
	printf("Enter the value of q: \n");
	scanf("%d", &q);

	do {
		printf("Enter the value of r: \n");
		scanf("%d", &r);
	} while (r < 0);
	
	do{
		printf("Enter the value of s: \n");
		scanf("%d", &s);	
	}while(s < 0);

	if (q > r && s > p && r + s > p + q) {
		printf("Correct values");
	}
	else {
		printf("wrong values \n");
	}





	/*output*/
	return 0;
}