#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s = "zubee_nice";
	char t[10];
	int i;

	strcpy(t, s);
	t[0] = 'x';

	for (i = 0; i < 10; i++)
	{
		printf( "%c", s[i]);
	}
	putchar('\n');

	for (i = 0; i < 10; i++)
	{
		printf( "%c", t[i]);
	}
	putchar('\n');

	//string lengh
	printf("the string length for s is %zu bytes long\n", strlen(s));
	printf("the string length for t is %zu bytes long\n", strlen(t));

	return (0);
}
