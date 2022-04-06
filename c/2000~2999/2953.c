#include <stdio.h>

int main()
{
	int winner = 0;
	int arr[5][5] = {0};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
			arr[i][4] += arr[i][j];
		}
		if (arr[winner][4] < arr[i][4]) winner = i;
	}
	printf("%d %d", winner + 1, arr[winner][4]);
	return 0;
}
