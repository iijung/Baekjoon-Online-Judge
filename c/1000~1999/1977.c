#include <stdio.h>
#include <math.h>

int main()
{
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);

	int min = 0x7FFFFFFF, sum = 0;
	for (int i = m; i <= n; i++)
	{
		int t = sqrt(i);
		if (t * t == i)
		{
			sum += i;
			if (min > i) min = i;
		}
	}
	if (min == 0x7FFFFFFF) printf("-1");
	else printf("%d\n%d", sum, min);
	return 0;
}
