#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
    return 0;
}
//i;char s[101];main(n){scanf("%d",&n);while(i++<n)puts(memset(s,42,n));}
