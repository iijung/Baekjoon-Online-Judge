#include <stdio.h>

int Arr[30][30];

int nCr(int n, int r)
{
    if (n < r) return 0;
    if (n == r || r == 0) return 1;
	if (n / 2 < r) return nCr(n, n - r);
	if (!Arr[n][r]) Arr[n][r] = nCr(n - 1, r - 1) + nCr(n - 1, r);
    return Arr[n][r];
}

int main()
{
	int t = 0;
	scanf("%d", &t);

	while(t--)
	{
		int n = 0, m = 0;
		scanf("%d %d", &n, &m);
		printf("%d\n", nCr(m,n));
	}
	return 0;
}
