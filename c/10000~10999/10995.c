#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 2 * n - i % 2; j++)
		{
			printf((i + j) % 2?"*":" ");
		}
		printf("\n");
	}
	return (0);
}
