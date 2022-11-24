#include <stdio.h>

int main()
{
	int a[2][3], b[2][3], c[2][3];
	int i, j;

	printf("Enter the first matrix: \n\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the second matrix: \n\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	putchar('\n');
	printf("The first matrix is : \n\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	printf("The second matrix is : \n\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", b[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	printf("The sum of the 2 matrix is :\n\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t", c[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	return (0);
}
