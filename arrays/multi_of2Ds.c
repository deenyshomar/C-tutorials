#include <stdio.h>
#define N 50
int main()
{
	int a[N][N], b[N][N], c[N][N];
	int m,n,p,q; // variables of first and second matrix
	int i,j,k; // the iteration variables
	int multi;

	printf("Enter number of rows and colums for the first matrix 'm and n' : \n");
	scanf("%d %d", &m, &n);
	printf("Enter the elements of first matrix : \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter number of rows and colums for the second matrix 'p and q' : \n");
	scanf("%d %d", &p, &q);
	printf("Enter the elements of second matrix : \n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("The firts matrix is : \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
	putchar('\n');
	}
	printf("The second matrix is : \n");
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
		printf("The matrix can't be multiply!\n");
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
				};
			}
		}

		printf("The value of the multiply matrix is : \n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				printf("%d\t", c[i][j]);
			}
			putchar('\n');
		}
	}
}
