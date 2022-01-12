#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	int r = 0;
	scanf("%d", &r);

	printf("%f\n", r * r * M_PI);
	printf("%f\n", (double)(r * r * 2));
	return 0;
}
