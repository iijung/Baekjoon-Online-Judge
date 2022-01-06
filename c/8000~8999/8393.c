#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int sum = n;
	while(--n) sum += n;
	printf("%d", sum);
	return 0;
}
