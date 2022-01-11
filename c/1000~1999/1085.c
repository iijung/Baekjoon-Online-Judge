#include <stdio.h>
#include <math.h>

int main()
{
	int x = 0, y = 0, w = 0, h = 0;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int min = x;
	if (min > y) min = y;
	if (min > w - x) min = w - x;
	if (min > h - y) min = h - y;
	printf("%d", min);
	return 0;
}
