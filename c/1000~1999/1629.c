#include <stdio.h>

int f(long long int a, int b, int c)
{
	if (b == 1) return a % c;
	if (b & 1) return (a * f(a, b-1, c)) % c;
	long long r = f(a, b/2, c);
	return (r * r) % c;
}

int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	a %= c;
	printf("%d\n", f(a,b,c));
	return 0;
}

