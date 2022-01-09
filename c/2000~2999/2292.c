#include <stdio.h>

int f(int a)
{
	return 3 * a * (a + 1) + 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);

	int i = 0;
	while (f(i) < n) i++;
	printf("%d", i + 1);
	return 0;
}
