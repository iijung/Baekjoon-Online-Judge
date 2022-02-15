#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_data {
	int len;
	char value[51];
} s_data;
s_data Arr[20000];

int compare(const void* a, const void* b)
{
	s_data* pa = (s_data*)a;
	s_data* pb = (s_data*)b;

	if (pa->len == pb->len) return strcmp(pa->value,pb->value);
	return pa->len - pb->len;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n ; i++)
	{
		scanf("%s", &Arr[i].value);
		Arr[i].len = strlen(Arr[i].value);
	}
	qsort(Arr, n, sizeof(s_data), compare);
	for (int i = 0; i < n ; i++)
	{
		if (i > 0 && strcmp(Arr[i].value, Arr[i-1].value) == 0) continue;
		printf("%s\n", Arr[i].value);
	}
	return 0;
}
