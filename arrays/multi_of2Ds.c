#include <stdio.h>
#define N 50

/**
 * main - Entry point
 *
 * Description: program that multiply 2 matrix i.e arrays matrices
 *
 * Return: Always 0 (Success)
 *
 * programmed by: deenyshomar
 *
 */

int main(void)
{
	int a[N][N], b[N][N], c[N][N];
	int m,n,p,q; // variables of first and second matrix
	int i,j,k; // the iteration variables
	int multi;

	printf("\nEnter number of rows and colums of the first matrix : \n\n");
	scanf("%d %d", &m, &n);
	printf("\nEnter the elements of first matrix : \n\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter number of rows and colums of the second matrix : \n\n");
	scanf("%d %d", &p, &q);
	printf("\nEnter the elements of second matrix : \n\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\nThe firts matrix is : \n\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
	putchar('\n');
	}
	printf("\nThe second matrix is : \n\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("%d\t", b[i][j]);
		}
	putchar('\n');
	}

	if (n != p)
	{
		printf("\nThe matrices can't be multiply!\n\n");
	}
	else
	{

		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				c[i][j] = 0;
				for (k = 0; k < m; k++)
				{
			        	c[i][j] = c[i][j] + a[i][k] * b[k][j];
				}
			}
		}

		printf("\nThe product of the 2 matrices is : \n\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				printf("%d\t", c[i][j]);
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
