#include <stdio.h>

long long int Fibonacci[91] = {0,1,1};
long long int getFibonacci(int n)
{
	if (n == 0) return 0;
	if (!Fibonacci[n]) Fibonacci[n] = getFibonacci(n-1) + getFibonacci(n-2);
	return Fibonacci[n];
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%lld", getFibonacci(n));
	return 0;
}
