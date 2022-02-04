#include <stdio.h>

long long int Arr[101] = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9};

long long int f(int n)
{
	if (n < 4) return 1;
	if (n < 6) return 2;
	if (!Arr[n]) Arr[n] = f(n-1) + f(n-5);
	return Arr[n];
}

int main()
{
	int t = 0;
	scanf("%d", &t);
	while (t--)
	{
		int n = 0;
		scanf("%d", &n);
		printf("%lld\n", f(n));
	}
	return 0;
}
