#include <stdio.h>

int f(int a)
{
	int ans = 0;
	while (a > 0)
	{
		ans *= 10;
		ans += a % 10;
		a /= 10;
	}
	return ans;
}

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);

	int fa = f(a);
	int fb = f(b);
	printf("%d", fa > fb ? fa : fb);
	return 0;
}

