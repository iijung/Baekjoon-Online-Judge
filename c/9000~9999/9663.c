#include <stdio.h>

int Board[15];

int nQueen(int n, int d)
{
	if (d > 1)
	{
		for (int i = 1; i < d; i++)
		{
			if (Board[d - 1] - i == Board[d - 1 - i]) return 0;
			if (Board[d - 1] + i == Board[d - 1 - i]) return 0;
		}
		for (int i = 0; i < d - 1; i++)
		{
			if (Board[i] == Board[d - 1]) return 0;
		}
	}
	if (d == n) return 1;

	int total = 0;
	for (int i = 0; i < n; i++)
	{
		Board[d] = i;
		total += nQueen(n, d + 1);
	}
	return total;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", nQueen(n, 0));
	return 0;
}
