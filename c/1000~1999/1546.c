#include <stdio.h>

int main()
{
	int n = 0, m = 0;
	int scores[1000] = {0};
	double sum = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &scores[i]);
		if (scores[m] < scores[i]) m = i;
		sum += scores[i];
	}
	sum = sum / scores[m] * 100;
	printf("%f", sum / n);
	return 0;
}
