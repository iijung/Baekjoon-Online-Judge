#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	if (n == 1)
	{
		printf("*");
		return (0);
	}
	for (int i = 0; i < 2 * n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == n - 1 && (i + j) % 2)
				continue;
			printf((i + j) % 2?" ":"*");
		}
		printf("\n");
	}
	return (0);
}
//i,j;main(n){if(n==scanf("%d",&n)){printf("*");return 0;}for(;i<2*n;i++){for(j=0;j<n;j++){if(j==n-1&&(i+j)%2)continue;putchar((i+j)%2?32:42);}puts("");}}
