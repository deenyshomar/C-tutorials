#include <stdio.h>
/**
 * operations on pointers using strings
 */

int main()
{
	char str[20] = "dinyshomar";
	char *ptr = str;

	printf(" %c\n", *ptr); // this will print 'd'
	printf(" %c\n", *(ptr++ +3)); // this will print 'y' & shift the *ptr to 'i'
	printf(" %c\n", *ptr); // this will print 'i'
	printf(" %c\n", *((ptr-- +5)-1)+3); // this will print 'k' & shift the *ptr to 'd'
	printf(" %c\n", *ptr); // this will print 'd'
	printf(" %c\n", *(++ptr +7)-32); // this will print 'A' and shift the *ptr to 'i'
	printf(" %c\n", *ptr); // this will print 'i'
	printf(" %c, %c, %c\n", *ptr, *++ptr, *--ptr); // this will print 'i', 'i', 'd'
	printf(" %c\n", *ptr); // this will print 'i'
}
