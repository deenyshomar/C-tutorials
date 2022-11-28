#include <stdio.h>
#include <string.h>

/**
 * function that print a string in reverse order
 */

int main()
{
	char s1[20]; // string
	int i,j; // iteration variables
	char c; // copy of s1
	int len;

	printf("Enter a string :\n");
	scanf("%s", s1);

//	strrev(s1); // pre-define function

	len = strlen(s1);
/**
	for (i = 0; i < len/2; i++) // first logic
	{
		c = s1[i];
		s1[i] = s1[len-1-i];
		s1[len-1-i] = c;
	}
*/

	for (i = 0, j = len-1; i < j; i++, j--) // second logic
	{
		c = s1[i];
		s1[i] = s1[j];
		s1[j] = c;
	}

	puts(s1);
}
