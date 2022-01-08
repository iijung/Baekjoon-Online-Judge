#include <stdio.h>

int d(int n)
{
	int sum = n;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main()
{
	int arr[10001] = {0};
	for (int i = 1; i < 10001; i++)
	{
		int t = d(i);
		if (t < 10001) arr[t] = 1;
	}
	for (int i = 1; i < 10001; i++)
	{
		if (!arr[i] ) printf("%d\n", i);
	}
	return 0;
}
