#include <stdio.h>

int f(int x)
{
	if (x < 100) return 1;

	char arr[3] = { x / 100, (x % 100) / 10, x % 10 };
	if (arr[1] - arr[0] == arr[2] - arr[1]) return 1;

	return 0;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (f(i)) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
