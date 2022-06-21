#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int arr[100] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int v = 0;
	scanf("%d", &v);

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == v) cnt++;
	}
	printf("%d", cnt);
	return (0);
}
