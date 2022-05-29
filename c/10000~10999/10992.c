#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n + i; j++)
			printf(i == n - 1 || abs(n - j) == i? "*" : " ");
		printf("\n");
	}
}
//i,j;main(n){for(scanf("%d",&n);i<n;++i){for(j=1;j<=n+i;j++)putchar(i==n-1||abs(n-j)==i?42:32);puts("");}}
