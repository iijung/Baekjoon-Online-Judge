#include <stdio.h>

int main()
{
	int year = 0;
	scanf("%d", &year);

	if (year % 4 == 0 && ((year % 100 != 0) || (year % 400 == 0))) putchar('1');
	else putchar('0');
	return 0;
}
