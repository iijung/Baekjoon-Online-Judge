#include <stdio.h>

int main()
{
	int arr[4][2] = {0};
	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}
	int max = arr[0][1] > arr[3][0]? arr[0][1] : arr[3][0];
	int t23 = arr[0][1] - arr[1][0] + arr[1][1];
	int t34 = arr[3][0] - arr[2][1] + arr[2][0];
	if (max < t23) max = t23;
	if (max < t34) max = t34;
	printf("%d", max);
	return 0;
}
