#include <stdio.h>

/**
 * main - Entry point
 *
 * Descrption: Summing of 2 integers value, imported from standard input
 *
 * Return: Always 0 (Success)
 *
 * scanf: function that takes data from user
 */
int main(void)
{
	int a, b, sum;

	printf("Enter 2 numbers: \n");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum of %d and %d is %d\n", a, b, sum);
	return (0);
}
