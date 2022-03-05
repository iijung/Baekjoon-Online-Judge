#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > 0; j--)
		{
			printf("%c", i < j ? ' ' : '*');
		}
		printf("*");
		for (int j = 1; j < n; j++)
		{
			if (i >= j) printf("*");
		}
		printf("\n");
	}

	return 0;
}
