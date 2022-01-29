#include <stdio.h>

int main()
{
	int hamburger[3] = {0};
	int juices[2] = {0};
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &hamburger[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &juices[i]);
	}

	int min = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int t = hamburger[i] + juices[j] - 50;
			if (!min || min > t) min = t;
		}
	}
	printf("%d", min);
	return 0;
}
