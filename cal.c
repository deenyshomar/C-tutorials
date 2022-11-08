#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Switch Statements
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a, b, result;
	char operator;

	printf("Enter 2 operand: ");
	scanf("%d %d", &a, &b);

	printf("Enter an operator: ");
	scanf("%c", &operator);

	switch (operator)
	{
	case '+':
	{
		result = a + b;
		printf("%d \n", result);
		break;
	}
	case '-':
	{
		result = a - b;
		printf("%d \n", result);
		break;
	}
	default:
	{
		printf("Invalid operator\n");
	}
	}
	return (0);
}
