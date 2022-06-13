#include <stdio.h>

int f(int a, int b)
{
	if (b == 1) return (a);
	if (b % 2) return ((a * f(a, b - 1)) % 10);
	long long r = f(a, b / 2) % 10;
	return (r * r % 10);
}

int main()
{
	int t = 0;
	scanf("%d", &t);

	int num = 0;
	int a = 0, b = 0;
	while (t--)
	{
		scanf("%d %d", &a, &b);
		num = f(a, b) % 10;
		printf("%d\n", num? num : 10);
	}
	return (0);
}
