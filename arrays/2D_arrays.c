#include <stdio.h>

int main()
{
	int i, j, a[2][3], sum = 0;

	printf("Enter 2D arrays : \n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("The matrix is : \n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
			sum = sum + a[i][j];
		}
		putchar('\n');
	}


	printf("The tranpose of the matrix is :\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", a[j][i]);
		}
		putchar('\n');
	}
	printf("sum of all the arrays is : %d\n", sum);
	return (0);
}
