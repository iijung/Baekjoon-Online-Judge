#include <stdio.h>
#include <stdlib.h>

int ase(const void* a, const void* b)
{
	return *(char*)a > *(char*) b? 1 : -1;
}

int L, C;
char C_Data[16];
char L_Data[16];

int check()
{
	int vowel = 0;
	int consonant = 0;
	for (int i = 0; i < L; i++)
	{
		if (L_Data[i] == 'a' || L_Data[i] == 'e' || L_Data[i] == 'i' || L_Data[i] == 'o' || L_Data[i] == 'u') vowel++;
		else consonant++;
	}
	if (vowel >= 1 && consonant >= 2) return 1;
	return 0;
}

void f(int l, int c)
{
	if (l == L)
	{
		if (check())
		{
			L_Data[L] = '\0';
			printf("%s\n", L_Data);
		}
		return;
	}
	for (int i = c; i < C; i++)
	{
		L_Data[l] = C_Data[i];
		f(l+1, i+1);
	}
}

int main()
{
	scanf("%d %d", &L, &C);
	for (int i = 0; i < C; i++)
	{
		scanf(" %c", &C_Data[i]);
	}
	qsort(C_Data, C, sizeof(char), ase);
	f(0,0);
	return 0;
}
