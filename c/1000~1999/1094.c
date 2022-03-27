#include <stdio.h>

int sum(int arr[], int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++) sum += arr[i];
	return sum;
}

int main()
{
	int x = 0;
	scanf("%d", &x);

	int len = 1;
	int bar[64] = {64, 0};

	while (sum(bar, len) > x)
	{
		bar[len - 1] /= 2;
		if (sum(bar,len) < x)
		{
			bar[len] = bar[len - 1];
			len++;
		}
	}
	printf("%d", len);
	return 0;
}
