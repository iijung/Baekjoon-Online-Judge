#include <stdio.h>
#include <string.h>

char Arr[400][400];

void f(int n, int x, int y)
{
	if (n == 1)
	{
		Arr[x][y] = '*';
		return ;
	}
	for (int i = 0; i < 4 * n - 3; i++)
	{
		Arr[x][y + i] = '*';
		Arr[x + i][y] = '*';
		Arr[x + i][y + 4 * n - 4]= '*';
		Arr[x + 4 * n - 4][y + i]= '*';
	}
	f(n - 1, x + 2, y + 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < 4 * n - 3; i++)
		memset(Arr[i], ' ', 4 * n - 3);
	f(n,0,0);
	for(int i = 0; i < 4 * n - 3; i++)
		puts(Arr[i]);
	return (0);
}
