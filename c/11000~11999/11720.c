#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	char arr[100] = {0};
	scanf("%s", arr);

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i] - '0';
	}
	printf("%d", sum);
	return 0;
}
