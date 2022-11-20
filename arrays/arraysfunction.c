#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Passing Single Dimensional Arrays to Functions
 *
 * Return: Always 0 (Success)
 */
void times2(int *a, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d\n", a[i] * 2);
	}
}

void times3(int a[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d\n", a[i] * 3);
	}
}

void times4(int a[5], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d\n", a[i] * 4);
	}
}

int main(void)
{
	int x[5] = {2, 4, 6, 8, 10};
	times2(x, 5);
	times3(x, 5);
	times4(x, 5);

}
