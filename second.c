#include <stdio.h>
int main()
{
	int a, b, sum; /* Variables Declaration */
	printf("Enter the value of a: ");
	scanf("%d", &a); /* Reading First Number */
	printf("Enter the value of b: ");
	scanf("%d", &b); /* Reading Second Number */
	sum = a + b; /* Finding Sum */
	printf("Sum of %d and %d is %d.",a,b,sum);
	getchar(); /* Holds the output */
	return 0;
}
