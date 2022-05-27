#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) printf("%c", j > i? ' ' : '*');
		for (int j = 0; j < n; j++) printf("%c", j < n - i - 1? ' ' : '*');
		printf("\n");
	}
	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j < n; j++) printf("%c", j > i? ' ' : '*');
		for (int j = 0; j < n; j++) printf("%c", j < n - i - 1? ' ' : '*');
		printf("\n");
	}
	return 0;
}
/*
#define A(a) while(a){memset(s,42,2*n);memset(s+i,32,2*(n-i));puts(s);}
i;char s[201];main(n){scanf("%d",&n);A(i++<n)--i;A(--i);}
*/
