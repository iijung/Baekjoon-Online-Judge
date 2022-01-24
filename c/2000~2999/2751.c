#include <stdio.h>
#include <stdlib.h>

int Arr[1000000];

int compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &Arr[i]);
	}
	qsort(Arr, n, sizeof(int), compare);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", Arr[i]);
	}
	return 0;
}
