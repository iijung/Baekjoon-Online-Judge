#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n + i; j++)
		{
			printf("%c", j - i + 1 == n || j + i - 1== n? '*' : ' ');
		}
		printf("\n");
	}
	return 0;
}
//i,j;main(n){scanf("%d",&n);while(i++<n){for(j=1;j<n+i;j++)printf(abs(j-n)==i-1?"*":" ");puts("");}}
