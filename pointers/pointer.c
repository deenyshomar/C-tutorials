#include <stdio.h>

/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;
	int **q;
	int ***r;

	n = 98;
	p = &n;
	q = &p;
	r = &q;
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p' : %p\n", &p);
	printf("Value of 'q': %p\n", q);
	printf("Address of q : %p\n", &q);
	printf("Value of 'r': %p\n", r);
	printf("Address of 'r': %p\n", &r);
	
	return (0);
}
