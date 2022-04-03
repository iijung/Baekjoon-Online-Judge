#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ase(const void* a, const void* b)
{
	return *(int*)a > *(int*)b? 1 : -1;
}

int getUnique(int arr[], int arr_len)
{
	int len = 1;
	for (int i = 1; i < arr_len; i++)
	{
		if (arr[i - 1] != arr[i])
		{
			arr[len++] = arr[i];
		}
	}
	return len;
}

int getIdx(int arr[], int arr_len, int x)
{
	int left = 0;
	int right = arr_len - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] == x) return mid;
		if (arr[mid] > x) right = mid - 1;
		if (arr[mid] < x) left = mid + 1;
	}
	return -1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int* x1 = (int*)malloc(sizeof(int) * n);
	int* x2 = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x1[i]);
		x2[i] = x1[i];
	}
	qsort(x2, n, sizeof(int), ase);

	int len = getUnique(x2, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", getIdx(x2, len, x1[i]));
	}
	free(x1);
	free(x2);
	return 0;
}
