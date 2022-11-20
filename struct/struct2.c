#include <stdio.h>

struct car
{
	char *name;
	float price;
	int speed;
};

int main(void)
{
	struct car mercendez = {"4matik", 4099.99, 200};
	printf(" car name is %s\n", mercendez.name);
	printf(" car price is %f\n", mercendez.price);
	printf(" car speed is %d\n", mercendez.speed);

	return (0);
}
