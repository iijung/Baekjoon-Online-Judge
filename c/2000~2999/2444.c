#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) printf("%c", j < n - i - 1? ' ' : '*');
		for (int j = 1; j < n; j++) if (i >= j) printf("*");
		printf("\n");
	}
	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j < n; j++) printf("%c", j < n - i - 1? ' ' : '*');
		for (int j = 1; j < n; j++) if (i >= j) printf("*");
		printf("\n");
	}
	return 0;
}
