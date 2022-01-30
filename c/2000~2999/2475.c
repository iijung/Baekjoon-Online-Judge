#include <stdio.h>

int main()
{
	int number[6] = {0};
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &number[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		number[5] += number[i] * number[i];
	}
	printf(" = %d", number[5]);
	return 0;
}
