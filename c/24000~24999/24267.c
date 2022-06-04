#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%ld\n", (long  int)n * (n - 1) * (n - 2) / 6);
	printf("3");
	return (0);
}
/*
	k(n)= ∑ 1 = n
		  ∑ k(n) = n * (n + 1) / 2
	j(n)= ∑ k(n - 1) = n * (n - 1) / 2
		  ∑ j(n) = n * (n + 1) * (n - 1) / 6
	i(n)= ∑ j(n - 1) = n * (n - 1) * (n - 2) / 6
*/
