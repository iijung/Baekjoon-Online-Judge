#include <stdio.h>
#include <string.h>

char Arr[64][65];

void f(int x, int y, int size)
{
	int exist_0 = 0;
	int exist_1 = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (Arr[x + i][y + j] == '0') exist_0 = 1;
			else exist_1 = 1;
		}
	}
	if (exist_0 == 1 && exist_1 == 0)
	{
		printf("0");
	}
	else if (exist_0 == 0 && exist_1 == 1)
	{
		printf("1");
	}
	else {
		printf("(");
		f(x, y, size / 2);
		f(x, y + size / 2, size / 2);
		f(x + size / 2, y, size / 2);
		f(x + size / 2, y + size / 2, size / 2);
		printf(")");
	}
}


int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", Arr[i]);
	}

	char result[100] = {0};
	f(0, 0, n);
	return 0;
}
