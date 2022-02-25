#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);

	int c = 0;
	scanf("%d", &c);

	b += c;
	a += b / 60;
	a %= 24;
	b %= 60;
	printf("%d %d", a, b);
	return 0;
}
