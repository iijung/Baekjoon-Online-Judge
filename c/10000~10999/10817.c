#include <stdio.h>

#define SWAP(x,y) {int t=x; x=y; y=t; }

int main()
{
	int arr[3] = {0};
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

	for (int i = 2; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j+1]) SWAP(arr[j], arr[j+1]);
		}
	}
	printf("%d", arr[1]);
	return 0;
}
