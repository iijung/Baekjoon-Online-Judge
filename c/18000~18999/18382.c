#include <stdio.h>
#include <string.h>

#define MOVE(a,b) {a = b; b = 0;}

int S;
char M[41];
int Grid[4][4];

void init()
{
	scanf("%d", &S);
	scanf("%s", M);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &Grid[i][j]);
		}
	}
}

int move(char cmd, int val, int row, int col)
{
	int t;
	int score = 0;

	for (int p = 0; p < 4; p++)
	{
		switch (cmd)
		{
		case 'L':
			for (int c = 0; c < 3; c++)
			{
				t = c;
				while (++t < 4 && Grid[p][c] == 0) MOVE(Grid[p][c], Grid[p][t]);
				t = c + 1;
				while (++t < 4 && Grid[p][c + 1] == 0) MOVE(Grid[p][c + 1], Grid[p][t]);
				if (Grid[p][c] == Grid[p][c + 1])
				{
					Grid[p][c] *= 2;
					Grid[p][c + 1] = 0;
					score += Grid[p][c];
				}
			}
			break;
		case 'R':
			for (int c = 3; c; c--)
			{
				t = c;
				while (--t >= 0 && Grid[p][c] == 0) MOVE(Grid[p][c], Grid[p][t]);
				t = c - 1;
				while (--t >= 0 && Grid[p][c - 1] == 0) MOVE(Grid[p][c - 1], Grid[p][t]);
				if (Grid[p][c] == Grid[p][c - 1])
				{
					Grid[p][c] *= 2;
					Grid[p][c - 1] = 0;
					score += Grid[p][c];
				}
			}
			break;
		case 'U':
			for (int r = 0; r < 3; r++)
			{
				t = r;
				while (++t < 4 && Grid[r][p] == 0) MOVE(Grid[r][p], Grid[t][p]);
				t = r + 1;
				while (++t < 4 && Grid[r + 1][p] == 0) MOVE(Grid[r + 1][p], Grid[t][p]);
				if (Grid[r][p] == Grid[r + 1][p])
				{
					Grid[r][p] *= 2;
					Grid[r + 1][p] = 0;
					score += Grid[r][p];
				}
			}
			break;
		case 'D':
			for (int r = 3; r; r--)
			{
				t = r;
				while (--t >= 0 && Grid[r][p] == 0) MOVE(Grid[r][p], Grid[t][p]);
				t = r - 1;
				while (--t >= 0 && Grid[r - 1][p] == 0) MOVE(Grid[r - 1][p], Grid[t][p]);
				if (Grid[r][p] == Grid[r - 1][p])
				{
					Grid[r][p] *= 2;
					Grid[r - 1][p] = 0;
					score += Grid[r][p];
				}
			}
			break;
		}
	}
	Grid[row][col] = val;
	return (score);
}

int main()
{
	init();
	int size = strlen(M) / 4;
	for (int i = 0; i < size; i++)
	{
		S += move(M[4 * i], M[4 * i + 1] - '0', M[4 * i + 2] - '0', M[4 * i + 3] - '0');
	}
	printf("%d", S);
	return (0);
}
