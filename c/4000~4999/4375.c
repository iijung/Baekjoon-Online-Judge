#include <stdio.h>

int f(long long int n)
{
	int c = 1;
	long long int t = 1;
	while (t && t < n)
	{
		t = t * 10 + 1;
		t = t % n;
		++c;
	}
	return (c);
}

int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		printf("%d\n", f(n));
	}
	return (0);
}
