#include <stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int *p;
	p = &a[0];

	printf("address of an array is : %p\n", p);
	printf("value of the array pointer point to is : %d\n", *p);
}
