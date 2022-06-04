#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%ld\n", (long  int)n * (n - 1) * (n - 2) / 6);
	printf("3");
	return (0);
}
