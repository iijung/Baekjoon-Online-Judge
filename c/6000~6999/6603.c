#include <stdio.h>


int lotto[6];
void f(int* arr, int k, int n)
{
	if (n < 6)
	{
		for (int i = 0; i <= k - 6 + n; i++)
		{
			lotto[n] = arr[i];
			f(arr + 1 + i, k - 1 - i, n + 1);
		}
	} else {
		for (int i = 0; i < 6; i++)
		{
			printf("%d ", lotto[i]);
		}
		printf("\n");
	}
}

int main()
{
	int k = 0;
	int arr[13] = {0};

	while (1)
	{
		scanf("%d", &k);
		if (k == 0) return 0;
		for (int i = 0; i < k; i++)
		{
			scanf("%d", &arr[i]);
		}
		f(arr,k,0);
		printf("\n");
	}
	return 0;
}
