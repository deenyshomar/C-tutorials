#include <stdio.h>

int main()
{
	void *vp;
	int a = 4;
	char c = 'd';
	float f = 27.09;

	vp = &a;
	printf(" a is : %d\n", *(int*)vp);

	vp = &c;
	printf(" c is : %c\n", *(char*)vp);

	vp = &f;
	printf(" f is : %f\n", *(float*)vp);
}
