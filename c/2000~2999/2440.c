#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		puts("");
	}
	return 0;
}
// char s[];main(n){scanf("%d",&n);for(memset(s,42,n);n--;s[n]=0)puts(s);}
