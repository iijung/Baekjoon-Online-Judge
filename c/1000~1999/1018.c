#include <stdio.h>

char Board[50][50];
int count(int x, int y)
{
	int no_b0w1 = 0;
	int no_b1w0 = 0;
	for (int i = x; i < x + 8; i++)
	{
		for (int j = y; j < y + 8; j++)
		{
			if ((i+j)%2 == 0)
			{
				no_b0w1 += (Board[i][j] == 'W');
				no_b1w0 += (Board[i][j] == 'B');
			} else if ((i+j)%2 == 1)
			{
				no_b0w1 += (Board[i][j] == 'B');
				no_b1w0 += (Board[i][j] == 'W');
			}
		}
	}
	return no_b0w1 < no_b1w0? no_b0w1 : no_b1w0;
}

int main()
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", Board[i]);
	}

	int min = 0x7FFFFFFF;
	for (int i = 0; i <= n - 8; i++)
	{
		for (int j = 0; j <= m - 8; j++)
		{
			int t = count(i,j);
			if (min > t) min = t;
		}
	}
	printf("%d", min);
	return 0;
}
