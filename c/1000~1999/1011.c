#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int t = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int x = 0, y = 0;
		scanf("%d %d", &x, &y);

		int d = y - x;
		int r = sqrt(d);
		if (r * (r - 1) < d && d <= r * r)
		{
			printf("%d\n", r * 2 - 1);
		}
		else if (r * r < d && d <= r * (r + 1))
		{
			printf("%d\n", r * 2);
		} else
		{
			printf("%d\n", r * 2 + 1);
		}

	}
	return 0;
}
