#include <stdio.h>
#include <string.h>

#define MOVE(a,b) {a = b; b = 0;}

int T, N;
char DIR[6];

void f(int num)
{
	scanf("%d %s", &N, DIR);

	int grid[4][4] = {0};
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &grid[i][j]);
		}
	}

	int t;
	printf("Case #%d:\n", num);
	for (int p = 0; p < N; p++)
	{
		if (strcmp(DIR, "left") == 0)
		{
			for (int c = 0; c < N - 1; c++)
			{
				t = c;
				while (++t < N && grid[p][c] == 0) MOVE(grid[p][c], grid[p][t]);
				t = c + 1;
				while (++t < N && grid[p][c + 1] == 0) MOVE(grid[p][c + 1], grid[p][t]);
				if (grid[p][c] == grid[p][c + 1])
				{
					grid[p][c] *= 2;
					grid[p][c + 1] = 0;
				}
			}
		}
		else if (strcmp(DIR, "right") == 0)
		{
			for (int c = N - 1; c; c--)
			{
				t = c;
				while (--t >= 0 && grid[p][c] == 0) MOVE(grid[p][c], grid[p][t]);
				t = c - 1;
				while (--t >= 0 && grid[p][c - 1] == 0) MOVE(grid[p][c - 1], grid[p][t]);
				if (grid[p][c] == grid[p][c - 1])
				{
					grid[p][c] *= 2;
					grid[p][c - 1] = 0;
				}
			}
		}
		else if (strcmp(DIR, "up") == 0)
		{
			for (int r = 0; r < N - 1; r++)
			{
				t = r;
				while (++t < N && grid[r][p] == 0) MOVE(grid[r][p], grid[t][p]);
				t = r + 1;
				while (++t < N && grid[r + 1][p] == 0) MOVE(grid[r + 1][p], grid[t][p]);
				if (grid[r][p] == grid[r + 1][p])
				{
					grid[r][p] *= 2;
					grid[r + 1][p] = 0;
				}
			}
		}
		else if (strcmp(DIR, "down") == 0)
		{
			for (int r = N - 1; r; r--)
			{
				t = r;
				while (--t >= 0 && grid[r][p] == 0) MOVE(grid[r][p], grid[t][p]);
				t = r - 1;
				while (--t >= 0 && grid[r - 1][p] == 0) MOVE(grid[r - 1][p], grid[t][p]);
				if (grid[r][p] == grid[r - 1][p])
				{
					grid[r][p] *= 2;
					grid[r - 1][p] = 0;
				}
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", grid[i][j]);
		}
		puts("");
	}
}

int main()
{
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		f(i);
	}
	return (0);
}
