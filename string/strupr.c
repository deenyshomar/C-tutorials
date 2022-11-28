#include <stdio.h>
//#include <string.h>

/**
 * Description: function that convert lowercase to uppercase
 */

int main()
{
	char s[20];
	int i;
	int c = 32;

	printf("Enter a string : \n");
	scanf("%s", s);
//	strupr(s); //pre-define function

	for (i = 0; s[i] != '\0'; i++) // my own logic
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - c;
		}
	}
	puts(s);
}
