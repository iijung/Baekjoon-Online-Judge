#include <stdio.h>
#include <stdlib.h>

int ase(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}
int desc(const void* a, const void* b)
{
	return *(int*)b - *(int*)a;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int a[50] = {0}, b[50] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}

	qsort(a, n, sizeof(int), ase);
	qsort(b, n, sizeof(int), desc);

	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i] * b[i];
	}
	printf("%d", s);
	return 0;
}
