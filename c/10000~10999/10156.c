#include <stdio.h>

int main()
{
	int k = 0, n = 0, m = 0;
	scanf("%d %d %d", &k, &n, &m);

	int lack = k * n - m;
	printf("%d", lack > 0? lack : 0);
	return 0;
}
