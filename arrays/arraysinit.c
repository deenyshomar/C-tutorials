#include <stdio.h>

int main(void)
{

	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int j;
	int i;

	for (j = 0; j <= 10; j++)
	{

	    for (i = 0; i <= 9; i++)
	    {
		printf("%d\n", a[i]);
	    }
	    printf("%c\n", '*');
	}
	return (0);
}
