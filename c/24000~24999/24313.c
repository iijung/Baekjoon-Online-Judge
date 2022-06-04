#include <stdio.h>

int o(int a1, int a0, int n0, int c, int n)
{
	if (n > 100000)
		return (1);
	return a1 * n + a0 <= c * n? o(a1, a0, n0, c, n + 1) : 0;
}

int main()
{
	int a1 = 0, a0 = 0;
	scanf("%d %d", &a1, &a0);

	int c = 0;
	scanf("%d", &c);

	int n0 = 0;
	scanf("%d", &n0);

	printf("%d", o(a1, a0, n0, c, n0));
	return (0);
}
