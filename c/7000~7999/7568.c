#include <stdio.h>

typedef struct t_data{
	int weight;
	int height;
	int rank;
} t_data;

int main()
{
	int n = 0;
	scanf("%d", &n);

	t_data arr[50] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &arr[i].height, &arr[i].weight);
	}

	for (int i = 0; i < n ; i++)
	{
		arr[i].rank = 1;
		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;
			if (arr[i].height < arr[j].height && arr[i].weight < arr[j].weight) arr[i].rank++;
		}
		printf("%d ", arr[i].rank);
	}
	return 0;
}
