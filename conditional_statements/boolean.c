#include <stdio.h>

/**
 * main - Entry point
 *
 * boolean - Conditional statement
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a = 100; /* local variable defination */

	if (a < 20) /* check the boolean condition */
	{
		printf("a is lessthan 20\n"); /* if is true, print this line */
	}
	else
	{
		printf("a is not lessthan 20\n"); /* if is false, print this */
	}
	printf("value of a is : %d\n", a);
	return (0);
}
