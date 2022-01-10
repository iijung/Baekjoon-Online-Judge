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
	scanf("%d\n%d", &m, &n);

	int t = 0;
	int sum = 0, min = 0;
	for (int i = m; i <= n; i++)
	{
		t = isPrime(i);
		if (t) {
			sum += i;
			if (min == 0) min = i;
		}
	}

	if (min) {
		printf("%d\n%d", sum, min);
	} else	{
		printf("-1");
	}
	return 0;
}
