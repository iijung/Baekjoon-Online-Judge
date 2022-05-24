#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return *(int *)a > *(int *)b? 1 : -1;
}

int main()
{
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);

	int card[2][101] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &card[0][i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &card[1][i]);
	}

	int tmp = 0;
	int result[100] = {0};
	for (int i = 0; i < n; i++)
	{
		result[i] = card[1][i] * card[0][0];
		for (int j = 1; j < n; j++)
		{
			tmp = card[1][i] * card[0][j];
			if (result[i] < tmp) result[i] = tmp;
		}
	}
	qsort(result, n, sizeof(int), compare);
	printf("%d", result[n - k - 1]);
	return (0);
}
