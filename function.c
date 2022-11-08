#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: function tbat return int and accept int parameter
 *
 * plus_one - function that increament pasing argument by 1
 *
 * @n: the value that copy the argument pased to the parameter
 *
 * Return: Always 0 (Success)
 *
 */
int plus_one(int n)
{
	return (n + 1);
}

int main(void)
{
	int d, s;

	d = 10;
	s = plus_one(d);
	printf("value of s is : %d\n", s);
}
