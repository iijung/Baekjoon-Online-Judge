#include <stdio.h>
#include <stdlib.h>

int ase(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	
	int arr[1000] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, n, sizeof(int), ase);
	int sum = 0;
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		tmp += arr[i];
		sum += tmp; 
	}
	printf("%d", sum);
	return 0;
}
