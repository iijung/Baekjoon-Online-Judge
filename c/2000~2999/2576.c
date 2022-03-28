#include <stdio.h>

int main()
{
	int min = -1;
	int sum = 0;
	int arr[7] = {0};
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 0) continue;

		sum += arr[i];
		if (min < 0 || arr[min] > arr[i]) min = i;
	}

	printf("%d", sum? sum : -1);
	if (min >= 0) printf("\n%d", arr[min]);

	return 0;
}
