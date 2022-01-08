#include <stdio.h>

int main()
{
	int c = 0;
	scanf("%d", &c);

	for (int i = 0; i < c; i++)
	{
		int n = 0;
		int sum = 0;
		int scores[1000] = {0};

		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &scores[j]);
			sum += scores[j];
		}

		int cnt = 0;
		double avg = (double)sum / n;
		for (int j = 0; j < n; j++)
		{
			if (scores[j] > avg) cnt++;
		}
		printf("%.3f%%\n", (double)cnt / n * 100);
	}
	return 0;
}
