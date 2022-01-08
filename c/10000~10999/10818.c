#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int arr[1000000] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int min = arr[0], max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	printf("%d %d", min, max);
	return 0;
}
