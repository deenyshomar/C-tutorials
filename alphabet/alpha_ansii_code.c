#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet ansii codes values
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ds;
	char DS;
	char sd;

	for (ds = 'a'; ds <= 'z'; ds++)
	{
		printf("ansi code for letter %c is : %d\n", ds, ds);
	}
	for (DS = 'A'; DS <= 'Z'; DS++)
	{
		printf("ansi code for letter %c is : %d\n", DS, DS);
	}
	for (sd = '0'; sd <= '9'; sd++)
	{
		printf("ansi code for digit  %c is : %d\n", sd, sd);
	}
	return (0);
}
