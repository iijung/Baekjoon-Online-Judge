#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int t = 0;
	int arr[10000] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		arr[t - 1]++;
	}

	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0 ; j < arr[i]; j++)
		{
			printf("%d\n", i + 1);
		}
	}
	return 0;
}
