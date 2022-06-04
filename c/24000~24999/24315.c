#include <stdio.h>

int o(int a1, int a0, int n0, int c1, int c2, int n)
{
	if (n > 10000)
		return (1);
	int fn = a1 * n + a0;
	return (c1 * n <= fn && fn <= c2 * n) ? o(a1, a0, n0, c1, c2, n + 1) : 0;
}

int main()
{
	int a1 = 0, a0 = 0;
	scanf("%d %d", &a1, &a0);

	int c1 = 0, c2 = 0;
	scanf("%d %d", &c1, &c2);

	int n0 = 0;
	scanf("%d", &n0);

	printf("%d", o(a1, a0, n0, c1, c2, n0));
	return (0);
}
