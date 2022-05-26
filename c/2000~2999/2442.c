#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > 0; j--)
		{
			printf("%c", i < j ? ' ' : '*');
		}
		printf("*");
		for (int j = 1; j < n; j++)
		{
			if (i >= j) printf("*");
		}
		printf("\n");
	}

	return 0;
}
//i;char s[200];main(n){scanf("%d",&n);for(i=n;i--;){memset(s,42,n*2-1);memset(s,32,i);s[2*n-i-1]=0;puts(s);}}
