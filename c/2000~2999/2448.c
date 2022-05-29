#include <stdio.h>
#include <string.h>

char Arr[3072][6145];

void f(int n, int x, int y)
{
	if (n == 3)
	{
		Arr[x][y + 2] = '*';
		Arr[x + 1][y + 1] = '*';
		Arr[x + 1][y + 3] = '*';
		Arr[x + 2][y + 0] = '*';
		Arr[x + 2][y + 1] = '*';
		Arr[x + 2][y + 2] = '*';
		Arr[x + 2][y + 3] = '*';
		Arr[x + 2][y + 4] = '*';
		return ;
	}
	f(n / 2, x    , y + n / 2);
	f(n / 2, x + n / 2, y    );
	f(n / 2, x + n / 2, y + n);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	memset(Arr, ' ', sizeof(Arr));
	f(n, 0, 0);
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < 2 * n; j++)
		{
			printf("%c",Arr[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
