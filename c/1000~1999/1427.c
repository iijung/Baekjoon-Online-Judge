#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ase(const void* a, const void* b)
{
	return *(char*)b - *(char*)a;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	char s[11] = {0};
	sprintf(s, "%d", n);

	qsort(s, strlen(s), sizeof(char), ase);
	printf("%s", s);
	return 0;
}
