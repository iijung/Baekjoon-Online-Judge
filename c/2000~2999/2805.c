#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return *(int*)a > *(int*)b? 1 : -1;
}

int f(int arr[], int n, int m)
{
	int left = 1;
	int right = arr[n - 1];

	while (left <= right)
	{
		int mid = (left + right) / 2;

		long long int sum = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			if (arr[i] <= mid) break;
			sum += arr[i] - mid;
		}

		if (sum < m) right = mid - 1;
		else left = mid + 1;
	}
	return right;
}

int main()
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);

	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), compare);

	printf("%d", f(arr, n, m));
	free(arr);
	return 0;
}
