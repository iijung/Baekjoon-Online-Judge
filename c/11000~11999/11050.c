#include <stdio.h>

int f(int n, int k)
{
	int result = 1;
	for (int i = n - k + 1; i <= n; i++)
	{
		result *= i;
	}
	for (int i = 2; i <= k; i++)
	{
		result /= i;
	}
	return result;
}

int main()
{
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);
	printf("%d", f(n,k));
}
