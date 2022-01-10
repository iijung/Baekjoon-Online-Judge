#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);

	for (int i = m; i <= n; i++)
	{
		int t = isPrime(i);
		if (t) printf("%d\n", i);
	}
	return 0;
}
