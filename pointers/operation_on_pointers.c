#include <stdio.h>

int main()
{
	int a[5] = {2, 4, 6, 8, 0};
	int *p;
	int *q;

	p = a;
	printf("%d, %d, %d\n", (*p)++, *--p, *p++);
	printf("%d\n", *p);

	q = p + 2;

	printf("%d\n", *q);


}
