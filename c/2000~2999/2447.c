#include <stdio.h>

void f(int n, int x, int y)
{
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1) putchar(' ');
	else if (n / 3 == 0) putchar('*');
	else f(n / 3, x, y);
}

int main()
{

	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < n; j++)
		{
			f(n, i, j);
		}
		putchar('\n');
	}
	return 0;
}
