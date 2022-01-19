#include <stdio.h>

int main()
{
	int t = 0;
	scanf("%d", &t);

	int fibonacci[41] = {0,1,1};
	for (int i = 3; i < 41; i++)
	{
		fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
	}

	for (int i = 0; i < t; i++)
	{
		int n  = 0;
		scanf("%d", &n);
		if (n == 0) printf("1 0\n");
		else printf("%d %d\n", fibonacci[n-1], fibonacci[n]);
	}
	return 0;
}
