#include <stdio.h>

int f(int a)
{
	return a * (a + 1) / 2;
}
int main()
{
	int x = 0;
	scanf("%d", &x);

	int i = 0, t = 0;
	while ((t = f(i)) < x) i++;


	if (i % 2) {
		printf("%d/%d", 1 + t - x, i - t + x);
	} else {
		printf("%d/%d", i - t + x, 1 + t - x);
	}
	return 0;
}
