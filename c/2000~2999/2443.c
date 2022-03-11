#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < 2 * n; j++)
		{
			if (j <= n) printf("%c", j <= i? ' ' : '*');
			else if (j - n < n - i) printf("*");
		}
		printf("\n");
	}
	return 0;
}
