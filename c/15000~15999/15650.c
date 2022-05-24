#include <stdio.h>

int Arr[8];

void f(int d, int n, int m)
{
	if (d == m)
	{
		printf("%d", Arr[0]);
		for (int i = 1; i < m; i++) printf(" %d", Arr[i]);
		printf("\n");
		return ;
	}

	if (d == 0) Arr[d] = 1;
	else Arr[d] = Arr[d - 1] + 1;
	for (int i = Arr[d]; i <= n; i++)
	{
		Arr[d] = i;
		f(d + 1, n, m);
	}
}

int main()
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	f(0, n, m);
	return 0;
}
