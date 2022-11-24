#include <stdio.h>

int main()
{
	int a[3][3];
	int sumrow, sumcol, totalsum = 0;
	int i, j;

	printf("Enter matrix element :\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d\n", &a[i][j]);
		}
	}
	printf("The matrix are :\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
			totalsum = totalsum + a[i][j];
		}
		putchar('\n');
	}
	for (i = 0; i < 3; i++)
	{
		sumrow = sumcol = 0;

		for (j = 0; j < 3; j++)
		{
			sumrow = sumrow + a[i][j];
			sumcol = sumcol + a[j][i];
		}
		printf("sumrow = %d\t\t", sumrow);
		printf("sumcol = %d\t\t", sumcol);
		putchar('\n');
	}
	printf("total sum of the matrix is : %d\n", totalsum);
	return (0);
}
