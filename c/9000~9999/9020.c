#include <stdio.h>
#include <math.h>

#define MAX 20001
int notPrimes[MAX];

void init()
{
	for (int i = 2; i <= sqrt(MAX); i++)
	{
		if (notPrimes[i] == 1) continue;
		for (int j = i + i; j < MAX; j += i)
		{
			notPrimes[j] = 1;
		}
	}
}

int main()
{
	init();

	int t = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int n = 0;
		scanf("%d", &n);

		int a = 0, b = 0;
		for (int j = 1; j <= n / 2; j++)
		{
			if (notPrimes[j]) continue;
			if (notPrimes[n - j]) continue;
			a = j;
			b = n - j;
		}
		printf("%d %d\n", a, b);
	}
	return 0;
}
