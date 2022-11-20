#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the alphabet in lowercase using while loop
 *
 * Return: Always 0 (Success)
 *
 * Program by deenyhomar
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
