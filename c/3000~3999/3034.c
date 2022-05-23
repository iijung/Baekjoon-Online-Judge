#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0, w = 0, h = 0;
	scanf("%d %d %d", &n, &w, &h);

	int len = 0;
	double max = sqrt(w * w + h * h);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &len);
		printf("%s\n", max < (double)len? "NE" : "DA");
	}
	return (0);
}
