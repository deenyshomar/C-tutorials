#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: unformatted input that takes invisible character from keyboard
 *
 * getch - function that takes single invisible character
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	getc(ch);
	printf("%c", ch);
	return (0);
}
