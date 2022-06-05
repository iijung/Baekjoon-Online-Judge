#include <stdio.h>
#include <math.h>

int o(int a, int b, int c, int n0)
{
	double d = b * b - 4 * a * c;
	if (a > 0)
		return (0);
	if (a == 0)
	{
		if (b > 0)
			return (0);
		if (b == 0)
			return (c <= 0? 1 : 0);
		if (b < 0)
			return (b * n0 + c <= 0? 1 : 0);
	}
	if (d <= 0)
		return (1);
	double t1 = (-b - sqrt(d)) / 2 / a;
	double t2 = (-b + sqrt(d)) / 2 / a;
	double max = t1 > t2? t1 : t2;
	return (max <= n0? 1 : 0);
}

int main()
{
	int a2 = 0, a1 = 0, a0 = 0;
	scanf("%d %d %d", &a2, &a1, &a0);

	int c1 = 0, c2 = 0;
	scanf("%d %d", &c1, &c2);

	int n0 = 0;
	scanf("%d", &n0);

	printf("%d", o(c1 - a2, -a1, -a0, n0) && o(a2 - c2, a1, a0, n0));
	return (0);
}
