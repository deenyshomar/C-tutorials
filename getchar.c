#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Practice on some unformated input
 *
 * getchar - functon that take single character input from keyboard
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch;

	printf("Enter any key then press \"Enter\"\n");
	ch = getchar();
	printf("ch is %c\n", ch);
	return (0);
}
