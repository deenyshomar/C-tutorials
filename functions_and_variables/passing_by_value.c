#include <stdio.h>
/**
 * main - Entry pont
 *
 * Description: passing by value
 *
 * Return: Always 0 (Success)
 *
 */
int increament(int *a)
{
	*a = *a + 1;
}
int main(void)
{
	int i;
	int *p;

	i = 10;
	p = &i;

	printf("value of i before passing value: %d\n", i);
	printf("dereference of p is : %d\n", *p);
	printf("address of i : %p\n", &i);
	printf("value of p : %p\n", p);
	increament(p);
	printf("value of i after passing value using pointer(p) : %d\n", i);
	increament(&i);
	printf("value of i after passing value using armpersand(&i) : %d\n", i);
	return (0);
}
