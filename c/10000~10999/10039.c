#include <stdio.h>

int main()
{
	int sum = 0;
	int scores[5] = {0};
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &scores[i]);
		if (scores[i] < 40) scores[i] = 40;
		sum += scores[i];
	}
	printf("%d", sum / 5);
	return 0;
}
