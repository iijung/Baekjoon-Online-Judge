#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int id;
	int age;
	char name[101];
} t_person;

int compare(const void* a, const void* b)
{
	t_person* p1 = (t_person*)a;
	t_person* p2 = (t_person*)b;
	if (p1->age > p2->age) return 1;
	if (p1->age < p2->age) return -1;
	if (p1->id > p2->id) return 1;
	if (p1->id < p2->id) return -1;
	return 0;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	t_person* p = (t_person*)malloc(sizeof(t_person) * n);
	for (int i = 0; i < n; i++)
	{
		p[i].id = i;
		scanf("%d %s", &p[i].age, p[i].name);
	}

	qsort(p, n, sizeof(t_person), compare);

	for (int i = 0; i < n; i++)
	{
		printf("%d %s\n", p[i].age, p[i].name);
	}

	free(p);
	return 0;
}
