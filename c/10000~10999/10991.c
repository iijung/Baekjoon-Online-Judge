#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n + i; j++)
			printf(j < n - i || n + i < j || abs(n - j) % 2 != i % 2? " " : "*");
		printf("\n");
	}
}
