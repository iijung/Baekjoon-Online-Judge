#include <stdio.h>
#include <stdlib.h>

int Arr[500000];
int compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	double sum = 0;
	int count[8001] = {0};
	int max = 0, min = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &Arr[i]);

		sum += Arr[i];
		count[Arr[i]+4000]++;
		if (!max || max < Arr[i]) max = Arr[i];
		if (!min || min > Arr[i]) min = Arr[i];
	}

	qsort(Arr, n, sizeof(int), compare);

	int fre[2] = {0};
	for (int i = 1; i < 8001; i++)
	{
		if (count[fre[0]] > count[i]) continue;
		if (count[fre[0]] < count[i])
		{
			fre[0] = i;
			fre[1] = i;
		}
		else if (count[fre[0]] == count[i] && fre[0] == fre[1])
		{
			fre[1] = i;
		}
	}

	printf("%.0f\n", sum /n);
	printf("%d\n", Arr[n/2]);
	printf("%d\n", fre[1] - 4000);
	printf("%d\n", max - min);
	return 0;
}
