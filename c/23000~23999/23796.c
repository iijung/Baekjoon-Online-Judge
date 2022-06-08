#include <stdio.h>

#define MOVE(a,b) {a = b; b = 0;}
#define MERGE(a,b) {a += b; b = 0;}

unsigned int	 Grid[8][8];

void move()
{
	char cmd;
	scanf(" %c", &cmd);

	int t;
	for (int p = 0; p < 8; p++)
	{
		switch(cmd)
		{
		case 'L':
			for (int c = 0; c < 7; c++)
			{
				t = c;
				while (++t < 8 && Grid[p][c] == 0) MOVE(Grid[p][c], Grid[p][t]);
				t = c + 1;
				while (++t < 8 && Grid[p][c + 1] == 0) MOVE(Grid[p][c + 1], Grid[p][t]);
				if (Grid[p][c] == Grid[p][c + 1]) MERGE(Grid[p][c], Grid[p][c + 1]);
			}
			break;
		case 'R':
			for (int c = 7; c; c--)
			{
				t = c;
				while (--t >= 0 && Grid[p][c] == 0) MOVE(Grid[p][c], Grid[p][t]);
				t = c - 1;
				while (--t >= 0 && Grid[p][c - 1] == 0) MOVE(Grid[p][c - 1], Grid[p][t]);
				if (Grid[p][c] == Grid[p][c - 1]) MERGE(Grid[p][c], Grid[p][c - 1]);
			}
			break;
		case 'U':
			for (int r = 0; r < 7; r++)
			{
				t = r;
				while (++t < 8 && Grid[r][p] == 0) MOVE(Grid[r][p], Grid[t][p]);
				t = r + 1;
				while (++t < 8 && Grid[r + 1][p] == 0) MOVE(Grid[r + 1][p], Grid[t][p]);
				if (Grid[r][p] == Grid[r + 1][p]) MERGE(Grid[r][p], Grid[r + 1][p]);
			}
			break;
		case 'D':
			for (int r = 7; r; r--)
			{
				t = r;
				while (--t >= 0 && Grid[r][p] == 0) MOVE(Grid[r][p], Grid[t][p]);
				t = r - 1;
				while (--t >= 0 && Grid[r - 1][p] == 0) MOVE(Grid[r - 1][p], Grid[t][p]);
				if (Grid[r][p] == Grid[r - 1][p]) MERGE(Grid[r][p], Grid[r - 1][p]);
			}
			break;
		}
	}
}

void show()
{
	for (int i = 0; i < 8; i++)
	{
		int start = 1;
		for (int j = 0; j < 8; j++)
		{
			if (start) start = 0;
			else printf(" ");
			printf("%u", Grid[i][j]);
		}
		puts("");
	}
}

int main()
{
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			scanf("%u", &Grid[i][j]);
	move();
	show();
	return (0);
}
