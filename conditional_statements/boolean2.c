#include <stdio.h>

/**
 * main - Entry point
 *
 * boolean - conditional statement
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a = 100;

	if (a == 10)
	{
		printf("value of a is 10\n");
	}
	else if (a == 20)
	{
		printf("value of a is 20\n");
	}
	else if (a == 30)
	{
		printf("value of a is 30\n");
	}
	else if (a == 40)
	{
		printf("value of a is 40\n");
	}
	else
	{
		printf("None of the value is matching\n");
	}
	printf("Exact value of a is : %d\n", a);
	return (0);
}
