#include <stdio.h>

int main()
{
	int t = 0;
	scanf("%d", &t);

	int h = 0, w = 0, n= 0;
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d %d", &h, &w, &n);
		printf("%d\n", (n % h ? n % h : h) * 100 + ((n - 1) / h + 1));
	}
	return 0;
}
