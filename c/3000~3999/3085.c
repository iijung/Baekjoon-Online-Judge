#include <stdio.h>

#define MAX 51
#define SWAP(a, b) {int t=a; a=b; b=t;}

static int	n;
static char	board[MAX][MAX];

int	checkMax()
{
	int	max = 0;
	int	cnt;

	// check col
	for (int row = 0; row < n; ++row)
	{
		cnt = 1;
		for (int col = 1; col < n; ++col)
		{
			if (board[row][col] != board[row][col - 1])
				cnt = 1;
			else
				++cnt;
			max = cnt > max? cnt: max;
		}
		max = cnt > max? cnt: max;
	}
	// check row
	for (int col = 0; col < n; ++col)
	{
		cnt = 1;
		for (int row = 1; row < n; ++row)
		{
			if (board[row][col] != board[row - 1][col])
				cnt = 1;
			else
				++cnt;
			max = cnt > max? cnt: max;
		}
		max = cnt > max? cnt: max;
	}
	return max;
}

int	candy()
{
	int	max = checkMax();
	int	tmp = 0;

	for (int row = 0; row < n; ++row)
	{
		for (int col = 0; col < n; ++col)
		{
			// swap right
			if (col + 1 < n && board[row][col] != board[row][col + 1])
			{
				SWAP(board[row][col], board[row][col + 1]);
				tmp = checkMax();
				max = tmp > max? tmp: max;
				SWAP(board[row][col], board[row][col + 1]);
			}
			// swap down
			if (row + 1 < n && board[row][col] != board[row + 1][col])
			{
				SWAP(board[row][col], board[row + 1][col]);
				tmp = checkMax();
				max = tmp > max? tmp: max;
				SWAP(board[row][col], board[row + 1][col]);
			}
		}
	}
	return max;
}

int	main(void)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%s", board[i]);
	printf("%d", candy());
	return 0;
}
