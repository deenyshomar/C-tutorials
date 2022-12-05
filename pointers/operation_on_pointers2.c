#include <stdio.h>
int main()
{
	int a[10] = {2, 4, 6, 8, 1, 3, 5, 7, 9, 0};
	int *p;
	int *q;

	p = a;

	q = &a[0] + 3; // q value is initialized with index 3 element which is 8

	printf("%d\n", *q); // this will print 8

	printf("%d, %d, %d\n", (*p)++, (*p)++, *(++p));//this will print 5, 4, 4 & update the p value to 6

	printf("%d\n", *p); // this will print 6

	printf("%d\n", (*p)++); // this will print 6 & update the p value to 7

	printf("%d\n", (*p)++); // this will print 7 & update the p value to 8

	printf("%d\n", *p); // this will print 8

	q--; // this updated the q value to 6

	printf("%d\n", (*(q + 2))--); // this will print 1, & update the q value to 6

	printf("%d\n", *q); // this will print 6

	printf("%d\n", *(p + 2) - 2); //this will print 6

	printf("%d\n", *(p++ - 2) - 1); // this will print garbage value
}
