#include <stdio.h>

int main()
{
	int arr[9] = {0};
	int max = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);

		if (arr[i] > arr[max]) max = i;
	}
	printf("%d\n", arr[max]);
	printf("%d\n", max + 1 );
	return 0;
}
