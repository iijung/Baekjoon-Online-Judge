#include <stdio.h>

int main()
{
	long long int n = 0, m = 0;
	scanf("%lld %lld", &n, &m);

	long long int diff = n - m;
	if (diff < 0) diff = -diff;
	printf("%lld", diff);
	return 0;
}
