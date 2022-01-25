#include <stdio.h>

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("%d\n", gcd(a, b));
	printf("%d\n", lcm(a, b));
	return 0;
}
