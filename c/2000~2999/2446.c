#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);


	for (int i = n -1; i > 0; i--)
	{
		for (int j = 0; j < n - 1; j++)
		{
			printf("%c", j < n - 1 - i? ' ' : '*');
		}
		printf("*");
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			printf("%c", j < n - 1 - i? ' ' : '*');
		}
		printf("*");
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
/*
#define A(a) while(a){memset(s,42,2*n);memset(s,32,i-1);s[2*n-i]=0;puts(s);}
i;char s[200];main(n){scanf("%d", &n);A(i++<n)i--;A(--i)}
*/
