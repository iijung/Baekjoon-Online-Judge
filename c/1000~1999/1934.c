#include <stdio.h>

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}

void f()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("%d\n", lcm(a,b));
}

int main()
{
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		f();
	}
	return 0;
}
