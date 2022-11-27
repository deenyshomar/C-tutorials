#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = "deeny";
	char s2[] = "shomar";
	int len1, len2;
	int i;

//	strcat(s1, s2);
	len1 = strlen(s1);
	len2 = strlen(s2);

	for (i = 0; i <= len2; i++)
	{
		s1[len1 + i] = s2[i];
	}
	puts(s1);
}
