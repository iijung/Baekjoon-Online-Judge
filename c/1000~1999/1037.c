#include <stdio.h>
#include <stdlib.h>

int ase(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	int arr[50] = {0};
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, num, sizeof(int), ase);
	printf("%d", arr[0] * (num == 1? arr[0] : arr[num-1]));
	return 0;
}
