#include <stdio.h>
/**
 * main - Entry point
 *
 * Decripton: bitwise operation
 *
 * &: bitwise AND - TRUE IF BOTH VALUES ARE TRUE (1, 1)
 * |: bitwise OR - TRUE IF EITHER OF THE VALUE IS TRUE (1,0), (1, 1) OR (0,1)
 * >>: right shift - VAR *2/OPERAND
 * >>: left shift - VAR * 2^(OPERAND)
 * ^: bitwise XOR - TRUE IF ONE OPERAND IS TRUE (NOT BOTH)
 * ~: bitwise NOT - TRUE IF THE VALUE IS FALSE (0)
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int d = 10, s = 5;

	printf("%d\n", d & s);
	printf("%d\n", d | s);
	printf("%d\n", d >> s);
	printf("%d\n", d << s);
	printf("%d\n", d ^ s);
	printf("%d\n", ~d);
	printf("%d\n", ~s);

	return (0);
}
