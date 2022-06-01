#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n * 5; i++)
	{
		for (int j = 0; j < (i >= n * 4 ? n * 5 : n); j++)
			putchar('@');
		putchar('\n');
	}
	return (0);
}
