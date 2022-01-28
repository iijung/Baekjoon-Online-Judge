#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	while(1)
	{
		scanf("%d %d", &a, &b);
		if (!a && !b) break;

		if (b % a == 0) puts("factor");
		else if (a % b == 0) puts("multiple");
		else puts("neither");
	}
	return 0;
}
