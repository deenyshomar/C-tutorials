#include <stdio.h>
int main()
{
	int *p;

	printf("size of int : %d\n", sizeof(int));
	printf("size of p : %d\n", sizeof(p));
	printf("size of *p : %d\n", sizeof(*p));

	return (0);
}
