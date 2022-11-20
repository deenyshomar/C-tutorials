#include <stdio.h>

struct car
{
	char *name;
	float price;
	int speed;
};

int main(void)
{
	struct car honda;
	honda.name = "civic";
	honda.price = 10899.98;
	honda.speed = 178;

	printf("name is %s\n", honda.name);
	printf("price is %f\n", honda.price);
	printf("speed is %d\n", honda.speed);

	return (0);
}
