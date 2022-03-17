#include <stdio.h>

int is_666(int n)
{
	while (n)
	{
		if (n % 1000 == 666) return 1;
		n /= 10;
	}
	return 0;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int cnt = 665;
	while (n)
	{
		cnt++;
		if (is_666(cnt)) n--;
	}
	printf("%d", cnt);
	return 0;
}
