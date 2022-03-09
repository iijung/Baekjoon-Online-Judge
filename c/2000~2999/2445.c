#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) printf("%c", j > i? ' ' : '*');
		for (int j = 0; j < n; j++) printf("%c", j < n - i - 1? ' ' : '*');
		printf("\n");
	}
	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j < n; j++) printf("%c", j > i? ' ' : '*');
		for (int j = 0; j < n; j++) printf("%c", j < n - i - 1? ' ' : '*');
		printf("\n");
	}
	return 0;
}
