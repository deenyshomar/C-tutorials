#include <stdio.h>
//#include <string.h>

/**
 * Description: function that convert uppercase string to lowercase
 */

int main()
{
	char s[20];
	int i;
	int c = 32;

	printf("Enter a string : \n");
	scanf("%s", s);
//	strlwr(s); //pre-define function

	for (i = 0; s[i] != '\0'; i++) // my own logic
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + c;
		}
	}
	puts(s);
}
