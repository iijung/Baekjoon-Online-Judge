#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) break;
		printf("%s\n", a > b? "Yes" : "No");
	}
	return (0);
}
