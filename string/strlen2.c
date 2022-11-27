#include <stdio.h>
//#include <string.h>

/**
 * main - Entry point
 *
 * Description: program that count the name of a string and print it out to the screen
 *
 */
int main(void)
{
	int count = 0, i = 0;
	char name[20];

	printf("Enter your first name: \n");
	scanf("%s", name);
	//count = strlen(name);
	while (name[i] != '\0')
	{
		count++;
		i++;
	}
	printf("your name length is %d characters\n", count);
	printf("your name is %s\n", name);
}
