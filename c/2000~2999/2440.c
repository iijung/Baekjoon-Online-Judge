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
