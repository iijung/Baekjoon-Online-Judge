#include <stdio.h>

int main()
{
	int t = 0;
	int a = 0, b = 0;
	scanf("%d", &t);

	for (int i = 1; i <= t; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}
	return 0;
}
