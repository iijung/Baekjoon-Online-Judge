#include <stdio.h>

char f(int arr[])
{
	int front = 0;
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] == 0) front++;
	}
	if (front == 1) return 'A';
	if (front == 2) return 'B';
	if (front == 3) return 'C';
	if (front == 4) return 'D';
	return 'E';
}

int main()
{
	int arr[4] = {0};
	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
		printf("%c\n", f(arr));
	}
	return 0;
}
