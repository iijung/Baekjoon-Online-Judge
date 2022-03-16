#include <stdio.h>
#include <stdlib.h>

int ase(const void* a, const void* b)
{
	return *(int*)a > *(int*)b? 1 : -1;
}

int Dwarf[9];
int f(int liar1, int liar2)
{
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		if (i == liar1 || i == liar2) continue;
		sum += Dwarf[i];
	}
	return sum;
}

int main()
{
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &Dwarf[i]);
	}
	qsort(Dwarf, 9, sizeof(int), ase);

	int liar1 = 0, liar2 = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (i != j && f(i,j) == 100)
			{
				liar1 = i;
				liar2 = j;
				break;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (i == liar1 || i == liar2) continue;
		printf("%d\n", Dwarf[i]);
	}
	return 0;
}
