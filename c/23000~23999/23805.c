#include <stdio.h>
#include <string.h>

char Arr[500][501];

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < 5 * n; i++)
	{
		memset(Arr[i], '@', 5 *n);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4 * n; j++)
		{
			Arr[j + n][i + n] = ' ';
			Arr[j + 0][i + n * 3] = ' ';
		}
	}
	for (int i = 0; i < 5 * n; i++)
	{
		puts(Arr[i]);
	}
	return (0);
}
