#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = n / 5; i >= 0; i--)
	{
		int t = n - 5 * i;
		if (t % 3 == 0)
		{
			printf("%d", i + t / 3);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
