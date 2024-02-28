#include <stdio.h>
#include <math.h>
int main()
{
	int x = 0;
	float y;
	printf("x = ");
	scanf_s ("%ld", &x);

	y = sqrt(pow(x, 2)) + pow(x, 2);

	printf("y: %ld\n", y);
}