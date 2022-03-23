#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c", j < i? ' ' : '*');
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c", j < i? ' ' : '*');
		}
		printf("\n");
	}
	return 0;
}
