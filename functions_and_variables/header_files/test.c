#include <stdio.h>
#include "main.h"

int main(void)
{
	int a = 5;

	test(a);

	printf("%d \n", a);

	int value_to_be_printed = test(a);

        printf("%d\n", value_to_be_printed);

	return 0;
}
