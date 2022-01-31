#include <stdio.h>

int fibonacci[46] = {0,1,1};

int getFibonacci(int n)
{
	if (n == 0) return 0;
	if (fibonacci[n]) return fibonacci[n];
	fibonacci[n] = getFibonacci(n-1) + getFibonacci(n-2);
	return fibonacci[n];
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", getFibonacci(n));
	return 0;
}
