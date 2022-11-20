#include <stdio.h>

int _strlen(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		return i;
	}
}
int main(void)
{
	char *z = "deenyshomar";
	int value = _strlen(z);
	printf("%d\n", value);
	printf("the length for z is %d bytes long\n", _strlen(z));

	return (0);
}
