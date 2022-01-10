#include <stdio.h>

int isPrime(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int t = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		if (isPrime(t)) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
