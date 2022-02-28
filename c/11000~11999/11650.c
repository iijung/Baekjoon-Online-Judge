#include <stdio.h>
#include <stdlib.h>

typedef struct s_xy{
	int x;
	int y;
} t_xy;
t_xy Arr[100000];

int compare(const void* a, const void* b)
{
	t_xy* aa = (t_xy*)a;
	t_xy* bb = (t_xy*)b;
	if (aa->x < bb->x) return -1;
	if (aa->x > bb->x) return 1;
	if (aa->y < bb->y) return -1;
	return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &Arr[i].x, &Arr[i].y);
	}

	qsort(Arr, n, sizeof(t_xy), compare);

	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", Arr[i].x, Arr[i].y);
	}
	return 0;
}
