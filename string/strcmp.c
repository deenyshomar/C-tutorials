#include <stdio.h>
//#include <string.h>

/**
 * main - Entry point
 *
 * Description: function that compare two strings
 *
 */

int main(void)
{
	char s1[20], s2[20];
	int flag, value, i;

	printf("Enter the first  string : ");
	scanf("%s", s1);
	printf("Enter the second string : ");
	scanf("%s", s2);

//	value = strcmp(s1, s2); //pre-define function
//	printf("%d\n", value);

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) //my own logic
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("strings are NOT same!\n");
	}
	else
	{
		printf("strings are same!\n");
	}

//	if (value == 0)
//	{
//		printf("strings are same\n");
//	}
//	else
//	{
//		printf("strings are not same\n");
//	}
}
