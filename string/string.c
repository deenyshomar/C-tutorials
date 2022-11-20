#include <stdio.h>
#include <string.h>

int main()
{
	char *s = "deenyshomar";
	char d[] = "zubee_nice";

	d[0] = 'x';
	int i;

	for (i = 0; i < 11; i++)
	{
		printf( "%c", s[i]);
	}
	putchar('\n');

	for (i = 0; i < 10; i++)
	{
		printf( "%c", d[i]);
	}
	putchar('\n');

	printf("The string lenght for s is %zu bytes long\n", strlen(s));
	printf("The string lenght for d is %zu bytes long\n", strlen(d));

	return (0);
}
