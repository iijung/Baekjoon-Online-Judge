#include <stdio.h>

int main()
{
	int arr[3] = {0};
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

	if (arr[0] == arr[1] && arr[1] == arr[2]) printf("%d", 10000 + arr[0] * 1000);
	else if (arr[0] == arr[1] || arr[0] == arr[2]) printf("%d", 1000 + arr[0] * 100);
	else if (arr[1] == arr[2]) printf("%d", 1000 + arr[1] * 100);
	else if (arr[0] > arr[1] && arr[0] > arr[2]) printf("%d", arr[0] * 100);
	else if (arr[1] > arr[0] && arr[1] > arr[2]) printf("%d", arr[1] * 100);
	else if (arr[2] > arr[0] && arr[2] > arr[1]) printf("%d", arr[2] * 100);
	return 0;
}
