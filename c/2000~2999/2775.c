#include <stdio.h>

int f(int k, int n)
{
	if (n == 1) return 1;
	if (k == 0) return n;
	return f(k - 1, n) + f(k, n -1);
}

int main()
{
	int t = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int k = 0, n = 0;
		scanf("%d", &k);
		scanf("%d", &n);
		printf("%d\n", f(k,n));
	}
	return 0;
}
