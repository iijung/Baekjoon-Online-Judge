#include <stdio.h>
#include <math.h>

#define MAX 250000
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

	int n = 0;
	while (1)
	{
		scanf("%d", &n);
		if (n == 0) break;

		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (!notPrimes[i]) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
