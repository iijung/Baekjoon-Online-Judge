#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	int b = 0, c = 0;
	scanf("%d %d", &b, &c);

	long long int cnt = n;
	for (int i = 0; i < n; i++)
	{
		a[i] -= b;

		if (a[i] > 0)
		{
			cnt += a[i] / c;
			cnt += a[i] % c? 1 : 0;
		}
	}
	printf("%lld", cnt);
	free(a);
	return 0;
}
