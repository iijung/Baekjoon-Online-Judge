#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//i;char s[101];main(n){scanf("%d",&n);while(i<n)puts(memset(s,42,++i));while(i-1){s[--i]=0;puts(s);}}
