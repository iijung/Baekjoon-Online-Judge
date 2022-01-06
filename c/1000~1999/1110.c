#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int t = n, a = 0, b = 0;
	int cycle = 0;
	while (1) {
		cycle++;
		a = t / 10;
		b = t % 10;
		t = (b * 10) + ((a + b) % 10);
		if (t == n) break;
	}
	printf("%d", cycle);
	return 0;
}
