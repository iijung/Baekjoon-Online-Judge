#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b)
{
	return *(int*)a > *(int*)b? 1 : -1;
}

int search(int* arr, int len, int x)
{
	int min = 0;
	int max = len - 1;
	while (min <= max)
	{
		int mid = (min + max) / 2;
		if (arr[mid] == x) return 1;
		else if (arr[mid] < x) min = mid + 1;
		else if (arr[mid] > x) max = mid - 1;
	}
	return -1;
}

int main()
{
	int t = 0;
	int n = 0, m = 0;
	int arr[100000] = {0};

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), compare);

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &t);
		printf("%d\n", search(arr, n, t) < 0? 0 : 1);
	}
	return 0;
}
