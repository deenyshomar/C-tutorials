#include <stdio.h>
int main()
{
	int *p;
	p = NULL;

	printf("address of the p pointing to : %p\n", p);
	printf("dereferencing of the p : %d\n", *p);
	return (0);
}
