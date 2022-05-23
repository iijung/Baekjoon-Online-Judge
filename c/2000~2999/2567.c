#include <stdio.h>

int main()
{
	int arr[100][100] = {0};

	int n = 0;
	scanf("%d", &n);

	int x = 0, y = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);

		for (int tx = 0; tx < 10; tx++)
		{
			for (int ty = 0; ty < 10; ty++)
			{
				arr[x + tx - 1][y + ty - 1] = 1;
			}
		}
	}

	int len = 0;
	for (int tx = 0; tx < 100; tx++)
	{
		for (int ty = 0; ty < 100; ty++)
		{
			if (arr[tx][ty] == 0)
			{
				if (tx > 1 && arr[tx - 1][ty] == 1) len++;
				if (ty > 1 && arr[tx][ty - 1] == 1) len++;
				if (tx < 98 && arr[tx + 1][ty] == 1) len++;
				if (ty < 98 && arr[tx][ty + 1] == 1) len++;
			}
			else
			{
				if (tx == 0 || tx == 99) len++;
				if (ty == 0 || ty == 99) len++;
			}
		}
	}
	printf("%d", len);
	return (0);
}
