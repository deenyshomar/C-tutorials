#include <stdio.h>

/**
 * main - Entry point
 *
 * Relational operation
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a = 10;
	int b = 21;
	int c;

	if (a == b)
	{
		printf("Line 1 - a is equal to b\n");
	}
	else
	{
		printf("Line 1 - a is not equal to b\n");
	}

	if (a < b)
	{
		printf("Line 2 - a is less than b\n");
	}
	else
	{
		printf("Line 2 - a is not less than b\n");
	}

	if (a > b)
	{
		printf("Line 3 - a is greater than b\n");
	}
	else
	{
		printf("Line 3 - a is not greater than b\n");
	}

	/* let change a value */

	a = 5;
	b = 20;

	if (a <= b)
	{
		printf("Line 4 - a is either less than or equal to b\n");
	}
	if (a >= b)
	{
		printf("Line 5 - a is either greater than or equal to b\n");
	}
	return (0);
}
