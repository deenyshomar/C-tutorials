#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successs)
 *
 * else if : conditional statement
 *
 */
int main(void)
{
	int age;

	printf("Please enter your age: ");
	scanf("%d", &age);
	if (age < 100)
	{
		printf("You are pretty young!\n");
	}
	else if (age == 100)
	{
		printf("You are old\n");
	}
	else
	{
		printf("You are really old\n");
	}
	return (0);
}
