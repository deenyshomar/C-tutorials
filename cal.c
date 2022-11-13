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

	printf("Enter first operand: ");
	scanf("%d", &a);

	printf("Enter an operator: ");
	scanf(" %c", &operator);

	printf("Enter second operand: ");
	scanf("%d", &b);

	switch (operator)
	{
	case '+':
	{
		result = a + b;
		break;
	}
	case '-':
	{
		result = a - b;
		break;
	}
	case '*':
	{
		result = a * b;
		break;
	}
	case '/':
	{
		result = a / b;
		break;
	}
	case '%':
	{
		result = a % b;
		break;
	}
	default:
	{
		printf("Invalid operator\n");
	}
	}
	printf("result is : %d\n", result);
	return (0);
}
