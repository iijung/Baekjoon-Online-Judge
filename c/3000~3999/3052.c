#include <stdio.h>

int main()
{
	int arr[10] = {0};
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}

	int cnt = 0;
	int check[10] = {0};
	for (int i = 0; i < 10; i++)
	{
		if (check[i] == -1) continue;
		cnt++;
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[i] == arr[j]) {
				cnt--;
				break;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}
