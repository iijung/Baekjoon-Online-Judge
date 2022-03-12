#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int f = 0;
	scanf("%d", &f);

	n = (n / 100) * 100;
	while (n % f != 0) n++;
	printf("%02d", n % 100);

	return 0;
}
