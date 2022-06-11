#include <stdio.h>

int main()
{
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);

	int cnt = 0;
	int arr[1001] = {0};
	for (int p = 2; p <= n; p++)
	{
		if (arr[p] == 1) continue;
		for (int i = p; i <= n; i += p)
		{
			if (arr[i] == 1) continue;
			arr[i] = 1;
			if (++cnt == k)
			{
				printf("%d", i);
				return (0);
			}
		}
	}
	return (0);
}
