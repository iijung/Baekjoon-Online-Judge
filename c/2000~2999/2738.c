#include <stdio.h>

int A[100][100], B[100][100];

int main()
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &B[i][j]);
			A[i][j] += B[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j != 0) printf(" ");
			printf("%d", A[i][j]);
		}
		printf("\n");
	}
	return (0);
}
