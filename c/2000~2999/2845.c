#include <stdio.h>

int main()
{
	int l = 0, p = 0;
	scanf("%d %d", &l, &p);

	int personnel[5] = {0};
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &personnel[i]);
	}

	int answer = l * p;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", personnel[i] - answer);
	}
	return 0;
}
