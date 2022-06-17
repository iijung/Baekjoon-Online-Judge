#include <stdio.h>
#include <stdlib.h>

#define SWAP(a, b) {int t = a; a = b; b = t; }

void f(int *arr, int n, int k)
{
	int max = 0;
	int cnt = 0;
	for (int last = n - 1; last > 0; --last)
	{
		max = 0;
		for (int i = 1; i < last; i++) if (arr[max] < arr[i]) max = i;
		if (arr[last] < arr[max])
		{
			++cnt;
			SWAP(arr[last], arr[max]);
			if (cnt == k)
			{
				printf("%d", arr[0]);
				for (int j = 1; j < n; j++) printf(" %d", arr[j]);
				return ;
			}
		}
	}
	printf("-1");
}

int main()
{
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);

	int *arr = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	f(arr, n, k);
	free(arr);
	return (0);
}
