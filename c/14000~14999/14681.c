#include <stdio.h>

int main()
{
	int x = 0, y = 0;
	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0 && y > 0) putchar('1');
	else if (x < 0 && y > 0) putchar('2');
	else if (x < 0 && y < 0) putchar('3');
	else if (x > 0 && y < 0) putchar('4');
	else putchar('0');
	return 0;
}
