#include <stdio.h>
#include <string.h>

int main()
{
	int arr[8] = {0};
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &arr[i]);
	}

	int ase[8] = {1,2,3,4,5,6,7,8};
	int desc[8] = {8,7,6,5,4,3,2,1};

	if (!memcmp(arr, ase, sizeof(int) * 8)) printf("ascending");
	else if (!memcmp(arr, desc, sizeof(int) * 8)) printf("descending");
	else printf("mixed");
	return 0;
}
