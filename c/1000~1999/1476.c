#include <stdio.h>

int main()
{
	int e = 0, s = 0, m = 0;
	scanf("%d %d %d", &e, &s, &m);

	int year = 0;
	while (1)
	{
		year++;
		if ((year - e) % 15) continue;
		if ((year - s) % 28) continue;
		if ((year - m) % 19) continue;
		printf("%d", year);
		break;
	}
	return 0;
}
