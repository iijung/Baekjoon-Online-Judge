#include <stdio.h>

int main()
{
	int a = 0, b = 0, v = 0;
	scanf("%d %d %d", &a, &b, &v);
	printf("%d", ((v - b) / (a - b)) + ((v - b) % (a - b)? 1 : 0));
	return 0;
}
