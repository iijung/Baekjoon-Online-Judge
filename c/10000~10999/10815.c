#include <stdio.h>
#include <stdlib.h>

int ase(const void *a, const void *b)
{
	return *(int *)a > *(int *)b? 1 : -1;
}

int find(int *arr, int size, int val)
{
	int left, mid, right;

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (val == arr[mid]) return (1);
		else if (val > arr[mid]) left = mid + 1;
		else if (val < arr[mid]) right = mid - 1;
	}
	return (0);
}

int main()
{
	int init;
	int n, m;
	int *arr_n, *arr_m;

	scanf("%d", &n);
	arr_n = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr_n[i]);
	}
	qsort(arr_n, n, sizeof(int), ase);

	scanf("%d", &m);
	arr_m = (int *)malloc(sizeof(int) * m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &arr_m[i]);
	}

	init = 1;
	for (int i = 0; i < m; i++)
	{
		if (init) init = 0;
		else printf(" ");
		printf("%d", find(arr_n, n, arr_m[i]));
	}
	return (0);
}
