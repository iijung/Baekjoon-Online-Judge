#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int arr[9] = {0};
	for (int t = n; t > 0; t /= 10)
	{
		if (t % 10 == 9) arr[6]++;
		else arr[t % 10]++;
	}
	arr[6] = (arr[6] + 1) / 2;

	int max = 0;
	for (int i = 1; i < 9; i++)
	{
		if (arr[max] < arr[i]) max = i;
	}
	printf("%d", arr[max]);
	return 0;
}
