#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	if (n == 1) return 0;
	for (int i = 2; i <= sqrt(n);)
	{
		if (n % i == 0)
		{
			n /= i;
			printf("%d\n", i);
			continue;
		}
		i++;
	}
	printf("%d", n);
	return 0;
}
