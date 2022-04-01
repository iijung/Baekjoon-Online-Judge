#include <stdio.h>

int Arr[8];
int Check[8];

void f(int d, int n, int m)
{
	if (d == m)
	{
		for (int i = 0; i < m; i++) printf("%d ", Arr[i]);
		printf("\n");
		return ;
	}

	for (int i = 1; i <= n; i++)
	{
		if (Check[i - 1]) continue;

		Check[i - 1] = 1;
		Arr[d] = i;
		f(d + 1, n, m);
		Check[i - 1] = 0;
	}
}

int main()
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);

	int arr[8] = {0};
	f(0, n, m);
	return 0;
}
