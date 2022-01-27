#include <stdio.h>
#include <math.h>

int main()
{
	int d = 0, h = 0, w = 0;
	scanf("%d %d %d", &d, &h, &w);

	double x = sqrt(pow(d,2) / (pow(h,2) + pow(w,2)));
	printf("%d %d", (int)(x * h), (int)(x * w));
	return 0;
}
