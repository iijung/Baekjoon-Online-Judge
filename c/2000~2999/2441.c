#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c", j < i? ' ' : '*');
		}
		printf("\n");
	}
	return 0;
}
// i;main(n){scanf("%d",&n);while(i<n*n){putchar(i%n<i/n?32:42);if(++i%n==0)puts("");}}
